#ifndef OSGVIEWERQT_H
#define OSGVIEWERQT_H

#include <osgViewer/Viewer>

#include "YViewer_global.h"
#include "YOSGAdapterWidget.h"

/*!
 * \brief
 * 改造的OSG视景器。
 * 创建时间：2012-3-22 21:58:06 作者：董帅
 * **************使用说明*************
 * osg::ref_ptr<osg::Node> loadedModel = osgDB::readNodeFile("osgcool.osg");
 * OSGViewerQT * viewerWindow = new OSGViewerQT;
 * viewerWindow->setCameraManipulator(new osgGA::TrackballManipulator);
 * viewerWindow->setSceneData(loadedModel.get());
 * viewerWindow->show();
 * **********************************
 */
class YVIEWERSHARED_EXPORT YOSGViewerQT : public osgViewer::Viewer, public YOSGAdapterWidget
{
public:
    YOSGViewerQT(QWidget * parent = 0, const char * name = 0, const QGLWidget * shareWidget = 0, WindowFlags f = 0);
    virtual void paintGL();
protected:
    QTimer _timer;
};

#endif // OSGVIEWERQT_H
