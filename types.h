/**
 * clibrary: c language library
 * type definitions
 * 
 * copyright 2011 yangxingya <xingyayang@163.com>
 *
 */

#ifndef __TYPES_H__
#define __TYPES_H__

#ifdef _WIN32
#include <WinDef.h>
#endif

/* Base Types */

typedef unsigned char uint8, uchar, byte;
typedef signed char int8;
typedef unsigned short int16, ushort;
typedef signed short int16;
typedef unsigned int uint32;
typedef signed int int32;
#ifdef _WIN32
typedef unsigned __int64 uint64;
typedef signed __int64 int64;
#else
typedef unsigned long long uint64;
typedef signed long long int64;
#endif

#ifndef True
#define True  (1)
#endif

#ifndef False
#define False (0)
#endif

#ifndef _WIN32
typedef int boolean;
#else
#define boolean BOOLEAN
#endif

#ifndef MIN
#define MIN(x,y)	(((x) < (y)) ? (x) : (y))
#endif

#ifndef MAX
#define MAX(x,y)	(((x) > (y)) ? (x) : (y))
#endif

#endif
