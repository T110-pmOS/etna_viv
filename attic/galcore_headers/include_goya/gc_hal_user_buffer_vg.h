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




#ifndef __gc_hal_user_buffer_h_
#define __gc_hal_user_buffer_h_


#ifdef __cplusplus
extern "C" {
#endif

/******************************************************************************\
************************ Command Buffer and Event Objects **********************
\******************************************************************************/

/* The number of context buffers per user. */
#define gcdCONTEXT_BUFFER_COUNT 2

/* State delta record. */
typedef struct _gcsSTATE_DELTA_RECORD * gcsSTATE_DELTA_RECORD_PTR;
typedef struct _gcsSTATE_DELTA_RECORD
{
    /* State address. */
    gctUINT                     address;

    /* State mask. */
    gctUINT32                   mask;

    /* State data. */
    gctUINT32                   data;
}
gcsSTATE_DELTA_RECORD;

/* State delta. */
typedef struct _gcsSTATE_DELTA
{
    /* For debugging: the number of delta in the order of creation. */
#if gcdDEBUG
    gctUINT                     num;
#endif

    /* For dumping. */
#if gcdDUMP
    gcoOS                       os;
#endif

    /* Main state delta ID. Every time state delta structure gets reinitialized,
       main ID is incremented. If main state ID overflows, all map entry IDs get
       reinitialized to make sure there is no potential erroneous match after
       the overflow.*/
    gctUINT                     id;

    /* The number of contexts pending modification by the delta. */
    gctINT                      refCount;

    /* Vertex element count for the delta buffer. */
    gctUINT                     elementCount;

    /* Number of states currently stored in the record array. */
    gctUINT                     recordCount;

    /* Record array; holds all modified states. */
    gcsSTATE_DELTA_RECORD_PTR   recordArray;

    /* Map entry ID is used for map entry validation. If map entry ID does not
       match the main state delta ID, the entry and the corresponding state are
       considered not in use. */
    gctUINT_PTR                 mapEntryID;
    gctUINT                     mapEntryIDSize;

    /* If the map entry ID matches the main state delta ID, index points to
       the state record in the record array. */
    gctUINT_PTR                 mapEntryIndex;

    /* Previous and next state deltas. */
    gcsSTATE_DELTA_PTR          prev;
    gcsSTATE_DELTA_PTR          next;
}
gcsSTATE_DELTA;

/* Command buffer object. */
struct _gcoCMDBUF
{
    /* The object. */
    gcsOBJECT                   object;

    /* Command buffer entry and exit pipes. */
    gcePIPE_SELECT              entryPipe;
    gcePIPE_SELECT              exitPipe;

    /* Feature usage flags. */
    gctBOOL                     using2D;
    gctBOOL                     using3D;
    gctBOOL                     usingFilterBlit;
    gctBOOL                     usingPalette;

    /* Physical address of command buffer. */
    gctPHYS_ADDR                physical;

    /* Logical address of command buffer. */
    gctPOINTER                  logical;

    /* Number of bytes in command buffer. */
    gctSIZE_T                   bytes;

    /* Start offset into the command buffer. */
    gctUINT32                   startOffset;

    /* Current offset into the command buffer. */
    gctUINT32                   offset;

    /* Number of free bytes in command buffer. */
    gctSIZE_T                   free;

    /* Location of the last reserved area. */
    gctPOINTER                  lastReserve;
    gctUINT                     lastOffset;

#if gcdSECURE_USER
    /* Hint array for the current command buffer. */
    gctUINT                     hintArraySize;
    gctUINT32_PTR               hintArray;
    gctUINT32_PTR               hintArrayTail;
#endif

#if gcdDEBUG
    /* Last load state command location and hardware address. */
    gctUINT32_PTR               lastLoadStatePtr;
    gctUINT32                   lastLoadStateAddress;
    gctUINT32                   lastLoadStateCount;
#endif
};

typedef struct _gcsQUEUE
{
    /* Pointer to next gcsQUEUE structure. */
    gcsQUEUE_PTR                next;

    /* Event information. */
    gcsHAL_INTERFACE            iface;
}
gcsQUEUE;

/* Event queue. */
struct _gcoQUEUE
{
    /* The object. */
    gcsOBJECT                   object;

    /* Pointer to current event queue. */
    gcsQUEUE_PTR                head;
    gcsQUEUE_PTR                tail;

#ifdef __QNXNTO__
    /* Buffer for records. */
    gcsQUEUE_PTR                records;
    gctUINT32                   freeBytes;
    gctUINT32                   offset;
#else
    /* List of free records. */
    gcsQUEUE_PTR                freeList;
#endif
};

#ifdef __cplusplus
}
#endif

#endif /* __gc_hal_user_buffer_h_ */
