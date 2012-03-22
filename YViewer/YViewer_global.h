#ifndef YVIEWER_GLOBAL_H
#define YVIEWER_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(YVIEWER_LIBRARY)
#  define YVIEWERSHARED_EXPORT Q_DECL_EXPORT
#else
#  define YVIEWERSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // YVIEWER_GLOBAL_H
