/*
 *  ./melodycloud/melody/Basis/include/Ballroom/Basis.h
 *
 *   GPL LICENSE
 */

/*
 * Function:
 *
 *
 *
 * Description:
 *	Library: Basis
 *	Package: Core
 *	Module:  Basis
 *
 * Version:
 *	1.0.0
 *
 * Revision History:
 *
 *	2011-10-01	Josee
 *	Initial creation
 *
 */
// Basic definitions for the MELODY Basis library.
// This file must be the first file included by every other Basis
// header file.
//


#ifndef Basis_Basis_INCLUDED
#define Basis_Basis_INCLUDED


//
// Include library configuration
//
#include "Ballroom/Config.h"


//
// Ensure that MELODY_DLL is default unless MELODY_STATIC is defined
//
#if defined(_WIN32) && defined(_DLL)
#if !defined(MELODY_DLL) && !defined(MELODY_STATIC)
#define MELODY_DLL
#endif
#endif


//
// The following block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the Basis_EXPORTS
// symbol defined on the command line. this symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// Basis_API functions as being imported from a DLL, wheras this DLL sees symbols
// defined with this macro as being exported.
//
#if (defined(_WIN32) || defined(_WIN32_WCE)) && defined(MELODY_DLL)
#if defined(Basis_EXPORTS)
#define Basis_API __declspec(dllexport)
#else
#define Basis_API __declspec(dllimport)
#endif
#endif


#if !defined(Basis_API)
#define Basis_API
#endif


//
// Automatically link Basis library.
//
#if defined(_MSC_VER)
#if defined(MELODY_DLL)
#if defined(_DEBUG)
#define MELODY_LIB_SUFFIX "d.lib"
#else
#define MELODY_LIB_SUFFIX ".lib"
#endif
#elif defined(_DLL)
#if defined(_DEBUG)
#define MELODY_LIB_SUFFIX "mdd.lib"
#else
#define MELODY_LIB_SUFFIX "md.lib"
#endif
#else
#if defined(_DEBUG)
#define MELODY_LIB_SUFFIX "mtd.lib"
#else
#define MELODY_LIB_SUFFIX "mt.lib"
#endif
#endif

#if !defined(MELODY_NO_AUTOMATIC_LIBS) && !defined(Basis_EXPORTS)
#pragma comment(lib, "MelodyBasis" MELODY_LIB_SUFFIX)
#endif
#endif


//
// Include platform-specific definitions
//
#include "Melody/Platform.h"
#if defined(_WIN32)
#include "Melody/Platform_WIN32.h"
#elif defined(__VMS)
#include "Melody/Platform_VMS.h"
#elif defined(MELODY_VXWORKS)
#include "Melody/Platform_VX.h"
#elif defined(MELODY_OS_FAMILY_UNIX)
#include "Melody/Platform_POSIX.h"
#endif


//
// MELODY_JOIN
//
// The following piece of macro magic joins the two
// arguments together, even when one of the arguments is
// itself a macro (see 16.3.1 in C++ standard).  The key
// is that macro expansion of macro arguments does not
// occur in MELODY_DO_JOIN2 but does in MELODY_DO_JOIN.
//
#define MELODY_JOIN(X, Y) MELODY_DO_JOIN(X, Y)
#define MELODY_DO_JOIN(X, Y) MELODY_DO_JOIN2(X, Y)
#define MELODY_DO_JOIN2(X, Y) X##Y


//
// Pull in basic definitions
//
#include "Melody/Bugcheck.h"
#include "Melody/Types.h"
#include <string>


#endif // Basis_Basis_INCLUDED
