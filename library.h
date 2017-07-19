#ifndef XYMODULEEXAMPLE_LIBRARY_H
#define XYMODULEEXAMPLE_LIBRARY_H



#include "sqmodule.h"

#ifdef __cplusplus
extern "C" {
#endif

#if defined(_MSC_VER)
__declspec(dllexport) SQRESULT sqmodule_load(HSQUIRRELVM v, HSQAPI api);
#else
__attribute__((visibility("default"))) SQRESULT sqmodule_load(HSQUIRRELVM v, HSQAPI api);
#endif

#ifdef __cplusplus
}
#endif

#endif