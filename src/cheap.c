/* Copyright (c) 2009 Blue Peach Solutions, Inc.
 * All rights reserved.
 *
 * This software is protected by copyright and intellectual
 * property laws as well as international treaties.  It is to be
 * used and copied only by authorized licensees under the
 * conditions described in their licenses.
 *
 * Title to and ownership of the software shall at all times
 * remain with Blue Peach Solutions.
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

