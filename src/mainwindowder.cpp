/***************************************************************************
 *   Copyright (C) 2008 by vigor,,,   *
 *   vigortaurus@mail.ru   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/


#include "mainwindowder.h"


 
#include <q3frame.h>
#include <qdialog.h>
#include <q3widgetstack.h>
#include <qpushbutton.h>
#include <qcombobox.h>
#include <qaction.h>
#include <qlineedit.h>
#include <q3textedit.h>
#include <qmessagebox.h>
//#include <qbutton.h>
#include <QPushButton>
#include <qcheckbox.h>
#include <qdatetime.h>
#include <q3datetimeedit.h> 
#include <qvariant.h>
#include <qfileinfo.h>
#include <qlabel.h>
#include <qstatusbar.h>
#include <q3buttongroup.h>
#include <qradiobutton.h>
#include <qvariant.h>
#include <qinputdialog.h>
#include <qapplication.h>
#include <q3popupmenu.h>
#include <qcursor.h>
#include <QSqlError>
//Added by qt3to4:
#include <Q3SqlSelectCursor>
#include <QKeyEvent>
#include <QSqlQuery>
#include <Q3SqlCursor>
#include <QEvent>
#include <QCloseEvent>

mainwindowder::mainwindowder(QWidget* parent, const char* name, Qt::WFlags fl,QString pathtoelf )
: frmmain(parent,name,fl)
{
	apppath=pathtoelf;
	this->setCaption ( "CashServ-(build: " + QString ( __build__ ) + ")" );

	QFileInfo fiload( apppath+"/execload" );
	QFileInfo fiup( apppath+"/uploadintofile" );
	QFileInfo fielf( apppath+"/cashserv" );
	extcmd=new Q3Process();
	extcmd->setWorkingDirectory(apppath);
	workdir.setPath ( apppath );
	stt=new settings ( apppath);
	dbconn=new dbconnection();
	dbconn->createConnections(apppath);
	QTextCodec::setCodecForTr( QTextCodec::codecForName("utf8") );
	QTextCodec::setCodecForCStrings( QTextCodec::codecForName("utf8") );	
	QTextCodec::setCodecForLocale ( QTextCodec::codecForName("utf8") );
	QString strload;
	QString strupload;
	QString strelf;
	strload=fiload.lastModified().toString("yyyy-MM-dd");
	strupload=fiup.lastModified().toString("yyyy-MM-dd");
	strelf=fielf.lastModified().toString("yyyy-MM-dd");
	
	dateloadscript = new QLabel ( tr ( "Версия execload от "+strload), statusBar() );
	statusBar()->addWidget ( dateloadscript, 0, TRUE );
	dateuploadscript = new QLabel ( tr ( "Версия uploadintofile от " + strupload) ,statusBar() );
	statusBar()->addWidget ( dateuploadscript, 0, TRUE );
	


	QString ss;
	awpsdb = QSqlDatabase::database( DB_AWPS_DBNAME );
	QSqlQuery query(awpsdb);
	query.prepare( "call sp_getversion(@outval)" );
	query.bindValue( 0, ss);
	if (!query.exec())
		qWarning(query.lastError().text());
	if(!query.exec("select @outval"))
	qWarning(query.lastError().text());
	query.next();
	QString strdvversion ="";
	strdvversion=query.value(0).toString();
	datedb = new QLabel ( tr ( "Версия базы данных от "+strdvversion), statusBar() );
	statusBar()->addWidget ( datedb, 0, TRUE );
	exectime = new QLabel ( tr ( "пос. вр. вып. запр. ..."), statusBar() );
	statusBar()->addWidget ( exectime, 0, TRUE );

	

	
	connect ( m_dawnload, SIGNAL ( activated() ), this, SLOT (slot_start_extcmd() ) );
	
	connect( btn_upload, SIGNAL( clicked()), this, SLOT(slot_btn_upload() ) );
	connect( btn_ok, SIGNAL( clicked()), this, SLOT(slot_btnok_identuser() ) );
	connect( btn_cancel, SIGNAL( clicked()), this, SLOT(slot_btcancel_identuser() ) );
	connect( btn_search, SIGNAL( clicked()), this, SLOT(slot_btn_search() ) );
	connect( btn_return, SIGNAL( clicked()), this, SLOT(slot_btn_return()) );
	connect( btn_back, SIGNAL( clicked()), this, SLOT(slot_btn_back()) );
	connect( btn_reset_revise, SIGNAL( clicked()), this, SLOT(slot_btn_reset_revise()) );
	connect( btn_begin_chek, SIGNAL( clicked()), this, SLOT(slot_begin_chek()) );
	connect( btn_back_doct, SIGNAL( clicked()), this, SLOT(slot_back_doct()) );
	connect( btn_close, SIGNAL( clicked()), this, SLOT(slot_btn_close()) );
	connect( btn_close_nochek, SIGNAL( clicked()), this, SLOT(slot_btn_close_nochek()) );
	connect( btn_view, SIGNAL( clicked()), this, SLOT(slot_btn_view()) );
	
	connect( tbl_doc, SIGNAL( doubleClicked(int, int, int,  const QPoint & )), 
				this, SLOT(slot_doubleClicked(int, int, int,  const QPoint &)) );
	connect( tbl_doct, SIGNAL(pressed(int, int, int,  const QPoint & )),
					 this, SLOT(slot_pressed(int, int, int,  const QPoint &)) );

	connect( tbl_doct, SIGNAL(clicked ( int , int , int , const QPoint &  )),
					 this, SLOT(slot_clicked(int, int, int,  const QPoint &)) );
	connect( tbl_box, SIGNAL(clicked ( int , int , int , const QPoint &  )),
					 this, SLOT(slot_clicked_box(int, int, int,  const QPoint &)) );


	connect( tbl_docs_to_process, SIGNAL( doubleClicked(int, int, int,  const QPoint & )), 
					this, SLOT(slot_doubleClicked_to_proc(int, int, int,  const QPoint &)) );
	connect( tbl_doc, SIGNAL( pressed(int, int, int,  const QPoint & )), 
					this, SLOT(slot_pressed_tbl_doc(int, int, int,  const QPoint &)) );
	connect ( tedt, SIGNAL ( returnPressed() ), this, SLOT ( slot_edtindata() ) );
	connect ( tedt, SIGNAL ( lostFocus () ), this, SLOT ( slot_lostFocus () ) );
	connect( chBx_showdiff, SIGNAL(toggled(bool)), this, SLOT(slot_setDiffView(bool)) );
	
	stack->raiseWidget(WStackPage);
	loaduserforident();
	tedt->setText("");
	tedt->setFocus();
	tedt->home ( false );
	tedt->installEventFilter ( this );
	tbl_doct->numfield=6;
	tbl_doc->numfield=2;
	tbl_box->numfield=2;
	if(strelf !=strload)
		QMessageBox::information( this, tr("Сообщение."),
			tr("Несоответсвие версии загрузочного скрипта execload. Свяжитесь со службой поддержки."));
	if(strelf!=strupload)
		QMessageBox::information( this, tr("Сообщение."),
			tr("Несоответсвие версии  скрипта выгрузки uploadintofile. Свяжитесь со службой поддержки."));
	if(strelf!=strdvversion)
		QMessageBox::information( this, tr("Сообщение."),
			tr("Несоответсвие версии  базы данных cashsrv. Свяжитесь со службой поддержки."));

	grpbox->setExclusive(true);
	

}

mainwindowder::~mainwindowder()
{
	delete tblcur_doct;
	delete tblcur;
	delete tblcur_sel;
	delete curusr;
	delete extcmd;
	delete dateloadscript;
	delete dateuploadscript;
	delete datedb;

}
void mainwindowder::slot_btn_view()
{
    myviewdoct * vdoct;
    vdoct=new myviewdoct(this,"",true,0);
    Q3SqlCursor *tblcur_doct;
    tblcur_doct=new Q3SqlCursor ( "document_t",TRUE,awpsdb );
	vdoct->cstw_view_doct->numfield=6;

    Q3SqlCursor *tblcur_box;
    tblcur_box=new Q3SqlCursor ( "box_barcod",TRUE,awpsdb );
	vdoct->cstw_view_doct_box->numfield=2;

	if (tblcur_doct->select())
	{
		
		if ( tblcur_doct->isActive() )
		{
			vdoct->cstw_view_doct->setSqlCursor (tblcur_doct, FALSE, true );
			vdoct->cstw_view_doct->addColumn ( "npp",tr ( "Порядок" ),
			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width2",100 ) );
			vdoct->cstw_view_doct->addColumn ( "numdoc",tr ( "Номер докум" ),
			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width2",100 ) );
			vdoct->cstw_view_doct->addColumn ( "cod_good",tr ( "Код товара" ),
			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width2",100 ) );
			vdoct->cstw_view_doct->addColumn ( "name",tr ( "Наименование" ),
			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width1",400 ) );
			vdoct->cstw_view_doct->addColumn ( "quant",tr ( "Кол-во" ),
			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width2",100 ) );
			vdoct->cstw_view_doct->addColumn ( "quant_fact",tr ( "Кол-во факт" ),
			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width2",100 ) );

			vdoct->cstw_view_doct->addColumn ( "flag",tr ( "Статус" ),
			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width2",100 ) );
			vdoct->cstw_view_doct->addColumn ( "textstatus",tr ( "Статус" ),
			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width2",100 ) );
			vdoct->cstw_view_doct->addColumn ( "numstor",tr ( "Ном. скл." ),
			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width2",100 ) );
			vdoct->cstw_view_doct->addColumn ( "storplace",tr ( "Мест.хран." ),
			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width2",100 ) );
			vdoct->cstw_view_doct->addColumn ( "complarea",tr ( "Обл.компл." ),
			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width2",100 ) );
			vdoct->cstw_view_doct->addColumn ( "quant_breach",tr ( "Кол-во брак" ),
			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width2",100 ) );

			vdoct->cstw_view_doct->setFilter("numdoc="+tblcur->value("numdoc").toString());	
			vdoct->cstw_view_doct->refresh();
			vdoct->cstw_view_doct->show();
			//if ( tblcur_doct->numRowsAffected () ) tbl_doct->selectRow ( 0 );
			vdoct->cstw_view_doct->setReadOnly ( true );
		}
	}
	vdoct->cstw_view_doct->updateGeometry ();
	vdoct->cstw_view_doct->refresh();

	if (tblcur_box->select())
	{
		
		if ( tblcur_box->isActive() )
		{
			vdoct->cstw_view_doct_box->setSqlCursor (tblcur_box, FALSE, true );
			vdoct->cstw_view_doct_box->addColumn ( "numdoc",tr ( "Номер докум" ),
			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width2",100 ) );
			vdoct->cstw_view_doct_box->addColumn ( "barcod",tr ( "штрих-код" ),
			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width2",100 ) );
			vdoct->cstw_view_doct_box->addColumn ( "flag",tr ( "флаг примека короба" ),
			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width2",100 ) );
			vdoct->cstw_view_doct_box->addColumn ( "textstatus",tr ( "флаг скан короб" ),
			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width2",100 ) );

			vdoct->cstw_view_doct_box->setFilter("numdoc="+tblcur->value("numdoc").toString());	
			vdoct->cstw_view_doct_box->refresh();
			vdoct->cstw_view_doct_box->show();
			//if ( tblcur_doct->numRowsAffected () ) tbl_doct->selectRow ( 0 );
			vdoct->cstw_view_doct_box->setReadOnly ( true );
		}
	}
	vdoct->cstw_view_doct_box->updateGeometry ();
	vdoct->cstw_view_doct_box->refresh();




	vdoct->exec();
	delete vdoct;
}
void mainwindowder::slot_clicked ( int row, int col, int button, const QPoint & mousePos )
{
	
	if(button==Qt::RightButton)
	{
		Q3PopupMenu *submenu = new Q3PopupMenu( this );
		Q_CHECK_PTR( submenu );
		submenu->insertItem( tr("Установить факт. кол-во"), this, SLOT(slot_sp_set_quant_fact()));
		submenu->insertItem( tr("Установить брак. кол-во"), this, SLOT(slot_sp_set_quant_breach()));	
		submenu->exec( QCursor::pos() );
		delete submenu;
	}

}
void mainwindowder::slot_sp_set_quant_fact()
{
bool ok;
		int cnt = QInputDialog::getInteger ( tr ( "кол-во товара" ), tr ( "Введите количество" ),
	                                     1, 0, 100000, 1,&ok, this );
			if ( ok )
			{
				//sp_set_fact_quant`(numdoc_in varchar(20),barcod_in varchar(20), fact_in_quant int)
				QString codgood,numdoc;		
				if(!tblcur_sel) return;
				codgood=tblcur_doct->value("cod_good").toString();
				numdoc=tblcur_doct->value("numdoc").toString();
				awpsdb = QSqlDatabase::database( DB_AWPS_DBNAME );
				QSqlQuery query(awpsdb);
				query.prepare( "call sp_set_fact_quant(?,?,?)" );
				query.bindValue( 0, numdoc);
				query.bindValue( 1, codgood);
				query.bindValue( 2, cnt);
		
				if (!query.exec())
					qWarning(query.lastError().text());
				tbl_doct->refresh();//!!!CurrentSelectionOnTable_t();
				tbl_box->refresh();
			}
}

void mainwindowder::slot_sp_set_quant_breach()
{
bool ok;
		int cnt = QInputDialog::getInteger ( tr ( "кол-во товара брак" ), tr ( "Введите количество" ),
	                                     1, 0, 100000, 1,&ok, this );
			if ( ok )
			{
				//sp_set_fact_quant`(numdoc_in varchar(20),barcod_in varchar(20), fact_in_quant int)
				QString codgood,numdoc;		
				if(!tblcur_sel) return;
				codgood=tblcur_doct->value("cod_good").toString();
				numdoc=tblcur_doct->value("numdoc").toString();
				awpsdb = QSqlDatabase::database( DB_AWPS_DBNAME );
				QSqlQuery query(awpsdb);
				query.prepare( "call sp_set_quant_breach(?,?,?)" );
				query.bindValue( 0, numdoc);
				query.bindValue( 1, codgood);
				query.bindValue( 2, cnt);
		
				if (!query.exec())
					qWarning(query.lastError().text());
				tbl_doct->refresh();//!!!CurrentSelectionOnTable_t();
				tbl_box->refresh();
			}
}

void mainwindowder::slot_clicked_box ( int row, int col, int button, const QPoint & mousePos )
{
	bool ok;
	if(button==Qt::RightButton)
	{
		switch( QMessageBox::information( this, tr("Сброс состояния."),
		tr("Сбросить отметку коробки ?"), tr("да"), tr("нет"),0, 1 ) ) 
		{
		case 0:
		{
				QString barcod, numdoc;		
				if(!tblcur_sel) return;
				barcod = tblcur_doct_box->value("barcod").toString();
				numdoc = tblcur_doct_box->value("numdoc").toString();
				awpsdb = QSqlDatabase::database( DB_AWPS_DBNAME );
				QSqlQuery query(awpsdb);
				query.prepare( "call sp_reset_box_status(?,?)" );
				query.bindValue( 0, barcod);
				query.bindValue( 1, numdoc);
				if (!query.exec())
					qWarning(query.lastError().text());
				tbl_box->refresh();
				lbl_info->setText(getinfo());
				break;
		}
		case 1:
			QMessageBox::information( this, tr("Сообщение."),
				tr("Операция отменена"));
        		break;
		}
	}
}
void mainwindowder::slot_btn_close_nochek()
{
	QString ss;
	if(!tblcur_sel) return;
	ss=tblcur_sel->value("numdoc").toString();

	switch( QMessageBox::information( this, tr("Закрытие накладной."),
	tr("Закрыть накладную " +ss+ " без проверки?"), tr("да"), tr("нет"),0, 1 ) ) 
	{
	case 0:
	{
		awpsdb = QSqlDatabase::database( DB_AWPS_DBNAME );
		QSqlQuery query(awpsdb);
		query.prepare( "call sp_close_doc_h_nochek(?,@outval)" );
		query.bindValue( 0, ss);
		if (!query.exec())
			qWarning(query.lastError().text());
		if(!query.exec("select @outval"))
			qWarning(query.lastError().text());
		query.next();
		QString strout = query.value(0).toString();

		CurrentSelectionOnTable();
		CurrentOnTable();
	//	if(strout="ok-status 3")||(strout="<>-status 1")
			QMessageBox::information( this, tr("Сообщение."),
				tr(strout));
		break;
	}
	case 1:
		QMessageBox::information( this, tr("Сообщение."),
			tr("Операция отменена"));
        	break;
	}



}
void mainwindowder::slot_setDiffView(bool ison)
{
	//!!!CurrentSelectionOnTable_t();
	if (ison)
	{
		tbl_doct->setFilter ( "flag<>3");
		tbl_box->setFilter ( "flag<>3");
	}
	else
	{
		tbl_doct->setFilter ( "");
		tbl_box->setFilter ( "");
	}
	tbl_doct->refresh();
	tbl_box->refresh();
}

void mainwindowder::slot_lostFocus ()
{
	int i=stack->id(stack->visibleWidget());
	if (stack->id(stack->visibleWidget())==3)
		tedt->setFocus();
}
void mainwindowder::slot_btn_reset_revise()
{
	QString numdoc=tblcur->value("numdoc").toString();
	awpsdb = QSqlDatabase::database( DB_AWPS_DBNAME );
	QSqlQuery query(awpsdb);
	query.prepare( "call sp_open_doc_h(?)" );
	query.bindValue( 0, numdoc);
	if (!query.exec())
		qWarning(query.lastError().text());
	CurrentOnTable();
	QMessageBox::information( this, tr("Сообщение."),
			tr("Накладная "+numdoc+ " открыта."));
}
void mainwindowder::slot_btn_upload()
{
	QString numdoc=tblcur->value("numdoc").toString();

	awpsdb = QSqlDatabase::database( DB_AWPS_DBNAME );
	Q3SqlSelectCursor* cur_doc_h = new Q3SqlSelectCursor("SELECT status FROM document_h_cur where numdoc="+numdoc,awpsdb);
	if (cur_doc_h->select())
	{
		cur_doc_h->next();
		int status=cur_doc_h->value( "status" ).toInt();
		if ((status==3)||(status==1)||(status==4))
		{
			extcmd->clearArguments ();
			extcmd->addArgument ( "./uploadintofile" );
			extcmd->addArgument (apppath+"/out" );
			extcmd->addArgument (numdoc);
			switch (status)
			{
				case 3:
					extcmd->addArgument ("OK");
				case 1:
					extcmd->addArgument ("BAD");
				case 4:
					extcmd->addArgument ("NOCHEK");
			}
			connect ( extcmd, SIGNAL ( processExited() ),this, SLOT ( slot_extcmd_exited() ) );
			if ( !extcmd->start() )
			{
				QMessageBox::information( this, tr("Сообщение."),
				tr("Ошибка выгрузки."));
			}
			else
				QMessageBox::information( this, tr("Сообщение."),
				tr("Выгрузка  завешена. Результирующий файл: "+ apppath+"/out/"+numdoc+".xls"));	
		}
		else
				QMessageBox::information( this, tr("Сообщение."),
				tr("Для выгрузки необходимо закрыть накладную."));
	}
}
void mainwindowder::slot_dawnload()
{

	
}
void mainwindowder::slot_start_extcmd()
{
	workdir.setPath ( apppath );
	extcmd->clearArguments ();
	extcmd->addArgument ( "./loaddatainfile" );
	//sb_pilot->addArgument ( "1" );
	connect ( extcmd, SIGNAL ( processExited() ),this, SLOT ( slot_extcmd_exited() ) );
	if ( !extcmd->start() )
	{
		QMessageBox::information( this, tr("Сообщение."),
			tr("Ошибка загрузки."));
	}
	else
		QMessageBox::information( this, tr("Сообщение."),
			tr("Загрузка завешена."));

	
}
void mainwindowder::slot_extcmd_exited()
{
	disconnect ( extcmd, SIGNAL ( processExited() ),this, SLOT ( slot_extcmd_exited() ) );
}
void mainwindowder::slot_btnok_identuser()	//
{
		awpsdb = QSqlDatabase::database( DB_AWPS_DBNAME );
		QSqlQuery query(awpsdb);
		query.prepare( "call chek_pwd(?,?,?,@outval)" );
		query.bindValue( 0, 0 );
		query.bindValue( 1, cbx_user->currentText ());
		query.bindValue( 2, edt_pass->text());
		if (!query.exec())
			qWarning(query.lastError().text());
		if(!query.exec("select @outval"))
			qWarning(query.lastError().text());
		query.next();
		QString strout = query.value(0).toString();

		if(strout!="ok") 
		{
			QMessageBox::information( this, tr("Аутентификация."),
			tr("Пароль набран неверно."));
			return;
		}
		stack->raiseWidget(WStackPage2);	//
	
	dt = QDate::currentDate();
	date_begin->setDate ( dt );
	dateend->setDate ( dt );
	tedt_numdoc->setText("%");










// 	tblcur=new Q3SqlCursor::Q3SqlCursor ( "document_h_cur",TRUE,awpsdb );
// 	if (tblcur->select())
// 	{
// 
// 	}
// 	//tblcur->first();
// 	
//     tbl_doc_ = new CustomTable( tblcur,false,WStackPage, "tbl_test" );
//     tbl_doc_->setGeometry( QRect( 338, 169, 111, 171 ) );
//     stack->addWidget( WStackPage, 2 );

/* 		if ( tblcur->isActive() )
 		{
 			tbl_doc_->setSqlCursor (tblcur, FALSE, true );
 			tbl_doc_->addColumn ( "numdoc",tr ( "Номер документа" ),
 			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width1",200 ) );
 			tbl_doc_->addColumn ( "date",tr ( "Дата документа" ),
 			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width2",200 ) );
 			tbl_doc_->addColumn ( "status",tr ( "Статус" ),
 			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width3",100 ) );
 			tbl_doc_->addColumn ( "textstatus",tr ( "Статус" ),
 			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width3",100 ) );
 
 			tbl_doc_->refresh();
 
 			tbl_doc_->show();
 			//if ( tblcur->numRowsAffected () ) tbl_doc->selectRow ( 0 );
 			tbl_doc_->setReadOnly ( true );
 		}
	tbl_doc_->updateGeometry ();
 */
}
void mainwindowder::slot_btcancel_identuser()	//
{
	close();
}

void mainwindowder::slot_btn_search()
{
	stack->raiseWidget(WStackPage3);
	QDate dtbegin;
	dtbegin=date_begin->date();

	QDate dtend;
	dtend=dateend->date();

	awpsdb = QSqlDatabase::database( DB_AWPS_DBNAME );
	QSqlQuery query(awpsdb);
	query.prepare( "call sp_create_current_doc_h(?,?,?)" );
	query.bindValue( 0, dtbegin.toString("yyyy-MM-dd"));
	query.bindValue( 1, dtend.toString("yyyy-MM-dd"));
	query.bindValue( 2, tedt_numdoc->text());
	if (!query.exec())
		qWarning(query.lastError().text());


//сформировать список накладных соответсвующих фильтрам
	CurrentOnTable();
//вывести список накладных выбранных пользователем для обработки
	CurrentSelectionOnTable();


}
/*возврат на страницу идентификации пользователя со страницы фильтра для накладной*/
void mainwindowder::slot_btn_return()		//
{
	stack->raiseWidget(WStackPage);
}
/*возварат на селекционный экран со страницы выбора заголовков документов*/
void mainwindowder::slot_btn_back()		//
{
	stack->raiseWidget(WStackPage2);	//
	awpsdb = QSqlDatabase::database( DB_AWPS_DBNAME );
	QSqlQuery query(awpsdb);
	query.prepare( "call sp_saveAndDelete_current_doc_h()" );

	if (!query.exec())
		qWarning(query.lastError().text());

}
/*слот для сброса статуса ревизии*/
//void mainwindowder::slot_btn_reset_revise()	//
//{
	//setCentralWidget ( WStackPage3);
// 	QPainter painter(frame4); 
// 	painter.setPen(QPen(black, 3, DashDotLine)); 
// 	painter.setBrush(QBrush(red, SolidPattern)); 
// 	painter.drawEllipse(20, 20, 100, 60);
// 
// 	QSqlField* field;
// 	QRect cr;
// 	QColorGroup cg;
// 	QPainter  p(tbl_doc);
// 	cr=tbl_doc->cellRect( 2, 2 );
// 	cr.setRect ( 0, 0, cr.width(), cr.height());
// 	p.setPen(QPen(black, 3, DashDotLine)); 
// 	p.setBrush(QBrush(red, SolidPattern)); 
// 	field=tblcur_sel->field("numdoc");
 	//CustomTable * cmtbl=new CustomTable (tblcur_sel, true, tbl_doc, 0) ;
 	//cmtbl->paintField( &p,field,cr, true);
	//cmtbl->paintCell( &p, 1, 1, cr, true, cg );
	//p.drawRect(cr);
	//tbl_doct->refresh();
	//delete cmtbl;




//}
void mainwindowder::loaduserforident()
{
	
	awpsdb = QSqlDatabase::database( DB_AWPS_DBNAME );
	curusr = new Q3SqlSelectCursor("SELECT * FROM cassir",awpsdb);
	if (curusr->select())
	{

	}	
	while ( curusr->next() ) 
	{
		cbx_user->insertItem(curusr->value( "namecass" ).toString());
	}
	
}
/*включение накладной в список для сверки*/
void mainwindowder::slot_doubleClicked ( int row, int col, int button,  const QPoint & mousePos )
{
	tblcur->seek(row);
	QString numdoc=tblcur->value("numdoc").toString();
	awpsdb = QSqlDatabase::database( DB_AWPS_DBNAME );
	QSqlQuery query(awpsdb);
	query.prepare( "call sp_create_doc_h_selected(?,?,@outval)" );
	query.bindValue( 0, numdoc);
	query.bindValue( 1, "insert");

	if (!query.exec())
		qWarning(query.lastError().text());
	if(!query.exec("select @outval"))
		qWarning(query.lastError().text());
	query.next();
	QString strout = query.value(0).toString();

	CurrentSelectionOnTable();
	
}
/*исключение из выбора накладной для сверки*/
void mainwindowder::slot_doubleClicked_to_proc(int row, int col, int button,  const QPoint & mousePos )
{
	tblcur_sel->seek(row);
	QString numdoc=tblcur_sel->value("numdoc").toString();
	awpsdb = QSqlDatabase::database( DB_AWPS_DBNAME );
	QSqlQuery query(awpsdb);
	query.prepare( "call sp_create_doc_h_selected(?,?,@outval)");
	query.bindValue( 0, numdoc);
	query.bindValue( 1, "delete");
	if (!query.exec())
		qWarning(query.lastError().text());
	if(!query.exec("select @outval"))
		qWarning(query.lastError().text());
	query.next();
	QString strout = query.value(0).toString();

	CurrentSelectionOnTable();	
}
void mainwindowder::slot_pressed ( int row, int col, int button,  const QPoint & mousePos )
{
	
	//!!!tedt->setText (tblcur_doct->value("cod_good").toString());

}
void mainwindowder::slot_pressed_tbl_doc(int, int, int,  const QPoint &)
{

}
/*вывод списка табличной части выбранных накладных для непосредственной сверки количества*/
void mainwindowder::slot_begin_chek()
{
//в зависимости от выбранного типа сканирования выводим данные
	QString typescan;
	
	if (rbt_box->isOn () )
		typescan = "box";
	else if(rbt_bybox->isOn ())
	 	typescan = "bybox";
	else if(rbt_good->isOn ())
		typescan = "good";

	awpsdb = QSqlDatabase::database( DB_AWPS_DBNAME );
	QSqlQuery query(awpsdb);
	if(typescan == "box")
	{
		tbl_box->show();
		tbl_doct->hide();
		query.prepare( "call sp_create_current_box()" );
		if (!query.exec())
			qWarning(query.lastError().text());
		CurrentSelectionOnTable_t_box();
		
	}
	 if(typescan == "good")
	{
		tbl_box->hide();
		tbl_doct->show();
		query.prepare( "call sp_create_current_doc_t(?)" );
		query.bindValue( 0, "");
		
		if (!query.exec())
			qWarning(query.lastError().text());
		CurrentSelectionOnTable_t();
	}
	if (typescan == "bybox" )
	{
		query.prepare( "call sp_create_current_doc_t_box(?,?)" );
		query.bindValue( 0, "");
		query.bindValue( 1, "init");
		if (!query.exec())
			qWarning(query.lastError().text());
		tbl_box->show();
		tbl_doct->show();
		CurrentSelectionOnTable_t();
		CurrentSelectionOnTable_t_box();
		
// 		QMessageBox::information( this, tr("Сообщение."),
// 			tr("Проведите штрих-код коробки через сканер."));
	}
	stack->raiseWidget(WStackPage4); //Сверка табличной части накладной
	
	
	tedt->setFocus();
}
/*переход на страницу выбора заголовков документов к обработке
здесь осуществился переход от списка табличной части к списку заголовчных частей, поэтому 
необходимо запустить храниму процедуру sp_saveAndDelete_current_doc_t для того чтобы перенести изменения
в рабочую таблицу и очистить текущую табличную часть таблицы document_t_cur*/
void mainwindowder::slot_back_doct()
{
	stack->raiseWidget(WStackPage3); //Выбор накладных для сверки
	awpsdb = QSqlDatabase::database( DB_AWPS_DBNAME );
	QSqlQuery query(awpsdb);
	query.prepare( "call sp_saveAndDelete_current_doc_t()" );

	if (!query.exec())
		qWarning(query.lastError().text());
	
}
/*закрытие накладной*/
void mainwindowder::slot_btn_close()
{
	QString ss;
	if(!tblcur_sel) return;
	ss=tblcur_sel->value("numdoc").toString();
	awpsdb = QSqlDatabase::database( DB_AWPS_DBNAME );
	QSqlQuery query(awpsdb);
	query.prepare( "call sp_close_doc_h(?,@outval)" );
	query.bindValue( 0, ss);
	if (!query.exec())
		qWarning(query.lastError().text());
	if(!query.exec("select @outval"))
		qWarning(query.lastError().text());
	query.next();
	QString strout = query.value(0).toString();

	CurrentSelectionOnTable();
	CurrentOnTable();
//	if(strout="ok-status 3")||(strout="<>-status 1")
		QMessageBox::information( this, tr("Сообщение."),
			tr(strout));
//	else
		

}
/*$SPECIALIZATION$*/
/*вывод содержимого таблицы списка выбранных документов к обработке*/
void mainwindowder::CurrentSelectionOnTable()
{

    tblcur_sel=new Q3SqlCursor ( "document_h_selected",TRUE,awpsdb );
	if (tblcur_sel->select())
	{
		if ( tblcur_sel->isActive() )
		{
			tbl_docs_to_process->setSqlCursor (tblcur_sel, FALSE, true );
			tbl_docs_to_process->addColumn ( "numdoc",tr ( "Номер документа" ),
			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width1",200 ) );


			tbl_docs_to_process->refresh();
			tbl_docs_to_process->show();
			if ( tblcur_sel->numRowsAffected () ) tbl_docs_to_process->selectRow ( 0 );
			tbl_docs_to_process->setReadOnly ( true );
		}
	}
 	tblcur_sel->first();
	tbl_docs_to_process->updateGeometry ();
}
/*вывод содержимового таблицы текущего списка заголовков документов. То есть, то что вошло в список по фильтру на WStackPage2*/
void mainwindowder::CurrentOnTable()
{

    tblcur=new Q3SqlCursor ( "document_h_cur",TRUE,awpsdb );
	if (tblcur->select())
	{
		if ( tblcur->isActive() )
		{
			tbl_doc->setSqlCursor (tblcur, FALSE, true );
			tbl_doc->addColumn ( "numdoc",tr ( "Номер документа" ),
			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width1",200 ) );
			tbl_doc->addColumn ( "date",tr ( "Дата документа" ),
			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width2",200 ) );
			tbl_doc->addColumn ( "status",tr ( "Статус" ),
			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width3",100 ) );
			tbl_doc->addColumn ( "textstatus",tr ( "номер магазина" ),
			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width3",100 ) );
			tbl_doc->addColumn ( "box_cnt",tr ( "кол. кор." ),
			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width3",100 ) );

			tbl_doc->refresh();

			tbl_doc->show();
			//if ( tblcur->numRowsAffected () ) tbl_doc->selectRow ( 0 );
			tbl_doc->setReadOnly ( true );
		}
	}
	//tblcur->first();
	tbl_doc->updateGeometry ();

}
void mainwindowder::CurrentSelectionOnTable_t()
{
    tblcur_doct=new Q3SqlCursor ( "document_t_cur",TRUE,awpsdb );
	if (tblcur_doct->select())
	{
		if ( tblcur_doct->isActive() )
		{
			tbl_doct->setSqlCursor (tblcur_doct, FALSE, true );
			tbl_doct->addColumn ( "npp",tr ( "Порядок" ),
			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width2",50 ) );
			tbl_doct->addColumn ( "numdoc",tr ( "Номер докум" ),
			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width2",100 ) );
			tbl_doct->addColumn ( "cod_good",tr ( "Код товара" ),
			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width2",80 ) );
			tbl_doct->addColumn ( "name",tr ( "Наименование" ),
			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width1",300 ) );
			tbl_doct->addColumn ( "quant",tr ( "Кол-во" ),
			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width2",50 ) );
			tbl_doct->addColumn ( "quant_fact",tr ( "Кол-во факт" ),
			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width2",50 ) );
			tbl_doct->addColumn ( "flag",tr ( "Статус" ),
			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width2",50 ) );
			tbl_doct->addColumn ( "textstatus",tr ( "Статус" ),
			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width2",50 ) );
			tbl_doct->addColumn ( "numstor",tr ( "Ном. скл." ),
			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width2",100 ) );
			tbl_doct->addColumn ( "storplace",tr ( "Мест.хран." ),
			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width2",100 ) );
			tbl_doct->addColumn ( "complarea",tr ( "Обл.компл." ),
			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width2",100 ) );
			tbl_doct->addColumn ( "quant_breach",tr ( "Кол-во брак" ),
			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width2",100 ) );
			tbl_doct->refresh();
			tbl_doct->show();
			tbl_doct->setReadOnly ( true );
		}
	}
	
	tbl_doct->updateGeometry ();
	tedt->home ( false );
	tbl_doct->refresh();
	if (tbl_doct->numRows ()) tbl_doct->selectRow ( 0 );

	/*awpsdb = QSqlDatabase::database( DB_AWPS_DBNAME );
	cur_doct_bar=new QSqlQuery::QSqlQuery (QString::null, awpsdb);
	cur_doct_bar->prepare( "select t.numdoc as numdoc, t.cod_good as cod_good,min(ifnull(t.quant_fact,0)) as minquant "
				"    from document_t_cur as t "
				" inner join barcod_cur b on t.cod_good=b.cod_good and t.numdoc=b.numdoc "
				" where (b.cod_good=?) group by t.cod_good" );
*/
}
void mainwindowder::CurrentSelectionOnTable_t_box()
{
    tblcur_doct_box=new Q3SqlCursor ( "box_barcod_cur_t",TRUE,awpsdb );
	if (tblcur_doct_box->select())
	{
		if ( tblcur_doct_box->isActive() )
		{
			tbl_box->setSqlCursor (tblcur_doct_box, FALSE, true );
			tbl_box->addColumn ( "numdoc",tr ( "Номер докум" ),
			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width2",100 ) );
			tbl_box->addColumn ( "barcod",tr ( "Код короб" ),
			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width2",120 ) );
			tbl_box->addColumn ( "flag",tr ( "Статус" ),
			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width2",20 ) );
			tbl_box->addColumn ( "textstatus",tr ( "Статус" ),
			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width2",20 ) );
			tbl_box->addColumn ( "quant",tr ( "Кол" ),
			                    stt->readNumEntry ( "/win/framecashdata/tbl_cv/width2",30 ) );
			
			tbl_box->refresh();
			tbl_box->show();
			//if ( tblcur_doct->numRowsAffected () ) tbl_doct->selectRow ( 0 );
			tbl_box->setReadOnly ( true );
		}
	}
	tbl_box->updateGeometry ();
	tedt->home ( false );
	tbl_box->refresh();
	lbl_info->setText(getinfo());
	
}
void mainwindowder::slot_edtindata()
{
	QString codgood, typescan, strtime, flag, flag_box;
	QTime curtime;
	curtime = QTime::currentTime();
	if (rbt_box->isOn () )
		typescan = "box";
	else if(rbt_bybox->isOn ())
	 	typescan = "bybox";
	else if(rbt_good->isOn ())
		typescan = "good";
	codgood=tedt->text();
	awpsdb = QSqlDatabase::database( DB_AWPS_DBNAME );
	QSqlQuery query(awpsdb);
	query.prepare( "call sp_change_fact_quant(?,?,?,?,?,@outval)" );
	query.bindValue( 0, "");
	query.bindValue( 1, codgood);
	query.bindValue( 2, 1);
	query.bindValue( 3, "barcod");
	query.bindValue( 4, typescan);					//модификатор для типа сканирования 
	if (!query.exec())
		qWarning(query.lastError().text());
	if(!query.exec("select @outval"))
		qWarning(query.lastError().text());
	query.next();
	QString strout = query.value(0).toString();
	//qWarning("strout = " + strout);

	if (typescan == "good" or typescan == "bybox")
	{
		tbl_doct->refresh();
		tbl_doct->find(strout, false, true);
		//qWarning("strout = " + strout);
		tblcur_doct->seek(tbl_doct->currentRow ());
		flag=tblcur_doct->value("flag").toString();

	}
	if (typescan == "box" or typescan == "bybox")
	{
		if (codgood.left(2)=="99")
		{
			if (strout!="")
			{
				if(!tbl_box->currentRecord()) tbl_box->selectRow ( 0 );
				tbl_box->find(strout, false, true);
				tblcur_doct_box->seek(tbl_box->currentRow ());
				
				flag_box=tblcur_doct_box->value("flag").toString();
				if(!tbl_doct->currentRecord()) tbl_doct->selectRow ( 0 );
				flag = "5";
			}
			else
				flag = "6";
			lbl_info->setText(getinfo());
		}
		tbl_box->refresh();
	}
	
	extcmd->clearArguments ();
	extcmd->addArgument ( "./beep_cmd" );
	extcmd->addArgument ( flag ); //1- сканирование 3 -сканирование сошлось 4 - неопознанный штрих код
	if ( !extcmd->start() )
	{
		qWarning("error beep");				//ошибка
	}
	//qWarning("beep = " + flag);
	tedt->setText ( "" );
	tedt->home ( false );
	
	float dd = ( float ) curtime.msecsTo(QTime::currentTime())/1000;
	strtime.sprintf ( "%.3f", dd);
	
	exectime->setText(tr("Посл вр вып запр " + strtime + " сек"));
	
}
QString mainwindowder::getinfo()
{
	awpsdb = QSqlDatabase::database( DB_AWPS_DBNAME );
	QSqlQuery query(awpsdb);
	query.prepare( "call sp_get_info(?,@outval)" );
	query.bindValue( 0, "");
	if (!query.exec())
		qWarning(query.lastError().text());
	if(!query.exec("select @outval"))
		qWarning(query.lastError().text());
	query.next();
	QString strout = query.value(0).toString();
	return tr(strout);
	
}
bool mainwindowder::eventFilter ( QObject *obj, QEvent *e )
{
	if ( obj == tedt )
	{
			QKeyEvent *k = ( QKeyEvent * ) e;
			if ( e->type() ==QEvent::KeyRelease )
			{
				if ( ( k->key() ==45 ) || ( k->key() ==46 ) )
				{
					artminus();
					//tedt->setText (tblcur_doct->value("cod_good").toString());
				}
				if ( ( k->key() ==43 ) )
				{
					artplus();
					//tedt->setText (tblcur_doct->value("cod_good").toString());
				}
				if ( k->key() ==Qt::Key_Up )
				{
					
					if ( tbl_doct->currentRow() >0 )
						tbl_doct->selectRow ( tbl_doct->currentRow ()-1 );
					//!!!tedt->setText (tblcur_doct->value("cod_good").toString());
					
					
				}
				if ( k->key() ==Qt::Key_Down )
				{
					if ( tbl_doct->numRows() >tbl_doct->currentRow() )
						tbl_doct->selectRow ( tbl_doct->currentRow () +1 );
					//!!!tedt->setText (tblcur_doct->value("cod_good").toString());
					
				}
			}
		return Q3MainWindow::eventFilter ( obj, e );
	}
	else
	{
		// pass the event on to the parent class

		return Q3MainWindow::eventFilter ( obj, e );
	}

}
void mainwindowder::artplus()
{
QString codgood,numdoc;
	
	codgood=tblcur_doct->value("cod_good").toString();
	numdoc=tblcur_doct->value("numdoc").toString();
	awpsdb = QSqlDatabase::database( DB_AWPS_DBNAME );
	QSqlQuery query(awpsdb);
	query.prepare( "call sp_change_fact_quant(?,?,?,?,?,@outval)" );
	query.bindValue( 0, numdoc);
	query.bindValue( 1, codgood);
	query.bindValue( 2, 1);
	query.bindValue( 3, "plus");
	query.bindValue( 4, "");
	if (!query.exec())
		qWarning(query.lastError().text());
	if(!query.exec("select @outval"))
		qWarning(query.lastError().text());
	query.next();
	QString strout = query.value(0).toString();
	tbl_doct->refresh();//!!!CurrentSelectionOnTable_t();
		
		tbl_doct->find(strout, false, true);
		tblcur_doct->seek(tbl_doct->currentRow ());
	tbl_box->refresh();

}
void mainwindowder::artminus()
{
QString codgood,numdoc;
	
	codgood=tblcur_doct->value("cod_good").toString();
	numdoc=tblcur_doct->value("numdoc").toString();

	awpsdb = QSqlDatabase::database( DB_AWPS_DBNAME );
	QSqlQuery query(awpsdb);
	query.prepare( "call sp_change_fact_quant(?,?,?,?,?,@outval)" );
	query.bindValue( 0, numdoc);
	query.bindValue( 1, codgood);
	query.bindValue( 2, 1);
	query.bindValue( 3, "minus");
	query.bindValue( 4, "");
	if (!query.exec())
		qWarning(query.lastError().text());
	if(!query.exec("select @outval"))
		qWarning(query.lastError().text());
	query.next();
	QString strout = query.value(0).toString();
	tbl_doct->refresh();//!!!CurrentSelectionOnTable_t();
		tbl_doct->find(strout, false, true);
		tblcur_doct->seek(tbl_doct->currentRow ());
	tbl_box->refresh();
}
// 						int i=tbl_doct->currentRow ();
// 						tblcur_doct->seek(i);
// 						tedt->setText (tblcur_doct->value("cod_good").toString());
/*установить цвет строки в гриде*/
void mainwindowder::setcolor(int row, int col)
{	
// 	QSqlField* field;
// 	QRect cr;
// 	QColorGroup cg;
// 	QPainter  p(this);
// 	cr=tbl_doct->cellRect( 0, 1 );
// 	//p.setPen(red);
// 	//p.setBrush(red);
// 	p.setPen(QPen(black, 3, DashDotLine)); 
// 	p.setBrush(QBrush(red, SolidPattern)); 
// 	p.drawEllipse(20, 20, 100, 60); 
// 	field=tblcur_doct->field("npp");
//  	CustomTable * cmtbl=new CustomTable (tblcur_doct, true, 0, 0) ;
//  	cmtbl->paintField( &p,field,cr, true);
// 	//cmtbl->paintCell( &p, 0, 0, cr, true, cg );
// 	p.drawRect(cr);
// 	//tbl_doct->refresh();
// 	delete cmtbl;
}
void mainwindowder::closeEvent( QCloseEvent* ce )
{
//     if ( !e->isModified() ) {
//         ce->accept();
//         return;
//     }

	switch( QMessageBox::information( this, tr("Выход."),
	tr("Сохранить изменения перед выходом?"), tr("да"), tr("нет"),tr("отмена"),0, 1 ) ) 
	{
	case 0:

		slot_back_doct();
		slot_btn_back();
		ce->accept();
		break;
	case 1:
		ce->accept();
        	break;
	case 2:
		ce->ignore();
		break;
	}
}
// void CustomTable::paintField( QPainter * p, const QSqlField* field,const QRect & cr, bool b)
// {
//  	if ( !field )
//  		return;
// 
// 	if ( field->name() == "numdoc") 
// 	{
// 		p->setPen( QColor( 255, 0, 0 ) );
// 		p->setBrush( QColor( 0, 100, 0 ) );
// 		p->drawRect( 0, 0, cr.width(), cr.height() );
// 	}
//     	QDataTable::paintField( p, field, cr, b );
// 
// 
// 	//p->drawRect(cr);
// 	//QDataTable::paintField( p, field, cr, b) ;
// 		
// }
// void CustomTable::paintCell( QPainter * p, int row, int col, const QRect & cr, bool selected, const QColorGroup & cg )
// {
//                 QColorGroup g( cg );
//                 g.setColor(QColorGroup::Base, red);
// 		p->drawRect( 0, 0, cr.width(), cr.height() );
//                 QDataTable::paintCell(p, row, col, cr, selected, g);
// }






