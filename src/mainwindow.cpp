#include "mainwindow.h"

#include <qvariant.h>
#include <customtable.h>
/*
 *  Constructs a frmmain as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 */
frmmain::frmmain(QWidget* parent, const char* name, Qt::WindowFlags fl)
    : Q3MainWindow(parent, name, fl)
{
    setupUi(this);

    (void)statusBar();
}

/*
 *  Destroys the object and frees any allocated resources
 */
frmmain::~frmmain()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void frmmain::languageChange()
{
    retranslateUi(this);
}

