#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "YOSGViewerQT.h"

#include "osg/Node"
#include "osgDB/ReadFile"
#include "osgGA/TrackballManipulator"
#include <osgManipulator/CommandManager>
#include <osgFX/Scribe>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    osg::ref_ptr<osg::Node> loadedModel = osgDB::readNodeFile("Data/osgcool.osgt");
    YOSGViewerQT * viewerWindow = new YOSGViewerQT;
    viewerWindow->setCameraManipulator(new osgGA::TrackballManipulator);
    viewerWindow->setSceneData(loadedModel.get());
    viewerWindow->show();
}
