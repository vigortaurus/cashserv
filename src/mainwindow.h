#ifndef FRMMAIN_H
#define FRMMAIN_H

#include <qvariant.h>


#include <Qt3Support/Q3ButtonGroup>
#include <Qt3Support/Q3DataTable>
#include <Qt3Support/Q3DateEdit>
#include <Qt3Support/Q3Frame>
#include <Qt3Support/Q3MainWindow>
#include <Qt3Support/Q3TextEdit>
#include <Qt3Support/Q3ToolBar>
#include <Qt3Support/Q3WidgetStack>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <customtable.h>
//#include "mycustomqtable.h"

QT_BEGIN_NAMESPACE

class Ui_frmmain
{
public:
    QAction *m_dawnload;
    QWidget *widget;
    QGridLayout *gridLayout;
    Q3Frame *frame15;
    QGridLayout *gridLayout1;
    Q3WidgetStack *stack;
    QWidget *WStackPage3;
    QGridLayout *gridLayout2;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacer11;
    QPushButton *btn_back;
    QSplitter *splitter7;
    QWidget *layout10;
    QHBoxLayout *hboxLayout1;
    QVBoxLayout *vboxLayout;
    MyCustomQtable *tbl_doc;
    QHBoxLayout *hboxLayout2;
    QPushButton *btn_reset_revise;
    QPushButton *btn_upload;
    QPushButton *btn_view;
    Q3Frame *frame4;
    QGridLayout *gridLayout3;
    QVBoxLayout *vboxLayout1;
    QPushButton *btn_1doc_to;
    QSpacerItem *spacer3;
    QPushButton *btn_all_doc_to;
    QSpacerItem *spacer4;
    QPushButton *btn_1doc_from;
    QSpacerItem *spacer5;
    QPushButton *btn_all_doc_from;
    QSpacerItem *spacer9;
    QSpacerItem *spacer10;
    QWidget *layout11;
    QVBoxLayout *vboxLayout2;
    Q3DataTable *tbl_docs_to_process;
    Q3ButtonGroup *grpbox;
    QRadioButton *rbt_box;
    QRadioButton *rbt_good;
    QRadioButton *rbt_bybox;
    QPushButton *btn_close_nochek;
    QPushButton *btn_close;
    QPushButton *btn_begin_chek;
    QWidget *WStackPage2;
    QLabel *textLabel3;
    QLabel *textLabel1;
    QLabel *textLabel2;
    QLabel *textLabel5;
    QPushButton *btn_search;
    Q3DateEdit *dateend;
    Q3DateEdit *date_begin;
    Q3TextEdit *tedt_numdoc;
    QPushButton *btn_return;
    QWidget *WStackPage;
    QLabel *textLabel7;
    QLabel *textLabel9;
    QLabel *textLabel8;
    QPushButton *btn_ok;
    QPushButton *btn_cancel;
    QComboBox *cbx_user;
    QLineEdit *edt_pass;
    QWidget *WStackPage4;
    QGridLayout *gridLayout4;
    QVBoxLayout *vboxLayout3;
    QHBoxLayout *hboxLayout3;
    MyCustomQtable *tbl_doct;
    QVBoxLayout *vboxLayout4;
    MyCustomQtable *tbl_box;
    QLabel *lbl_info;
    QHBoxLayout *hboxLayout4;
    QLineEdit *tedt;
    QSpacerItem *spacer1;
    QCheckBox *chBx_showdiff;
    QSpacerItem *spacer23;
    QPushButton *btn_back_doct;
    Q3ToolBar *Toolbar;
    QMenuBar *menubar;
    QMenu *unnamed;

    void setupUi(Q3MainWindow *frmmain)
    {
        if (frmmain->objectName().isEmpty())
            frmmain->setObjectName(QString::fromUtf8("frmmain"));
        frmmain->resize(800, 573);
        frmmain->setUsesBigPixmaps(true);
        m_dawnload = new QAction(frmmain);
        m_dawnload->setObjectName(QString::fromUtf8("m_dawnload"));
        m_dawnload->setName("m_dawnload");
        widget = new QWidget(frmmain);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        frame15 = new Q3Frame(widget);
        frame15->setObjectName(QString::fromUtf8("frame15"));
        frame15->setFrameShape(QFrame::StyledPanel);
        frame15->setFrameShadow(QFrame::Raised);
        gridLayout1 = new QGridLayout(frame15);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        stack = new Q3WidgetStack(frame15);
        stack->setObjectName(QString::fromUtf8("stack"));
        stack->setFrameShadow(Q3WidgetStack::Plain);
        WStackPage3 = new QWidget(stack);
        WStackPage3->setObjectName(QString::fromUtf8("WStackPage3"));
        gridLayout2 = new QGridLayout(WStackPage3);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(11, 11, 11, 11);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        gridLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacer11 = new QSpacerItem(431, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacer11);

        btn_back = new QPushButton(WStackPage3);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));

        hboxLayout->addWidget(btn_back);


        gridLayout2->addLayout(hboxLayout, 1, 0, 1, 1);

        splitter7 = new QSplitter(WStackPage3);
        splitter7->setObjectName(QString::fromUtf8("splitter7"));
        splitter7->setOrientation(Qt::Horizontal);
        layout10 = new QWidget(splitter7);
        layout10->setObjectName(QString::fromUtf8("layout10"));
        hboxLayout1 = new QHBoxLayout(layout10);
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(11, 11, 11, 11);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        tbl_doc = new MyCustomQtable(layout10);
        tbl_doc->setObjectName(QString::fromUtf8("tbl_doc"));

        vboxLayout->addWidget(tbl_doc);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        btn_reset_revise = new QPushButton(layout10);
        btn_reset_revise->setObjectName(QString::fromUtf8("btn_reset_revise"));
        btn_reset_revise->setEnabled(false);
        btn_reset_revise->setMaximumSize(QSize(32767, 32767));

        hboxLayout2->addWidget(btn_reset_revise);

        btn_upload = new QPushButton(layout10);
        btn_upload->setObjectName(QString::fromUtf8("btn_upload"));

        hboxLayout2->addWidget(btn_upload);

        btn_view = new QPushButton(layout10);
        btn_view->setObjectName(QString::fromUtf8("btn_view"));

        hboxLayout2->addWidget(btn_view);


        vboxLayout->addLayout(hboxLayout2);


        hboxLayout1->addLayout(vboxLayout);

        frame4 = new Q3Frame(layout10);
        frame4->setObjectName(QString::fromUtf8("frame4"));
        frame4->setMaximumSize(QSize(0, 32767));
        frame4->setFrameShape(QFrame::StyledPanel);
        frame4->setFrameShadow(QFrame::Raised);
        gridLayout3 = new QGridLayout(frame4);
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(11, 11, 11, 11);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        btn_1doc_to = new QPushButton(frame4);
        btn_1doc_to->setObjectName(QString::fromUtf8("btn_1doc_to"));
        btn_1doc_to->setMaximumSize(QSize(30, 32767));

        vboxLayout1->addWidget(btn_1doc_to);

        spacer3 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacer3);

        btn_all_doc_to = new QPushButton(frame4);
        btn_all_doc_to->setObjectName(QString::fromUtf8("btn_all_doc_to"));
        btn_all_doc_to->setMaximumSize(QSize(30, 32767));

        vboxLayout1->addWidget(btn_all_doc_to);

        spacer4 = new QSpacerItem(21, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacer4);

        btn_1doc_from = new QPushButton(frame4);
        btn_1doc_from->setObjectName(QString::fromUtf8("btn_1doc_from"));
        btn_1doc_from->setMaximumSize(QSize(30, 32767));

        vboxLayout1->addWidget(btn_1doc_from);

        spacer5 = new QSpacerItem(20, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacer5);

        btn_all_doc_from = new QPushButton(frame4);
        btn_all_doc_from->setObjectName(QString::fromUtf8("btn_all_doc_from"));
        btn_all_doc_from->setMaximumSize(QSize(30, 32767));

        vboxLayout1->addWidget(btn_all_doc_from);


        gridLayout3->addLayout(vboxLayout1, 1, 0, 1, 1);

        spacer9 = new QSpacerItem(21, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout3->addItem(spacer9, 0, 0, 1, 1);

        spacer10 = new QSpacerItem(21, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout3->addItem(spacer10, 2, 0, 1, 1);


        hboxLayout1->addWidget(frame4);

        splitter7->addWidget(layout10);
        layout11 = new QWidget(splitter7);
        layout11->setObjectName(QString::fromUtf8("layout11"));
        vboxLayout2 = new QVBoxLayout(layout11);
        vboxLayout2->setSpacing(6);
        vboxLayout2->setContentsMargins(11, 11, 11, 11);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        tbl_docs_to_process = new Q3DataTable(layout11);
        tbl_docs_to_process->setObjectName(QString::fromUtf8("tbl_docs_to_process"));
        tbl_docs_to_process->setMaximumSize(QSize(32767, 32767));

        vboxLayout2->addWidget(tbl_docs_to_process);

        grpbox = new Q3ButtonGroup(layout11);
        grpbox->setObjectName(QString::fromUtf8("grpbox"));
        grpbox->setMinimumSize(QSize(0, 100));
        grpbox->setFrameShape(Q3GroupBox::GroupBoxPanel);
        rbt_box = new QRadioButton(grpbox);
        rbt_box->setObjectName(QString::fromUtf8("rbt_box"));
        rbt_box->setEnabled(true);
        rbt_box->setGeometry(QRect(20, 20, 240, 20));
        QFont font;
        rbt_box->setFont(font);
        rbt_good = new QRadioButton(grpbox);
        rbt_good->setObjectName(QString::fromUtf8("rbt_good"));
        rbt_good->setGeometry(QRect(20, 60, 270, 21));
        rbt_good->setFont(font);
        rbt_good->setChecked(false);
        rbt_bybox = new QRadioButton(grpbox);
        rbt_bybox->setObjectName(QString::fromUtf8("rbt_bybox"));
        rbt_bybox->setGeometry(QRect(20, 40, 270, 20));
        rbt_bybox->setFont(font);
        rbt_bybox->setAutoRepeat(false);
        rbt_bybox->setChecked(true);

        vboxLayout2->addWidget(grpbox);

        btn_close_nochek = new QPushButton(layout11);
        btn_close_nochek->setObjectName(QString::fromUtf8("btn_close_nochek"));

        vboxLayout2->addWidget(btn_close_nochek);

        btn_close = new QPushButton(layout11);
        btn_close->setObjectName(QString::fromUtf8("btn_close"));
        btn_close->setMaximumSize(QSize(32767, 32767));

        vboxLayout2->addWidget(btn_close);

        btn_begin_chek = new QPushButton(layout11);
        btn_begin_chek->setObjectName(QString::fromUtf8("btn_begin_chek"));
        btn_begin_chek->setMaximumSize(QSize(32767, 32767));

        vboxLayout2->addWidget(btn_begin_chek);

        splitter7->addWidget(layout11);

        gridLayout2->addWidget(splitter7, 0, 0, 1, 1);

        stack->addWidget(WStackPage3, 0);
        WStackPage2 = new QWidget(stack);
        WStackPage2->setObjectName(QString::fromUtf8("WStackPage2"));
        textLabel3 = new QLabel(WStackPage2);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
        textLabel3->setGeometry(QRect(10, 50, 140, 30));
        textLabel3->setWordWrap(false);
        textLabel1 = new QLabel(WStackPage2);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setGeometry(QRect(10, 130, 69, 31));
        textLabel1->setWordWrap(false);
        textLabel2 = new QLabel(WStackPage2);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        textLabel2->setGeometry(QRect(260, 140, 69, 21));
        textLabel2->setWordWrap(false);
        textLabel5 = new QLabel(WStackPage2);
        textLabel5->setObjectName(QString::fromUtf8("textLabel5"));
        textLabel5->setGeometry(QRect(148, 14, 391, 21));
        textLabel5->setWordWrap(false);
        btn_search = new QPushButton(WStackPage2);
        btn_search->setObjectName(QString::fromUtf8("btn_search"));
        btn_search->setGeometry(QRect(30, 230, 141, 30));
        dateend = new Q3DateEdit(WStackPage2);
        dateend->setObjectName(QString::fromUtf8("dateend"));
        dateend->setGeometry(QRect(360, 130, 110, 30));
        date_begin = new Q3DateEdit(WStackPage2);
        date_begin->setObjectName(QString::fromUtf8("date_begin"));
        date_begin->setGeometry(QRect(90, 130, 121, 30));
        tedt_numdoc = new Q3TextEdit(WStackPage2);
        tedt_numdoc->setObjectName(QString::fromUtf8("tedt_numdoc"));
        tedt_numdoc->setGeometry(QRect(260, 40, 220, 47));
        btn_return = new QPushButton(WStackPage2);
        btn_return->setObjectName(QString::fromUtf8("btn_return"));
        btn_return->setGeometry(QRect(200, 230, 120, 30));
        stack->addWidget(WStackPage2, 1);
        WStackPage = new QWidget(stack);
        WStackPage->setObjectName(QString::fromUtf8("WStackPage"));
        textLabel7 = new QLabel(WStackPage);
        textLabel7->setObjectName(QString::fromUtf8("textLabel7"));
        textLabel7->setGeometry(QRect(10, 60, 130, 20));
        textLabel7->setWordWrap(false);
        textLabel9 = new QLabel(WStackPage);
        textLabel9->setObjectName(QString::fromUtf8("textLabel9"));
        textLabel9->setGeometry(QRect(50, 20, 363, 20));
        textLabel9->setWordWrap(false);
        textLabel8 = new QLabel(WStackPage);
        textLabel8->setObjectName(QString::fromUtf8("textLabel8"));
        textLabel8->setGeometry(QRect(10, 110, 110, 20));
        textLabel8->setWordWrap(false);
        btn_ok = new QPushButton(WStackPage);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));
        btn_ok->setGeometry(QRect(10, 160, 121, 31));
        btn_cancel = new QPushButton(WStackPage);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));
        btn_cancel->setGeometry(QRect(210, 160, 101, 31));
        cbx_user = new QComboBox(WStackPage);
        cbx_user->setObjectName(QString::fromUtf8("cbx_user"));
        cbx_user->setGeometry(QRect(170, 60, 140, 24));
        edt_pass = new QLineEdit(WStackPage);
        edt_pass->setObjectName(QString::fromUtf8("edt_pass"));
        edt_pass->setGeometry(QRect(180, 110, 123, 24));
        edt_pass->setEchoMode(QLineEdit::Password);
        stack->addWidget(WStackPage, 2);
        WStackPage4 = new QWidget(stack);
        WStackPage4->setObjectName(QString::fromUtf8("WStackPage4"));
        gridLayout4 = new QGridLayout(WStackPage4);
        gridLayout4->setSpacing(6);
        gridLayout4->setContentsMargins(11, 11, 11, 11);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        gridLayout4->setContentsMargins(0, 0, 0, 0);
        vboxLayout3 = new QVBoxLayout();
        vboxLayout3->setSpacing(6);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(6);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        tbl_doct = new MyCustomQtable(WStackPage4);
        tbl_doct->setObjectName(QString::fromUtf8("tbl_doct"));
        tbl_doct->setEnabled(true);

        hboxLayout3->addWidget(tbl_doct);

        vboxLayout4 = new QVBoxLayout();
        vboxLayout4->setSpacing(6);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        tbl_box = new MyCustomQtable(WStackPage4);
        tbl_box->setObjectName(QString::fromUtf8("tbl_box"));
        tbl_box->setMinimumSize(QSize(0, 380));
        tbl_box->setMaximumSize(QSize(380, 32767));

        vboxLayout4->addWidget(tbl_box);

        lbl_info = new QLabel(WStackPage4);
        lbl_info->setObjectName(QString::fromUtf8("lbl_info"));
        QFont font1;
        font1.setBold(true);
        lbl_info->setFont(font1);
        lbl_info->setAlignment(Qt::AlignVCenter|Qt::AlignLeft);
        lbl_info->setWordWrap(false);

        vboxLayout4->addWidget(lbl_info);


        hboxLayout3->addLayout(vboxLayout4);


        vboxLayout3->addLayout(hboxLayout3);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setSpacing(6);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        tedt = new QLineEdit(WStackPage4);
        tedt->setObjectName(QString::fromUtf8("tedt"));
        tedt->setMaximumSize(QSize(32767, 25));

        hboxLayout4->addWidget(tedt);

        spacer1 = new QSpacerItem(90, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacer1);

        chBx_showdiff = new QCheckBox(WStackPage4);
        chBx_showdiff->setObjectName(QString::fromUtf8("chBx_showdiff"));

        hboxLayout4->addWidget(chBx_showdiff);

        spacer23 = new QSpacerItem(20, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacer23);

        btn_back_doct = new QPushButton(WStackPage4);
        btn_back_doct->setObjectName(QString::fromUtf8("btn_back_doct"));

        hboxLayout4->addWidget(btn_back_doct);


        vboxLayout3->addLayout(hboxLayout4);


        gridLayout4->addLayout(vboxLayout3, 0, 0, 1, 1);

        stack->addWidget(WStackPage4, 3);

        gridLayout1->addWidget(stack, 0, 0, 1, 1);


        gridLayout->addWidget(frame15, 0, 0, 1, 1);

        frmmain->setCentralWidget(widget);
        Toolbar = new Q3ToolBar(frmmain);
        Toolbar->setObjectName(QString::fromUtf8("Toolbar"));
        menubar = new QMenuBar(frmmain);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        QPalette palette;
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(1), QColor(73, 239, 233));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(2), QColor(181, 255, 253));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(3), QColor(127, 247, 243));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(4), QColor(36, 119, 116));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(5), QColor(49, 159, 155));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(10), QColor(178, 239, 237));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(12), QColor(0, 0, 128));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 0));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(15), QColor(0, 0, 0));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(1), QColor(73, 239, 233));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(2), QColor(181, 255, 253));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(3), QColor(97, 255, 250));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(4), QColor(36, 119, 116));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(5), QColor(49, 159, 155));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(10), QColor(178, 239, 237));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(12), QColor(0, 0, 128));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 238));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(15), QColor(82, 24, 139));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(0), QColor(128, 128, 128));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(1), QColor(73, 239, 233));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(2), QColor(181, 255, 253));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(3), QColor(97, 255, 250));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(4), QColor(36, 119, 116));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(5), QColor(49, 159, 155));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(6), QColor(128, 128, 128));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(8), QColor(128, 128, 128));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(10), QColor(178, 239, 237));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(12), QColor(0, 0, 128));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 238));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(15), QColor(82, 24, 139));
        menubar->setPalette(palette);
        unnamed = new QMenu(menubar);
        unnamed->setObjectName(QString::fromUtf8("unnamed"));
        QWidget::setTabOrder(btn_reset_revise, btn_back);
        QWidget::setTabOrder(btn_back, date_begin);
        QWidget::setTabOrder(date_begin, dateend);
        QWidget::setTabOrder(dateend, tedt_numdoc);
        QWidget::setTabOrder(tedt_numdoc, btn_search);
        QWidget::setTabOrder(btn_search, btn_return);
        QWidget::setTabOrder(btn_return, cbx_user);
        QWidget::setTabOrder(cbx_user, btn_ok);
        QWidget::setTabOrder(btn_ok, btn_cancel);

        menubar->addAction(unnamed->menuAction());
        unnamed->addAction(m_dawnload);

        retranslateUi(frmmain);

        QMetaObject::connectSlotsByName(frmmain);
    } // setupUi

    void retranslateUi(Q3MainWindow *frmmain)
    {
        frmmain->setWindowTitle(QApplication::translate("frmmain", "\320\232\320\260\321\201\321\201\320\276\320\262\321\213\320\271 \321\201\320\265\321\200\320\262\320\265\321\200", 0, QApplication::UnicodeUTF8));
        m_dawnload->setIconText(QApplication::translate("frmmain", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265", 0, QApplication::UnicodeUTF8));
        m_dawnload->setText(QApplication::translate("frmmain", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265", 0, QApplication::UnicodeUTF8));
        btn_back->setText(QApplication::translate("frmmain", "\320\235\320\260\320\267\320\260\320\264", 0, QApplication::UnicodeUTF8));
        btn_back->setShortcut(QString());
        btn_reset_revise->setText(QApplication::translate("frmmain", "\320\241\320\261\321\200\320\276\321\201. \320\235\320\265 \320\277\321\200\320\276\320\262\320\265\321\200\320\265\320\275\320\276", 0, QApplication::UnicodeUTF8));
        btn_reset_revise->setShortcut(QString());
        btn_upload->setText(QApplication::translate("frmmain", "\320\222\321\213\320\263\321\200\321\203\320\267\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        btn_upload->setShortcut(QString());
        btn_view->setText(QApplication::translate("frmmain", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200", 0, QApplication::UnicodeUTF8));
        btn_view->setShortcut(QString());
        btn_1doc_to->setText(QApplication::translate("frmmain", ">", 0, QApplication::UnicodeUTF8));
        btn_1doc_to->setShortcut(QString());
        btn_all_doc_to->setText(QApplication::translate("frmmain", ">>", 0, QApplication::UnicodeUTF8));
        btn_all_doc_to->setShortcut(QString());
        btn_1doc_from->setText(QApplication::translate("frmmain", "<", 0, QApplication::UnicodeUTF8));
        btn_1doc_from->setShortcut(QString());
        btn_all_doc_from->setText(QApplication::translate("frmmain", "<<", 0, QApplication::UnicodeUTF8));
        btn_all_doc_from->setShortcut(QString());
        grpbox->setTitle(QApplication::translate("frmmain", "\320\241\320\277\320\276\321\201\320\276\320\261 \321\201\320\272\320\260\320\275\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217", 0, QApplication::UnicodeUTF8));
        rbt_box->setText(QApplication::translate("frmmain", "\320\241\320\272\320\260\320\275\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \320\272\320\276\321\200\320\276\320\261\320\276\320\262", 0, QApplication::UnicodeUTF8));
        rbt_box->setShortcut(QString());
        rbt_good->setText(QApplication::translate("frmmain", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200 \320\270 \320\272\320\276\321\200\321\200-\320\272\320\260 \321\200\320\260\321\201\321\205\320\276\320\266\320\264\320\265\320\275\320\270\320\271", 0, QApplication::UnicodeUTF8));
        rbt_good->setShortcut(QString());
        rbt_bybox->setText(QApplication::translate("frmmain", "\320\241\320\272\320\260\320\275\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \321\202\320\276\320\262\320\260\321\200\320\260 \320\272\320\276\321\200\320\276\320\261\320\260\320\274\320\270", 0, QApplication::UnicodeUTF8));
        rbt_bybox->setShortcut(QString());
        btn_close_nochek->setText(QApplication::translate("frmmain", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \320\261\320\265\320\267 \320\277\321\200\320\276\320\262\320\265\321\200\320\272\320\270", 0, QApplication::UnicodeUTF8));
        btn_close_nochek->setShortcut(QString());
        btn_close->setText(QApplication::translate("frmmain", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", 0, QApplication::UnicodeUTF8));
        btn_close->setShortcut(QString());
        btn_begin_chek->setText(QApplication::translate("frmmain", "\320\235\320\260\321\207\320\260\321\202\321\214 \321\201\320\262\320\265\321\200\320\272\321\203", 0, QApplication::UnicodeUTF8));
        btn_begin_chek->setShortcut(QString());
        textLabel3->setText(QApplication::translate("frmmain", "\320\235\320\276\320\274\320\265\321\200 \320\275\320\260\320\272\320\273\320\260\320\264\320\275\320\276\320\271:", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("frmmain", "c", 0, QApplication::UnicodeUTF8));
        textLabel2->setText(QApplication::translate("frmmain", "\320\277\320\276", 0, QApplication::UnicodeUTF8));
        textLabel5->setText(QApplication::translate("frmmain", "\320\237\320\276\320\270\321\201\320\272 \320\275\320\260\320\272\320\273\320\260\320\264\320\275\320\276\320\271", 0, QApplication::UnicodeUTF8));
        btn_search->setText(QApplication::translate("frmmain", "\320\237\320\276\320\270\321\201\320\272", 0, QApplication::UnicodeUTF8));
        btn_search->setShortcut(QString());
        btn_return->setText(QApplication::translate("frmmain", "\320\235\320\260\320\267\320\260\320\264", 0, QApplication::UnicodeUTF8));
        btn_return->setShortcut(QString());
        textLabel7->setText(QApplication::translate("frmmain", "\320\230\320\274\321\217 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217:", 0, QApplication::UnicodeUTF8));
        textLabel9->setText(QApplication::translate("frmmain", "\320\220\321\203\321\202\320\265\320\275\321\202\320\270\321\204\320\270\320\272\320\260\321\206\320\270\321\217. \320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217 \320\270 \320\277\320\260\321\200\320\276\320\273\321\214.", 0, QApplication::UnicodeUTF8));
        textLabel8->setText(QApplication::translate("frmmain", "\320\237\320\260\321\200\320\276\320\273\321\214:", 0, QApplication::UnicodeUTF8));
        btn_ok->setText(QApplication::translate("frmmain", "O&K", 0, QApplication::UnicodeUTF8));
        btn_ok->setShortcut(QApplication::translate("frmmain", "Alt+K", 0, QApplication::UnicodeUTF8));
        btn_cancel->setText(QApplication::translate("frmmain", "\320\236\321\202\320\274\320\265\320\275\320\260", 0, QApplication::UnicodeUTF8));
        btn_cancel->setShortcut(QString());
        lbl_info->setText(QApplication::translate("frmmain", "\320\232\320\276\320\273-\320\262\320\276 \320\276\321\202\321\201\320\272\320\260\320\275\320\270\321\200\320\276\320\262\320\260\320\275\320\276, \321\210\321\202:", 0, QApplication::UnicodeUTF8));
        tedt->setInputMask(QApplication::translate("frmmain", "0000000000000; ", 0, QApplication::UnicodeUTF8));
        chBx_showdiff->setText(QApplication::translate("frmmain", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \321\202\320\276\320\273\321\214\320\272\320\276 \321\200\320\260\321\201\321\205\320\276\320\266\320\264\320\265\320\275\320\270\321\217(alt+&d))", 0, QApplication::UnicodeUTF8));
        chBx_showdiff->setShortcut(QApplication::translate("frmmain", "Alt+D", 0, QApplication::UnicodeUTF8));
        btn_back_doct->setText(QApplication::translate("frmmain", "\320\235\320\260\320\267\320\260\320\264", 0, QApplication::UnicodeUTF8));
        btn_back_doct->setShortcut(QApplication::translate("frmmain", "Esc", 0, QApplication::UnicodeUTF8));
        Toolbar->setLabel(QApplication::translate("frmmain", "Toolbar", 0, QApplication::UnicodeUTF8));
        unnamed->setTitle(QApplication::translate("frmmain", "\320\244\320\260\320\271\320\273", 0, QApplication::UnicodeUTF8));
    } // retranslateUi


protected:
    enum IconID
    {
        image0_ID,
        unknown_ID
    };
    static QPixmap qt_get_icon(IconID id)
    {
    static const unsigned char image0_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x16,
    0x08, 0x06, 0x00, 0x00, 0x00, 0xc4, 0xb4, 0x6c, 0x3b, 0x00, 0x00, 0x04,
    0x2c, 0x49, 0x44, 0x41, 0x54, 0x38, 0x8d, 0xb5, 0x95, 0x4f, 0x6c, 0x14,
    0x55, 0x1c, 0xc7, 0x3f, 0xef, 0xcd, 0x74, 0x76, 0xb6, 0x5b, 0xda, 0xae,
    0x4b, 0xb7, 0x8b, 0xb5, 0x50, 0x2a, 0x14, 0xd4, 0x04, 0xe4, 0x80, 0x1c,
    0x88, 0x18, 0x2d, 0x1c, 0x4c, 0x2c, 0x69, 0x3d, 0xa8, 0x47, 0x40, 0x0f,
    0x9c, 0x24, 0xc6, 0x8b, 0x87, 0x86, 0x84, 0x23, 0x86, 0x60, 0xe2, 0xb1,
    0xe0, 0x1f, 0x12, 0xc1, 0x94, 0x93, 0x01, 0x2e, 0xf2, 0x47, 0x8c, 0x81,
    0x44, 0x12, 0xd3, 0x54, 0xa4, 0x60, 0x17, 0xa8, 0xa5, 0x64, 0xbb, 0x6d,
    0xa5, 0xbb, 0xed, 0xcc, 0xee, 0x76, 0x77, 0x76, 0xe6, 0x3d, 0x0f, 0xfb,
    0x07, 0x37, 0x51, 0xd4, 0x83, 0xbf, 0xe4, 0x97, 0x99, 0x97, 0x4c, 0x3e,
    0xef, 0xfb, 0x7e, 0xbf, 0x37, 0xdf, 0x9f, 0xd0, 0x5a, 0x53, 0x0b, 0x21,
    0x84, 0x04, 0x0c, 0xc0, 0x04, 0x24, 0x20, 0xaa, 0xf9, 0xa4, 0xd0, 0xd5,
    0x54, 0x80, 0x0f, 0x04, 0x5a, 0x6b, 0x25, 0x6a, 0xe0, 0xe1, 0xe1, 0xe1,
    0xd6, 0xbe, 0xbe, 0xbe, 0x83, 0x8e, 0xe3, 0x1c, 0x48, 0xa7, 0xd3, 0x9b,
    0x5c, 0xd7, 0xfd, 0x07, 0x5e, 0x25, 0x1c, 0xc7, 0x61, 0x72, 0x72, 0xf2,
    0xde, 0xd8, 0xd8, 0xd8, 0x19, 0xcf, 0xf3, 0x3e, 0x03, 0x16, 0x81, 0x92,
    0x59, 0x53, 0x7a, 0xea, 0xd4, 0xa9, 0x83, 0x9d, 0x5d, 0xd6, 0xd1, 0x78,
    0x4f, 0x91, 0xf5, 0x5b, 0x0a, 0x94, 0x83, 0x02, 0x42, 0x08, 0x84, 0x04,
    0xd3, 0x04, 0x29, 0x2b, 0xef, 0x68, 0xa8, 0x9f, 0x52, 0x08, 0x02, 0xa5,
    0x98, 0xfe, 0xcd, 0xda, 0xa0, 0x4f, 0x1a, 0x87, 0x6f, 0x5c, 0x25, 0x0c,
    0x7c, 0x0a, 0x64, 0xcd, 0xea, 0xc6, 0x86, 0xe3, 0x38, 0x07, 0xe2, 0x3d,
    0x45, 0xe6, 0xb2, 0x97, 0xc8, 0xb8, 0x77, 0xf1, 0x83, 0x15, 0x42, 0x61,
    0x45, 0x50, 0xb6, 0x59, 0x98, 0x35, 0xc8, 0x3c, 0x2a, 0x81, 0xb6, 0x78,
    0x6a, 0x75, 0x13, 0x4f, 0xaf, 0x2f, 0x11, 0x69, 0xf1, 0x29, 0x97, 0x35,
    0x08, 0x81, 0xd9, 0x02, 0x1d, 0x09, 0x03, 0xe0, 0x6d, 0xe0, 0x74, 0x5d,
    0x31, 0x60, 0xa6, 0xd3, 0xe9, 0x4d, 0xbd, 0x5b, 0x0a, 0x64, 0xdc, 0xbb,
    0x94, 0xb5, 0x83, 0x1d, 0x0e, 0x33, 0x75, 0xab, 0x89, 0x2b, 0x17, 0x72,
    0xdc, 0xf9, 0x79, 0x05, 0x28, 0x54, 0x3f, 0x8d, 0xd0, 0xd3, 0x67, 0xb3,
    0x67, 0x68, 0x15, 0x3b, 0x5e, 0x31, 0x50, 0x3a, 0x0f, 0x1a, 0xec, 0xb0,
    0x04, 0x58, 0x0b, 0x44, 0xff, 0xac, 0x58, 0xba, 0xae, 0x8b, 0x17, 0x14,
    0xf0, 0x83, 0x3c, 0x76, 0x38, 0xcc, 0x8d, 0xab, 0x30, 0x3a, 0x32, 0x0f,
    0x48, 0x22, 0xab, 0x4c, 0x7a, 0x37, 0xc6, 0x91, 0x96, 0x20, 0x3d, 0xe3,
    0x31, 0x9d, 0x5c, 0xe1, 0xc4, 0xd1, 0x3c, 0x73, 0x33, 0x31, 0xde, 0xdc,
    0x67, 0xa1, 0x29, 0xa1, 0x54, 0xfd, 0x12, 0x84, 0x01, 0xab, 0x06, 0x16,
    0xd5, 0x5a, 0x13, 0x0a, 0xc3, 0xd4, 0x2d, 0x93, 0xd1, 0x91, 0x39, 0x40,
    0xd1, 0x3f, 0xd0, 0xc9, 0xee, 0x01, 0x83, 0x68, 0x5c, 0x60, 0xda, 0x01,
    0xc5, 0x42, 0x1b, 0xd7, 0x2f, 0x7a, 0x8c, 0x8e, 0xfc, 0xce, 0xf9, 0xaf,
    0xd3, 0x74, 0x26, 0x7a, 0xd9, 0x3d, 0x64, 0x23, 0x65, 0xbe, 0x06, 0x36,
    0xa0, 0xd2, 0x8e, 0xc7, 0x60, 0x09, 0x41, 0xd9, 0xe6, 0xf2, 0x39, 0x17,
    0xf0, 0xe9, 0x7f, 0x23, 0xce, 0x5b, 0xef, 0x35, 0xd1, 0x9e, 0xc8, 0x63,
    0xda, 0x0e, 0xd9, 0x05, 0x9b, 0x2b, 0xe7, 0x0b, 0xec, 0x19, 0x6c, 0x66,
    0xdf, 0xa1, 0x0e, 0xc0, 0xe4, 0x9b, 0x33, 0x8f, 0x70, 0x17, 0x25, 0x86,
    0x51, 0xbf, 0x95, 0x02, 0x10, 0x35, 0xc5, 0x95, 0x42, 0x9b, 0xb0, 0x90,
    0x32, 0x48, 0xfe, 0x52, 0xa2, 0xb5, 0xb5, 0x95, 0xdd, 0x7b, 0x4d, 0x94,
    0x5c, 0xc2, 0x34, 0x0c, 0xdc, 0xa5, 0x36, 0xbe, 0x38, 0x9e, 0xe3, 0xf6,
    0x78, 0x86, 0xc5, 0x79, 0x8f, 0x77, 0x3f, 0xe8, 0xe0, 0xda, 0xc5, 0x08,
    0xc9, 0x89, 0x65, 0x92, 0x77, 0xa2, 0x18, 0x0d, 0xa4, 0xca, 0x4f, 0xf0,
    0x78, 0x21, 0x05, 0x8b, 0x8b, 0x25, 0x14, 0x45, 0xd6, 0x3d, 0x6b, 0x13,
    0xed, 0x10, 0x98, 0xa6, 0x41, 0x7e, 0x39, 0xca, 0xc8, 0x51, 0x97, 0xdb,
    0xe3, 0x19, 0x62, 0xab, 0x9b, 0xd9, 0xf1, 0xf2, 0x2a, 0x22, 0x6d, 0x45,
    0x36, 0x6f, 0x6d, 0x06, 0x20, 0xfd, 0xb0, 0x8c, 0x90, 0x0d, 0x28, 0x1a,
    0xf6, 0x11, 0x02, 0x84, 0xb2, 0x00, 0x85, 0xb4, 0x14, 0x86, 0x1d, 0x90,
    0x5d, 0x88, 0xf2, 0xe5, 0x27, 0x39, 0xee, 0x8c, 0xbb, 0x80, 0x22, 0x14,
    0x32, 0x59, 0xd3, 0xdd, 0x84, 0x69, 0x17, 0x30, 0xaa, 0x2d, 0x52, 0xda,
    0x44, 0x1a, 0x8d, 0xe0, 0xc6, 0x95, 0x80, 0x68, 0x87, 0x00, 0x22, 0xa4,
    0x1e, 0x96, 0x29, 0xad, 0x34, 0x73, 0xfd, 0x3b, 0x8f, 0xdb, 0xe3, 0x19,
    0xda, 0xdb, 0x9b, 0x49, 0x24, 0xda, 0x99, 0x4d, 0x2d, 0x71, 0x6c, 0x78,
    0x96, 0xfb, 0xe3, 0x51, 0x52, 0xf7, 0x8b, 0x48, 0x24, 0x5d, 0x6b, 0x2d,
    0xa4, 0x50, 0x7f, 0xaf, 0x58, 0x2b, 0xe8, 0xea, 0xf1, 0x59, 0xb7, 0x21,
    0xcc, 0x83, 0x7b, 0x05, 0xae, 0x7d, 0xeb, 0xb1, 0xf7, 0x9d, 0x08, 0xcb,
    0x8b, 0x51, 0x5e, 0xda, 0xd9, 0x42, 0xa2, 0x2b, 0xc4, 0xb1, 0xc3, 0x3e,
    0xb3, 0xd3, 0x4b, 0x1c, 0x79, 0x7f, 0x06, 0xaf, 0x90, 0xa7, 0x2d, 0x16,
    0xe2, 0xf9, 0x6d, 0x9a, 0x74, 0xaa, 0x11, 0xdc, 0xa8, 0x58, 0x6b, 0x22,
    0x2d, 0x01, 0xaf, 0x0f, 0xb6, 0x00, 0x70, 0xf6, 0xc4, 0x02, 0xd7, 0x2f,
    0x15, 0xd9, 0x7f, 0x28, 0xc6, 0xf6, 0xd7, 0x02, 0x7a, 0x5f, 0x5c, 0xe6,
    0xc3, 0x23, 0x3d, 0xc4, 0xe2, 0xed, 0xe4, 0x96, 0xb2, 0x78, 0xbe, 0x4f,
    0xff, 0x60, 0x8c, 0xee, 0x8d, 0x3e, 0x1a, 0xdd, 0x80, 0x6a, 0xec, 0xa5,
    0x10, 0x94, 0xcb, 0xb0, 0x63, 0x97, 0xc1, 0xec, 0xc3, 0x28, 0xe7, 0x46,
    0x53, 0x7c, 0x7e, 0x3c, 0xcd, 0xb5, 0xcb, 0x11, 0x36, 0xbf, 0x60, 0x63,
    0x58, 0x82, 0xd4, 0xd4, 0x1c, 0x6e, 0xc6, 0x83, 0x6a, 0xb3, 0x7e, 0xfa,
    0x21, 0x4f, 0x72, 0x20, 0x8e, 0xd9, 0xf4, 0xd7, 0xcd, 0xd3, 0x8e, 0xe3,
    0x10, 0x28, 0x05, 0x42, 0xe3, 0x8b, 0x1c, 0x43, 0xfb, 0x6d, 0xe2, 0x6b,
    0x36, 0x72, 0xe1, 0xec, 0x3c, 0xc9, 0x9b, 0xcb, 0x24, 0x6f, 0x66, 0xa9,
    0x38, 0xa3, 0x24, 0x1a, 0xb3, 0xe9, 0x1f, 0x7c, 0x86, 0x1f, 0xbf, 0x77,
    0x71, 0x0b, 0x1e, 0x5e, 0x49, 0x91, 0x5b, 0xae, 0x97, 0x42, 0x03, 0xba,
    0x0e, 0x9e, 0x9c, 0x9c, 0xbc, 0x37, 0x3d, 0x6d, 0x6d, 0x30, 0x5a, 0x04,
    0x0a, 0x89, 0xc2, 0xa7, 0x7f, 0x50, 0xb2, 0x7d, 0x57, 0x82, 0xbb, 0xbf,
    0x7a, 0xcc, 0xcf, 0x28, 0x34, 0x92, 0x35, 0xdd, 0x16, 0xcf, 0x6d, 0xd3,
    0x74, 0xf7, 0x29, 0x5e, 0x1d, 0xe8, 0xa4, 0x5c, 0x02, 0xd3, 0x74, 0x99,
    0x18, 0x2b, 0x01, 0xcc, 0x02, 0x01, 0xa0, 0x85, 0xd6, 0x1a, 0x21, 0x44,
    0xd8, 0xb2, 0xac, 0x8f, 0xb6, 0xed, 0x34, 0x0e, 0x77, 0x24, 0x0c, 0x42,
    0x61, 0x89, 0x0e, 0x04, 0xc2, 0x50, 0x18, 0x52, 0x62, 0x54, 0x6d, 0x53,
    0x4a, 0x03, 0x21, 0x54, 0xb5, 0x9e, 0x0a, 0xd3, 0x94, 0xe4, 0x1c, 0x98,
    0x18, 0x2b, 0xf2, 0x68, 0xce, 0x67, 0x21, 0xed, 0x9f, 0x06, 0x4e, 0x02,
    0x53, 0x35, 0x6f, 0x6d, 0xa2, 0xe2, 0x4c, 0x1f, 0x03, 0x0f, 0x78, 0x3c,
    0x15, 0xfe, 0x6d, 0xa6, 0x80, 0xaf, 0x80, 0x21, 0x60, 0x2b, 0xd0, 0x51,
    0x53, 0x2c, 0xa9, 0xb8, 0x52, 0x14, 0x88, 0x55, 0x9f, 0x61, 0xaa, 0x86,
    0xc2, 0x93, 0x43, 0x57, 0x8f, 0xbf, 0x02, 0x64, 0xa9, 0x4c, 0x90, 0x6c,
    0x7d, 0x34, 0x09, 0x21, 0x4c, 0x20, 0x04, 0x34, 0x57, 0xa1, 0x16, 0xff,
    0x6d, 0xe6, 0x79, 0x55, 0x78, 0x01, 0x28, 0x89, 0xff, 0x6b, 0x98, 0xfe,
    0x01, 0x6e, 0xa0, 0xce, 0x1c, 0x6a, 0x25, 0x73, 0x41, 0x00, 0x00, 0x00,
    0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

    switch (id) {
        case image0_ID:  { QImage img; img.loadFromData(image0_data, sizeof(image0_data), "PNG"); return QPixmap::fromImage(img); }
        default: return QPixmap();
    } // switch
    } // icon

};

namespace Ui {
    class frmmain: public Ui_frmmain {};
} // namespace Ui

QT_END_NAMESPACE

class frmmain : public Q3MainWindow, public Ui::frmmain
{
    Q_OBJECT

public:
    frmmain(QWidget* parent = 0, const char* name = 0, Qt::WindowFlags fl = Qt::WType_TopLevel);
    ~frmmain();

protected slots:
    virtual void languageChange();

};

#endif // FRMMAIN_H
