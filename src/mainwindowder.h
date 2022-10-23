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

#ifndef MAINWINDOWDER_H
#define MAINWINDOWDER_H
#define __build__ __DATE__

#include "mainwindow.h"

#include "connection.h"
#include "settings.h"
#include "customtable.h"
#include "myviewdoct.h"

#include <q3table.h>
#include <q3sqlselectcursor.h>
#include <qsqlquery.h>
#include <qsqldatabase.h>
#include <qtextcodec.h>
#include <qpoint.h>
#include <qpixmap.h>
#include <qrect.h>
#include <qcolor.h>
#include <qpalette.h>
#include <q3datatable.h>
#include <qpainter.h>
#include <q3process.h>
#include <qdir.h>
//Added by qt3to4:
#include <QEvent>
#include <Q3SqlCursor>
#include <QLabel>
#include <QCloseEvent>

class mainwindowder : public frmmain
{
  Q_OBJECT

public:
  mainwindowder(QWidget* parent = 0, const char* name = 0, Qt::WFlags fl = 0 ,QString pathtoelf=0 );
  ~mainwindowder();
	bool canenter;
	struct kassirstruct	
	{
		int cod_cass;
		QString namecass;
		int accessmask; 
	} kassir;	
	QSqlDatabase awpsdb;
	Q3SqlSelectCursor * curusr;
	QSqlQuery * cur_doct_bar;
	Q3SqlCursor * tblcur;
	Q3SqlCursor * tblcur_sel;
	Q3SqlCursor * tblcur_doct;
	Q3SqlCursor * tblcur_doct_box;
  /*$PUBLIC_FUNCTIONS$*/
private:
	//QWidgetStack* stackdialog;
	void loaduserforident();
	void CurrentSelectionOnTable();
	void CurrentOnTable();
	void CurrentSelectionOnTable_t();
	void CurrentSelectionOnTable_t_box();
	void artplus();
	void artminus();
	void setcolor(int row, int col);
	QString getinfo();
	QString apppath;
	dbconnection * dbconn;
	settings  *stt;
	QDate dt;
	//CustomTable * tbl_doc_;
	//CustomTable * tbl_doct_;
	//CustomTable * tbl_docs_to_process_;
	Q3Process * extcmd;
	QDir workdir;
	QLabel * dateloadscript;
	QLabel * dateuploadscript;
	QLabel * datedb;
	QLabel * exectime;

	
public slots:
  /*$PUBLIC_SLOTS$*/

protected:
  /*$PROTECTED_FUNCTIONS$*/
	bool eventFilter ( QObject *obj, QEvent *e );
	void closeEvent( QCloseEvent* ce );
protected slots:
  /*$PROTECTED_SLOTS$*/
	void slot_btnok_identuser();
	void slot_btcancel_identuser();
	void slot_btn_search();
	void slot_btn_return();
	void slot_btn_back();
	void slot_btn_reset_revise();
	void slot_btn_upload();
	void slot_btn_view();
	void slot_begin_chek();
	void slot_back_doct();
	void slot_doubleClicked ( int row, int col, int button,  const QPoint & mousePos );
	void slot_pressed ( int row, int col, int button,  const QPoint & mousePos );
	void slot_clicked ( int row, int col, int button, const QPoint & mousePos );
	void slot_clicked_box ( int row, int col, int button, const QPoint & mousePos );
	void slot_doubleClicked_to_proc(int row, int col, int button,  const QPoint & mousePos );
	void slot_pressed_tbl_doc(int, int, int,  const QPoint &);
	void slot_edtindata();
	void slot_btn_close();
	void slot_btn_close_nochek();
	void slot_start_extcmd();
	void slot_extcmd_exited();
	void slot_dawnload();
	void slot_lostFocus ();
	void slot_setDiffView(bool ison);
	void slot_sp_set_quant_fact();
	void slot_sp_set_quant_breach();
};
// class CustomTable : public QDataTable
// {
// 	Q_OBJECT
// 	public:
// 	CustomTable(QSqlCursor *cursor, bool autoPopulate = FALSE,
// 		QWidget * parent = 0, const char * name = 0 ) :
// 	QDataTable( cursor, autoPopulate, parent, name ) {}
// 	void paintField(QPainter * p, const QSqlField* field, const QRect & cr, bool );
// 	void paintCell( QPainter * p, int row, int col, const QRect & cr, bool selected, const QColorGroup & cg );
// };

#endif

