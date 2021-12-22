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

BLUE_VOID BlueHeapInitImpl (BLUE_VOID)
{
}

BLUE_VOID BlueHeapUnloadImpl (BLUE_VOID)
{
}

BLUE_LPVOID BlueHeapMallocImpl (BLUE_SIZET size)
{
  BLUE_LPVOID mem ;

  mem = malloc (size) ;
  return (mem) ;
}

BLUE_VOID BlueHeapCheckAllocImpl (BLUE_LPCVOID mem)
{
}

BLUE_VOID BlueHeapFreeImpl (BLUE_LPVOID mem)
{
  free (mem) ;
}

BLUE_LPVOID BlueHeapReallocImpl (BLUE_LPVOID ptr, BLUE_SIZET size)
{
  BLUE_LPVOID mem ;

  mem = realloc (ptr, size) ;
  return (mem) ;
}

