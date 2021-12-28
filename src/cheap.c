/* Copyright (c) 2021 Connected Way, LLC. All rights reserved.
 * Use of this source code is governed by a Creative Commons 
 * Attribution-NoDerivatives 4.0 International license that can be
 * found in the LICENSE file.
 */
#include <stdlib.h>

#include "ofc/config.h"
#include "ofc/types.h"
#include "ofc/libc.h"

#include "ofc/impl/heapimpl.h"

OFC_VOID BlueHeapInitImpl (OFC_VOID)
{
}

OFC_VOID BlueHeapUnloadImpl (OFC_VOID)
{
}

OFC_LPVOID BlueHeapMallocImpl (OFC_SIZET size)
{
  OFC_LPVOID mem ;

  mem = malloc (size) ;
  return (mem) ;
}

OFC_VOID BlueHeapCheckAllocImpl (OFC_LPCVOID mem)
{
}

OFC_VOID BlueHeapFreeImpl (OFC_LPVOID mem)
{
  free (mem) ;
}

OFC_LPVOID BlueHeapReallocImpl (OFC_LPVOID ptr, OFC_SIZET size)
{
  OFC_LPVOID mem ;

  mem = realloc (ptr, size) ;
  return (mem) ;
}

