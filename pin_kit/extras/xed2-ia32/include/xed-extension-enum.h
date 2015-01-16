/*BEGIN_LEGAL 
Intel Open Source License 

Copyright (c) 2002-2013 Intel Corporation. All rights reserved.
 
Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are
met:

Redistributions of source code must retain the above copyright notice,
this list of conditions and the following disclaimer.  Redistributions
in binary form must reproduce the above copyright notice, this list of
conditions and the following disclaimer in the documentation and/or
other materials provided with the distribution.  Neither the name of
the Intel Corporation nor the names of its contributors may be used to
endorse or promote products derived from this software without
specific prior written permission.
 
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE INTEL OR
ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
END_LEGAL */
/// @file xed-extension-enum.h

// This file was automatically generated.
// Do not edit this file.

#if !defined(_XED_EXTENSION_ENUM_H_)
# define _XED_EXTENSION_ENUM_H_
#include "xed-common-hdrs.h"
typedef enum {
  XED_EXTENSION_INVALID,
  XED_EXTENSION_3DNOW,
  XED_EXTENSION_AES,
  XED_EXTENSION_AVX,
  XED_EXTENSION_AVX2,
  XED_EXTENSION_AVX2GATHER,
  XED_EXTENSION_BASE,
  XED_EXTENSION_BDW,
  XED_EXTENSION_BMI1,
  XED_EXTENSION_BMI2,
  XED_EXTENSION_F16C,
  XED_EXTENSION_FMA,
  XED_EXTENSION_FMA4,
  XED_EXTENSION_INVPCID,
  XED_EXTENSION_LONGMODE,
  XED_EXTENSION_LZCNT,
  XED_EXTENSION_MMX,
  XED_EXTENSION_MOVBE,
  XED_EXTENSION_PCLMULQDQ,
  XED_EXTENSION_RDRAND,
  XED_EXTENSION_RDSEED,
  XED_EXTENSION_RDTSCP,
  XED_EXTENSION_RDWRFSGS,
  XED_EXTENSION_RTM,
  XED_EXTENSION_SMAP,
  XED_EXTENSION_SMX,
  XED_EXTENSION_SSE,
  XED_EXTENSION_SSE2,
  XED_EXTENSION_SSE3,
  XED_EXTENSION_SSE4,
  XED_EXTENSION_SSE4A,
  XED_EXTENSION_SSSE3,
  XED_EXTENSION_SVM,
  XED_EXTENSION_TBM,
  XED_EXTENSION_VMFUNC,
  XED_EXTENSION_VTX,
  XED_EXTENSION_X87,
  XED_EXTENSION_XOP,
  XED_EXTENSION_XSAVE,
  XED_EXTENSION_XSAVEOPT,
  XED_EXTENSION_LAST
} xed_extension_enum_t;

/// This converts strings to #xed_extension_enum_t types.
/// @param s A C-string.
/// @return #xed_extension_enum_t
/// @ingroup ENUM
XED_DLL_EXPORT xed_extension_enum_t str2xed_extension_enum_t(const char* s);
/// This converts strings to #xed_extension_enum_t types.
/// @param p An enumeration element of type xed_extension_enum_t.
/// @return string
/// @ingroup ENUM
XED_DLL_EXPORT const char* xed_extension_enum_t2str(const xed_extension_enum_t p);

/// Returns the last element of the enumeration
/// @return xed_extension_enum_t The last element of the enumeration.
/// @ingroup ENUM
XED_DLL_EXPORT xed_extension_enum_t xed_extension_enum_t_last(void);
#endif
