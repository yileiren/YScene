#-------------------------------------------------
#
# Project created by QtCreator 2012-03-20T20:29:28
#
#-------------------------------------------------

QT       += core gui

TARGET = SceneView
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

INCLUDEPATH += $$PWD/../include/OSG

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../YViewer/release/ -lYViewer
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../YViewer/debug/ -lYViewer
else:symbian: LIBS += -lYViewer
else:unix: LIBS += -L$$OUT_PWD/../YViewer/ -lYViewer

INCLUDEPATH += $$PWD/../YViewer
DEPENDPATH += $$PWD/../YViewer


LIBS += $$PWD/../lib/libOpenThreads.dll.a \
        $$PWD/../lib/libosg.dll.a \
        $$PWD/../lib/libosgAnimation.dll.a \
        $$PWD/../lib/libosgDB.dll.a \
        $$PWD/../lib/libosgFX.dll.a \
        $$PWD/../lib/libosgGA.dll.a \
        $$PWD/../lib/libosgManipulator.dll.a \
        $$PWD/../lib/libosgParticle.dll.a \
        $$PWD/../lib/libosgPresentation.dll.a \
        $$PWD/../lib/libosgShadow.dll.a \
        $$PWD/../lib/libosgSim.dll.a \
        $$PWD/../lib/libosgTerrain.dll.a \
        $$PWD/../lib/libosgText.dll.a \
        $$PWD/../lib/libosgUtil.dll.a \
        $$PWD/../lib/libosgViewer.dll.a \
        $$PWD/../lib/libosgVolume.dll.a \
        $$PWD/../lib/libosgWidget.dll.a
