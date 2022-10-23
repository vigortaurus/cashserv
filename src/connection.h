/****************************************************************************
** $Id: qt/connection.h   3.3.3   edited Nov 14 2003 $
**
** Copyright (C) 1992-2002 Trolltech AS.  All rights reserved.
**
** This file is part of an example program for Qt.  This example
** program may be used, distributed and modified without limitation.
**
*****************************************************************************/
#ifndef CONNECTION_H
#define CONNECTION_H	
// Enter your connection info here

#include <qsqlquery.h>
#include <q3sqlcursor.h>
#include <qsqldatabase.h>
#include <qsettings.h>
#include "settings.h"
#define DB_AWPS_DRIVER	    "QMYSQL3"
#define DB_AWPS_DBNAME	    "cashsrv"
#define DB_AWPS_USER	    "root"
#define DB_AWPS_PASSWD	    ""
#define DB_AWPS_HOST	    "localhost"

/*класс реализует доступ к базе данных mysql*/
class dbconnection
{
public:
	dbconnection();	
	~dbconnection();
	Q3SqlCursor cvcursor;
	bool createConnections(QString apppath);			//создание соединения с бд
	bool sqlcursoropencv();				//создание курсора для временного чека	
	void sttdefaultDB(QString apppath);
private:
	QSqlDatabase defaultDB;		//объект базы данных	
	
};


#endif
