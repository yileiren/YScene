#-------------------------------------------------
#
# Project created by QtCreator 2012-03-22T21:20:48
#
#-------------------------------------------------

QT       += opengl

TARGET = YViewer
TEMPLATE = lib

DEFINES += YVIEWER_LIBRARY

INCLUDEPATH += $$PWD/../include/OSG

SOURCES += \
    YViewer.cpp \
    YOSGAdapterWidget.cpp \
    YOSGViewerQT.cpp

HEADERS +=\
        YViewer_global.h \
    YViewer.h \
    YOSGViewerQT.h \
    YOSGAdapterWidget.h

symbian {
    MMP_RULES += EXPORTUNFROZEN
    TARGET.UID3 = 0xE524EBFF
    TARGET.CAPABILITY = 
    TARGET.EPOCALLOWDLLDATA = 1
    addFiles.sources = YViewer.dll
    addFiles.path = !:/sys/bin
    DEPLOYMENT += addFiles
}

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}

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

FORMS += \
    YViewer.ui
