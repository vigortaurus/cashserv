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
#include "customtable.h"
#include <qpainter.h>
//Added by qt3to4:
#include <Q3SqlCursor>

MyCustomQtable::MyCustomQtable(Q3SqlCursor *cursor, bool autoPopulate ,QWidget * parent , const char * name  )
 : Q3DataTable(cursor, autoPopulate, parent, name)
{

    Q3DataTable (  cursor, autoPopulate , parent,name );
	numfield=0;
}
MyCustomQtable::MyCustomQtable ( QWidget* parent, const char* name ): Q3DataTable(parent, name)
{
    Q3DataTable ( parent, name );
}

MyCustomQtable::~MyCustomQtable()
{
}
void MyCustomQtable::paintField( QPainter * p, const QSqlField* field, const QRect & cr, bool b)
{
	if ( !field )
		return;
		Q3DataTable::paintField( p, field, cr, b) ;

}
 void MyCustomQtable::paintCell( QPainter * p, int row, int col, const QRect & cr, bool selected, const QColorGroup & cg )
{

	QColor color;
	if (text(row, numfield) == "0") color.setRgb(239,229 ,152 );  // задание цвета
	if (text(row, numfield) == "1") color.setRgb(239,189 ,175 ); 
	if (text(row, numfield) == "2") color.setRgb(239,129 ,129 ); 
	if (text(row, numfield) == "3") color.setRgb(199,239 ,211 );
	if (text(row, numfield) == "4") color.setRgb(85,170 ,255 );
	if (text(row, numfield) == "6") color.setRgb(85,170 ,255 );
	if ((text(row, numfield) == "6") and( col ==0 ))
	{
		color.setRgb(255,0 ,0 );
	}
	QColorGroup g( cg );
	g.setColor(QColorGroup::Base, color);
	if (Q3DataTable::isRowSelected(row,false))
	{
 		f =  p->font();
 		f.setBold (true);
 		p->setFont( f );
		Q3DataTable::paintCell(p, row, col, cr, false, g);
		
		
	}
	else
	{
 		f =  p->font();
 		f.setBold (false);
 		p->setFont( f );
		Q3DataTable::paintCell(p, row, col, cr, /*selected*/ false, g);
	}	
}
// void MyCustomQtable::paintFocus(QPainter * p, const QRect & cr )
// {
// 	//QPainter paint( this );
//         //paint.setPen( Qt::blue );
// 	p->setPen( Qt::green );
// 	//p->setBrush( Qt::green );
// 	p->drawRect (cr );
//         QDataTable::paintFocus(p, cr);
// 	
// 
// }












