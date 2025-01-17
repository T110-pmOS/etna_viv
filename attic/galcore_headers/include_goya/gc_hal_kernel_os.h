/****************************************************************************
*
*    Copyright (c) 2005 - 2012 by Vivante Corp.
*    
*    This program is free software; you can redistribute it and/or modify
*    it under the terms of the GNU General Public License as published by
*    the Free Software Foundation; either version 2 of the license, or
*    (at your option) any later version.
*    
*    This program is distributed in the hope that it will be useful,
*    but WITHOUT ANY WARRANTY; without even the implied warranty of
*    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
*    GNU General Public License for more details.
*    
*    You should have received a copy of the GNU General Public License
*    along with this program; if not write to the Free Software
*    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*
*
*****************************************************************************/




#ifndef __gc_hal_kernel_os_h_
#define __gc_hal_kernel_os_h_

typedef struct _LINUX_MDL_MAP
{
    gctINT                  pid;
    gctPOINTER              vmaAddr;
    struct vm_area_struct * vma;
    struct _LINUX_MDL_MAP * next;
}
LINUX_MDL_MAP;

typedef struct _LINUX_MDL_MAP * PLINUX_MDL_MAP;

typedef struct _LINUX_MDL
{
    gctINT                  pid;
    char *                  addr;

    union _pages
    {
        /* Pointer to a array of pages. */
        struct page *       contiguousPages;
        /* Pointer to a array of pointers to page. */
        struct page **      nonContiguousPages;
    }
    u;

#ifdef NO_DMA_COHERENT
    gctPOINTER              kaddr;
#endif /* NO_DMA_COHERENT */

#if (MRVL_VIDEO_MEMORY_USE_TYPE != gcdMEM_TYPE_NONE)
    struct pmem_region *    region;
    gctBOOL                 bPmem;

#   if (MRVL_VIDEO_MEMORY_USE_TYPE == gcdMEM_TYPE_ION)
    struct ion_handle       *ionHandle;
#   endif /* USE_ION */
#endif

    gctINT                  numPages;
    gctINT                  pagedMem;
    gctBOOL                 contiguous;
    dma_addr_t              dmaHandle;
    PLINUX_MDL_MAP          maps;
    struct _LINUX_MDL *     prev;
    struct _LINUX_MDL *     next;
    gctUINT32               gcAddress;
    gctSIZE_T               wastSize;
}
LINUX_MDL, *PLINUX_MDL;


typedef struct _DRIVER_ARGS
{
    gctPOINTER              InputBuffer;
    gctUINT32               InputBufferSize;
    gctPOINTER              OutputBuffer;
    gctUINT32               OutputBufferSize;
}
DRIVER_ARGS;

gceSTATUS
gckOS_FindMdlMap(
    IN gckOS Os,
    IN PLINUX_MDL Mdl,
    IN gctINT ProcessID,
    OUT PLINUX_MDL_MAP *MdlMap
    );

/* Cleanup the signal table. */
gceSTATUS
gckOS_CleanProcessSignal(
    gckOS Os,
    gctHANDLE Process
    );

#endif /* __gc_hal_kernel_os_h_ */
