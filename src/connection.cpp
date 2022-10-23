/****************************************************************************
** $Id: qt/connection.cpp   3.3.3   edited Nov 14 2003 $
**
** Copyright (C) 1992-2002 Trolltech AS.  All rights reserved.
**
** This file is part of an example program for Qt.  This example
** program may be used, distributed and modified without limitation.
**
*****************************************************************************/

#include "connection.h"
#include <QSqlError>
//Added by qt3to4:
#include <Q3SqlCursor>
dbconnection::dbconnection()
{

}
dbconnection::~dbconnection()
{

}

bool dbconnection::createConnections(QString apppath)
{	
    QSettings stt;
    stt.insertSearchPath( QSettings::Unix,  apppath+ "/settings");
	sttdefaultDB(apppath+ "/settings");
		
	defaultDB = QSqlDatabase::addDatabase( DB_AWPS_DRIVER,DB_AWPS_DBNAME);
    defaultDB.setDatabaseName(stt.readEntry("/db/DB_AWPS_DBNAME",DB_AWPS_DBNAME));
    defaultDB.setUserName(stt.readEntry("/db/DB_AWPS_USER",DB_AWPS_USER));
    defaultDB.setPassword(stt.readEntry("/db/DB_AWPS_PASSWD","") );
    defaultDB.setHostName(stt.readEntry("/db/DB_AWPS_HOST",DB_AWPS_HOST));
	if (!defaultDB.isOpen())
	{
    		if ( ! defaultDB.open() ) {
			qWarning( "Failed to open awpsdb database: " + defaultDB.lastError().text() );
			return FALSE;
    		}
	}	
	
	return TRUE;
}


bool dbconnection::sqlcursoropencv()
{	
	QSqlDatabase awpsdb = QSqlDatabase::database(DB_AWPS_DBNAME);
	Q3SqlCursor cvcur( "document_h",TRUE,awpsdb);
	if(cvcur.select())
	{
		if(cvcur.isActive())
		{
			cvcur.first();
			cvcursor=cvcur;
			return TRUE;
		}
	}	
	
	return FALSE;
}

void dbconnection::sttdefaultDB(QString apppath)
{
    QSettings stt;
	stt.insertSearchPath( QSettings::Unix,  apppath);
    if(stt.readEntry("/db/DB_AWPS_DRIVER","nodata")=="nodata")
        stt.writeEntry( "/db/DB_AWPS_DRIVER",DB_AWPS_DRIVER);
    if(stt.readEntry("/db/DB_AWPS_DBNAME","nodata")=="nodata")
        stt.writeEntry( "/db/DB_AWPS_DBNAME", DB_AWPS_DBNAME);
    if(stt.readEntry("/db/DB_AWPS_USER","nodata")=="nodata")
        stt.writeEntry( "/db/DB_AWPS_USER", DB_AWPS_USER);
    if(stt.readEntry("/db/DB_AWPS_PASSWD","nodata")=="nodata")
        stt.writeEntry( "/db/DB_AWPS_PASSWD", "");
    if(stt.readEntry("/db/DB_AWPS_HOST","nodata")=="nodata")
        stt.writeEntry( "/db/DB_AWPS_HOST", DB_AWPS_HOST);

}



