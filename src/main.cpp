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


#include <qapplication.h>
#include "mainwindowder.h"

int main( int argc, char ** argv ) {
    QApplication a( argc, argv );

	mainwindowder * mw = new mainwindowder(0,0,0,a.applicationDirPath ());  
	a.setMainWidget(mw);
	mw->show();	
	mw->showMaximized();
	//QTextCodec::setCodecForTr( QTextCodec::codecForName("utf8") );
	//QTextCodec::setCodecForCStrings( QTextCodec::codecForName("utf8") );	
	//QTextCodec::setCodecForLocale ( QTextCodec::codecForName("utf8") );	

	a.connect( &a, SIGNAL(lastWindowClosed()), &a, SLOT(quit()) );
	return a.exec();
}
