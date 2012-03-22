#ifndef YVIEWER_H
#define YVIEWER_H

#include <QWidget>

#include "YOSGViewerQT.h"

/*!
 * \brief
 * OSG视景器封装，将OSG视景器嵌入QT窗口。
 * 创建时间：2012-3-22 21:43:55 作者：董帅
 */
class YVIEWERSHARED_EXPORT YViewer : public YOSGViewerQT
{

public:
    /*!
     * \brief
     * 默认构造函数。
     * 创建时间：2012-3-22 21:44:41 作者：董帅
     */
    explicit YViewer(QWidget *parent = 0);
    ~YViewer();

private:
};

#endif // YVIEWER_H
