/**************************************************************************//**
 *
 * @file
 * @brief x86_64_accton_as5912_54xk Porting Macros.
 *
 * @addtogroup x86_64_accton_as5912_54xk-porting
 * @{
 *
 *****************************************************************************/
#ifndef __x86_64_accton_as5912_54xk_PORTING_H__
#define __x86_64_accton_as5912_54xk_PORTING_H__


/* <auto.start.portingmacro(ALL).define> */
#if x86_64_accton_as5912_54xk_CONFIG_PORTING_INCLUDE_STDLIB_HEADERS == 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <memory.h>
#endif

#ifndef x86_64_accton_as5912_54xk_MALLOC
    #if defined(GLOBAL_MALLOC)
        #define x86_64_accton_as5912_54xk_MALLOC GLOBAL_MALLOC
    #elif x86_64_accton_as5912_54xk_CONFIG_PORTING_STDLIB == 1
        #define x86_64_accton_as5912_54xk_MALLOC malloc
    #else
        #error The macro x86_64_accton_as5912_54xk_MALLOC is required but cannot be defined.
    #endif
#endif

#ifndef x86_64_accton_as5912_54xk_FREE
    #if defined(GLOBAL_FREE)
        #define x86_64_accton_as5912_54xk_FREE GLOBAL_FREE
    #elif x86_64_accton_as5912_54xk_CONFIG_PORTING_STDLIB == 1
        #define x86_64_accton_as5912_54xk_FREE free
    #else
        #error The macro x86_64_accton_as5912_54xk_FREE is required but cannot be defined.
    #endif
#endif

#ifndef x86_64_accton_as5912_54xk_MEMSET
    #if defined(GLOBAL_MEMSET)
        #define x86_64_accton_as5912_54xk_MEMSET GLOBAL_MEMSET
    #elif x86_64_accton_as5912_54xk_CONFIG_PORTING_STDLIB == 1
        #define x86_64_accton_as5912_54xk_MEMSET memset
    #else
        #error The macro x86_64_accton_as5912_54xk_MEMSET is required but cannot be defined.
    #endif
#endif

#ifndef x86_64_accton_as5912_54xk_MEMCPY
    #if defined(GLOBAL_MEMCPY)
        #define x86_64_accton_as5912_54xk_MEMCPY GLOBAL_MEMCPY
    #elif x86_64_accton_as5912_54xk_CONFIG_PORTING_STDLIB == 1
        #define x86_64_accton_as5912_54xk_MEMCPY memcpy
    #else
        #error The macro x86_64_accton_as5912_54xk_MEMCPY is required but cannot be defined.
    #endif
#endif

#ifndef x86_64_accton_as5912_54xk_STRNCPY
    #if defined(GLOBAL_STRNCPY)
        #define x86_64_accton_as5912_54xk_STRNCPY GLOBAL_STRNCPY
    #elif x86_64_accton_as5912_54xk_CONFIG_PORTING_STDLIB == 1
        #define x86_64_accton_as5912_54xk_STRNCPY strncpy
    #else
        #error The macro x86_64_accton_as5912_54xk_STRNCPY is required but cannot be defined.
    #endif
#endif

#ifndef x86_64_accton_as5912_54xk_VSNPRINTF
    #if defined(GLOBAL_VSNPRINTF)
        #define x86_64_accton_as5912_54xk_VSNPRINTF GLOBAL_VSNPRINTF
    #elif x86_64_accton_as5912_54xk_CONFIG_PORTING_STDLIB == 1
        #define x86_64_accton_as5912_54xk_VSNPRINTF vsnprintf
    #else
        #error The macro x86_64_accton_as5912_54xk_VSNPRINTF is required but cannot be defined.
    #endif
#endif

#ifndef x86_64_accton_as5912_54xk_SNPRINTF
    #if defined(GLOBAL_SNPRINTF)
        #define x86_64_accton_as5912_54xk_SNPRINTF GLOBAL_SNPRINTF
    #elif x86_64_accton_as5912_54xk_CONFIG_PORTING_STDLIB == 1
        #define x86_64_accton_as5912_54xk_SNPRINTF snprintf
    #else
        #error The macro x86_64_accton_as5912_54xk_SNPRINTF is required but cannot be defined.
    #endif
#endif

#ifndef x86_64_accton_as5912_54xk_STRLEN
    #if defined(GLOBAL_STRLEN)
        #define x86_64_accton_as5912_54xk_STRLEN GLOBAL_STRLEN
    #elif x86_64_accton_as5912_54xk_CONFIG_PORTING_STDLIB == 1
        #define x86_64_accton_as5912_54xk_STRLEN strlen
    #else
        #error The macro x86_64_accton_as5912_54xk_STRLEN is required but cannot be defined.
    #endif
#endif

/* <auto.end.portingmacro(ALL).define> */


#endif /* __x86_64_accton_as5912_54xk_PORTING_H__ */
/* @} */
