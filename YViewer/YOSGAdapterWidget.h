#ifndef OSGADAPTERWIDGET_H
#define OSGADAPTERWIDGET_H

#include <QtOpenGL/QGLWidget>
#include <QtCore/QTimer>
#include <QtGui/QKeyEvent>
#include <osgViewer/Viewer>

using Qt::WindowFlags;

/*!
 * \brief
 * 基于QGLWidget改造的窗口类。
 * 创建时间：2012-3-22 21:47:59 作者：董帅
 */
class YOSGAdapterWidget : public QGLWidget
{
public:
    YOSGAdapterWidget(QWidget * parent = 0, const char * name = 0, const QGLWidget * shareWidget = 0, WindowFlags f = 0);
    osgViewer::GraphicsWindow* getGraphicsWindow() { return _gw.get(); }
    const osgViewer::GraphicsWindow* getGraphicsWindow() const { return _gw.get(); }
protected:
    void init();
    virtual void resizeGL( int width, int height );
    virtual void keyPressEvent( QKeyEvent* event );
    virtual void keyReleaseEvent( QKeyEvent* event );
    virtual void mousePressEvent( QMouseEvent* event );
    virtual void mouseReleaseEvent( QMouseEvent* event );
    virtual void mouseMoveEvent( QMouseEvent* event );
    virtual void mouseDoubleClickEvent(QMouseEvent * event);

    osg::ref_ptr<osgViewer::GraphicsWindowEmbedded> _gw;
};

#endif // OSGADAPTERWIDGET_H
