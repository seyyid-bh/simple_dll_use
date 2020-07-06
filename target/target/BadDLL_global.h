#ifndef BADDLL_GLOBAL_H
#define BADDLL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(BADDLL_LIBRARY)
#  define BADDLL_EXPORT Q_DECL_EXPORT
#else
#  define BADDLL_EXPORT Q_DECL_IMPORT
#endif

#endif // BADDLL_GLOBAL_H
