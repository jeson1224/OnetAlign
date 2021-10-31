#-------------------------------------------------
#
# Project created by QtCreator 2017-09-21T14:04:12
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SARibbonMainWindowExample
TEMPLATE = app

SOURCES += main.cpp\
    centralform.cpp \
    mainwindow.cpp  \
    resultform.cpp

HEADERS  += \
    centralform.h \
    mainwindow.h  \
    resultform.h

RESOURCES += \
    pictrue.qrc \
    saribbonresouce.qrc \

include($$PWD/../../../common.pri)
DESTDIR = $${SARIBBON_BIN_DIR}
include($${SARIBBONBAR_PRI_FILE_PATH})

msvc {
    QMAKE_CFLAGS += /utf-8
    QMAKE_CXXFLAGS += /utf-8
}

FORMS += \
    centralform.ui \
    resultform.ui


win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../../../Service/release/ -lService
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../../../Service/debug/ -lService
else:unix: LIBS += -L$$OUT_PWD/../../../Service/ -lService

INCLUDEPATH += $$PWD/../../../Service
DEPENDPATH += $$PWD/../../../Service
