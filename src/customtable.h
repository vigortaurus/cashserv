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
#ifndef CUSTOMTABLE_H
#define CUSTOMTABLE_H

#include <q3datatable.h>
//Added by qt3to4:
#include <Q3SqlCursor>

/**
	@author vigor,,, <vigortaurus@mail.ru>
*/
class MyCustomQtable : public Q3DataTable
{
public:
	Q_OBJECT
	public:
		MyCustomQtable ( QWidget* parent=0, const char* name=0 );
		MyCustomQtable(Q3SqlCursor *cursor, bool autoPopulate = FALSE,QWidget * parent = 0, const char * name = 0 ) ;
		void paintField(QPainter * p, const QSqlField* field, const QRect & cr, bool );
 		void paintCell( QPainter * p, int row, int col, const QRect & cr, bool selected, const QColorGroup & cg );
		~MyCustomQtable();
// 		void paintFocus(QPainter * p, const QRect & cr );
		int numfield;
	private:
		QFont f;
};
#endif
