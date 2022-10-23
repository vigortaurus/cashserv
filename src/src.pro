# ???? ?????? ? KDevelop ?????????? qmake.
# ------------------------------------------- 
# ?????????? ???????????? ???????? ???????? ???????: ./src
# ???? - ??????????:  ../bin/cashserv

TARGET = ../bin/cashserv 
CONFIG += release \
          warn_on \
          qt \
          thread \
          x11 \
          exceptions \
          stl 
TEMPLATE = app 
#The following line was changed from FORMS to FORMS3 by qt3to4
FORMS3 += mainwindow.ui \
         viewdoct.ui 
HEADERS += mainwindowder.h \
           connection.h \
           settings.h \
           customtable.h \
           myviewdoct.h 
SOURCES += main.cpp \
           mainwindowder.cpp \
           connection.cpp \
           settings.cpp \
           customtable.cpp \
           myviewdoct.cpp 
#The following line was inserted by qt3to4
QT +=  sql qt3support 
#The following line was inserted by qt3to4
CONFIG += uic3


