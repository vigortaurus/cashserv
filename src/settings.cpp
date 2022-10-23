/***************************************************************************
 *   Copyright (C) 2006 by igor                                            *
 *   root@igor                                                             *
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
#include "settings.h"

settings::settings(QString apppath): QSettings()
{
	if(!qd.exists ( apppath+ "/settings"))//,TRUE ))
 		qd.mkdir (apppath+ "/settings", TRUE );
	path=apppath+"/settings";
	insertSearchPath( QSettings::Unix,  path);
	defaultftp();	
	defaultwin();
	defaultDB();
}


settings::~settings()
{
}
void settings::defaultftp()
{
	if(readEntry("/ftp/address","nodata")=="nodata")
		writeEntry( "/ftp/address","192.168.0.114");
	if(readEntry("/ftp/port","nodata")=="nodata")		
		writeEntry( "/ftp/port", 21);
	if(readEntry("/ftp/dirftpout","nodata")=="nodata")
		writeEntry( "/ftp/dirftpout", "/home/boffice/kassa/oper...");
	if(readEntry("/ftp/dirftpin","nodata")=="nodata")
		writeEntry( "/ftp/dirftpin", "/home/boffice/kassa/oper...");		
	if(readEntry("/ftp/user","nodata")=="nodata")
		writeEntry( "/ftp/user", "oper");
	if(readEntry("/ftp/password","nodata")=="nodata")	
		writeEntry( "/ftp/password", "");
	if(readEntry("/ftp/timersec","nodata")=="nodata")	
		writeEntry( "/ftp/timersec", 300);
    
}
void settings::defaultwin()
{

	//таблица 
	if(readEntry("/win/framecashdata/tbl_doc/font","nodata")=="nodata")
		writeEntry( "/win/framecashdata/tbl_doc/font","Arial,12,-1,5,50,0,0,0,0,0");
	if(readEntry("/win/framecashdata/tbl_doc/rowheigth","nodata")=="nodata")
		writeEntry( "/win/framecashdata/tbl_doc/rowheigth","25");
	if(readEntry("/win/framecashdata/tbl_doc/width1","nodata")=="nodata")
		writeEntry( "/win/framecashdata/tbl_doc/width1","200");
	if(readEntry("/win/framecashdata/tbl_doc/width2","nodata")=="nodata")
		writeEntry( "/win/framecashdata/tbl_doc/width2","80");
	if(readEntry("/win/framecashdata/tbl_doc/width3","nodata")=="nodata")
		writeEntry( "/win/framecashdata/tbl_doc/width3","80");
	if(readEntry("/win/framecashdata/tbl_doc/width4","nodata")=="nodata")
		writeEntry( "/win/framecashdata/tbl_doc/width4","80");
		
}

void settings::defaultDB()
{
	if(readEntry("/db/DB_AWPS_DRIVER","nodata")=="nodata")
		writeEntry( "/db/DB_AWPS_DRIVER","QMYSQL3");
	if(readEntry("/db/DB_AWPS_DBNAME","nodata")=="nodata")	
		writeEntry( "/db/DB_AWPS_DBNAME", "cashsrv");
	if(readEntry("/db/DB_AWPS_USER","nodata")=="nodata")
		writeEntry( "/fr/DB_AWPS_USER", "root");
	if(readEntry("/db/DB_AWPS_PASSWD","nodata")=="nodata")
		writeEntry( "/fr/DB_AWPS_PASSWD", "");
	if(readEntry("/db/DB_AWPS_HOST","nodata")=="nodata")
		writeEntry( "/fr/DB_AWPS_HOST", "localhost");

}


