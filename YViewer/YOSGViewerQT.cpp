#include "YOSGViewerQT.h"

YOSGViewerQT::YOSGViewerQT(QWidget * parent, const char * name, const QGLWidget * shareWidget, WindowFlags f):
        YOSGAdapterWidget( parent, name, shareWidget, f )
{
    getCamera()->setViewport(new osg::Viewport(0,0,width(),height()));
    getCamera()->setProjectionMatrixAsPerspective(30.0f, static_cast<double>(width())/static_cast<double>(height()), 1.0f, 10000.0f);
    getCamera()->setGraphicsContext(getGraphicsWindow());

    setThreadingModel(osgViewer::Viewer::SingleThreaded);

    connect(&_timer, SIGNAL(timeout()), this, SLOT(updateGL()));
    _timer.start(50);
}

void YOSGViewerQT::paintGL()
{
    frame();
}

