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

OFC_VOID ofc_heap_init_impl (OFC_VOID)
{
}

OFC_VOID ofc_heap_unload_impl (OFC_VOID)
{
}

OFC_LPVOID ofc_malloc_impl (OFC_SIZET size)
{
  OFC_LPVOID mem ;

  mem = malloc (size) ;
  return (mem) ;
}

OFC_VOID ofc_heap_check_alloc_impl (OFC_LPCVOID mem)
{
}

OFC_VOID ofc_free_impl (OFC_LPVOID mem)
{
  free (mem) ;
}

OFC_LPVOID ofc_realloc_impl (OFC_LPVOID ptr, OFC_SIZET size)
{
  OFC_LPVOID mem ;

  mem = realloc (ptr, size) ;
  return (mem) ;
}

