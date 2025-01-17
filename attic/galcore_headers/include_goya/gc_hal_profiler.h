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


#ifndef __gc_hal_profiler_h_
#define __gc_hal_profiler_h_

#ifdef __cplusplus
extern "C" {
#endif

#define GLVERTEX_OBJECT 10
#define GLVERTEX_OBJECT_BYTES 11

#define GLINDEX_OBJECT 20
#define GLINDEX_OBJECT_BYTES 21

#define GLTEXTURE_OBJECT 30
#define GLTEXTURE_OBJECT_BYTES 31

#if VIVANTE_PROFILER
#define gcmPROFILE_GC(Enum, Value)  gcoPROFILER_Count(gcvNULL, Enum, Value)
#else
#define gcmPROFILE_GC(Enum, Value)  do { } while (gcvFALSE)
#endif

#ifndef gcdNEW_PROFILER_FILE
#define gcdNEW_PROFILER_FILE    0
#endif

/* OpenGL ES11 API IDs. */
#define ES11_ACTIVETEXTURE              1
#define ES11_ALPHAFUNC                  (ES11_ACTIVETEXTURE             + 1)
#define ES11_ALPHAFUNCX                 (ES11_ALPHAFUNC                 + 1)
#define ES11_BINDBUFFER                 (ES11_ALPHAFUNCX                + 1)
#define ES11_BINDTEXTURE                (ES11_BINDBUFFER                + 1)
#define ES11_BLENDFUNC                  (ES11_BINDTEXTURE               + 1)
#define ES11_BUFFERDATA                 (ES11_BLENDFUNC                 + 1)
#define ES11_BUFFERSUBDATA              (ES11_BUFFERDATA                + 1)
#define ES11_CLEAR                      (ES11_BUFFERSUBDATA             + 1)
#define ES11_CLEARCOLOR                 (ES11_CLEAR                     + 1)
#define ES11_CLEARCOLORX                (ES11_CLEARCOLOR                + 1)
#define ES11_CLEARDEPTHF                (ES11_CLEARCOLORX               + 1)
#define ES11_CLEARDEPTHX                (ES11_CLEARDEPTHF               + 1)
#define ES11_CLEARSTENCIL               (ES11_CLEARDEPTHX               + 1)
#define ES11_CLIENTACTIVETEXTURE        (ES11_CLEARSTENCIL              + 1)
#define ES11_CLIPPLANEF                 (ES11_CLIENTACTIVETEXTURE       + 1)
#define ES11_CLIPPLANEX                 (ES11_CLIPPLANEF                + 1)
#define ES11_COLOR4F                    (ES11_CLIPPLANEX                + 1)
#define ES11_COLOR4UB                   (ES11_COLOR4F                   + 1)
#define ES11_COLOR4X                    (ES11_COLOR4UB                  + 1)
#define ES11_COLORMASK                  (ES11_COLOR4X                   + 1)
#define ES11_COLORPOINTER               (ES11_COLORMASK                 + 1)
#define ES11_COMPRESSEDTEXIMAGE2D       (ES11_COLORPOINTER              + 1)
#define ES11_COMPRESSEDTEXSUBIMAGE2D    (ES11_COMPRESSEDTEXIMAGE2D      + 1)
#define ES11_COPYTEXIMAGE2D             (ES11_COMPRESSEDTEXSUBIMAGE2D   + 1)
#define ES11_COPYTEXSUBIMAGE2D          (ES11_COPYTEXIMAGE2D            + 1)
#define ES11_CULLFACE                   (ES11_COPYTEXSUBIMAGE2D         + 1)
#define ES11_DELETEBUFFERS              (ES11_CULLFACE                  + 1)
#define ES11_DELETETEXTURES             (ES11_DELETEBUFFERS             + 1)
#define ES11_DEPTHFUNC                  (ES11_DELETETEXTURES            + 1)
#define ES11_DEPTHMASK                  (ES11_DEPTHFUNC                 + 1)
#define ES11_DEPTHRANGEF                (ES11_DEPTHMASK                 + 1)
#define ES11_DEPTHRANGEX                (ES11_DEPTHRANGEF               + 1)
#define ES11_DISABLE                    (ES11_DEPTHRANGEX               + 1)
#define ES11_DISABLECLIENTSTATE         (ES11_DISABLE                   + 1)
#define ES11_DRAWARRAYS                 (ES11_DISABLECLIENTSTATE        + 1)
#define ES11_DRAWELEMENTS               (ES11_DRAWARRAYS                + 1)
#define ES11_ENABLE                     (ES11_DRAWELEMENTS              + 1)
#define ES11_ENABLECLIENTSTATE          (ES11_ENABLE                    + 1)
#define ES11_FINISH                     (ES11_ENABLECLIENTSTATE         + 1)
#define ES11_FLUSH                      (ES11_FINISH                    + 1)
#define ES11_FOGF                       (ES11_FLUSH                     + 1)
#define ES11_FOGFV                      (ES11_FOGF                      + 1)
#define ES11_FOGX                       (ES11_FOGFV                     + 1)
#define ES11_FOGXV                      (ES11_FOGX                      + 1)
#define ES11_FRONTFACE                  (ES11_FOGXV                     + 1)
#define ES11_FRUSTUMF                   (ES11_FRONTFACE                 + 1)
#define ES11_FRUSTUMX                   (ES11_FRUSTUMF                  + 1)
#define ES11_GENBUFFERS                 (ES11_FRUSTUMX                  + 1)
#define ES11_GENTEXTURES                (ES11_GENBUFFERS                + 1)
#define ES11_GETBOOLEANV                (ES11_GENTEXTURES               + 1)
#define ES11_GETBUFFERPARAMETERIV       (ES11_GETBOOLEANV               + 1)
#define ES11_GETCLIPPLANEF              (ES11_GETBUFFERPARAMETERIV      + 1)
#define ES11_GETCLIPPLANEX              (ES11_GETCLIPPLANEF             + 1)
#define ES11_GETERROR                   (ES11_GETCLIPPLANEX             + 1)
#define ES11_GETFIXEDV                  (ES11_GETERROR                  + 1)
#define ES11_GETFLOATV                  (ES11_GETFIXEDV                 + 1)
#define ES11_GETINTEGERV                (ES11_GETFLOATV                 + 1)
#define ES11_GETLIGHTFV                 (ES11_GETINTEGERV               + 1)
#define ES11_GETLIGHTXV                 (ES11_GETLIGHTFV                + 1)
#define ES11_GETMATERIALFV              (ES11_GETLIGHTXV                + 1)
#define ES11_GETMATERIALXV              (ES11_GETMATERIALFV             + 1)
#define ES11_GETPOINTERV                (ES11_GETMATERIALXV             + 1)
#define ES11_GETSTRING                  (ES11_GETPOINTERV               + 1)
#define ES11_GETTEXENVFV                (ES11_GETSTRING                 + 1)
#define ES11_GETTEXENVIV                (ES11_GETTEXENVFV               + 1)
#define ES11_GETTEXENVXV                (ES11_GETTEXENVIV               + 1)
#define ES11_GETTEXPARAMETERFV          (ES11_GETTEXENVXV               + 1)
#define ES11_GETTEXPARAMETERIV          (ES11_GETTEXPARAMETERFV         + 1)
#define ES11_GETTEXPARAMETERXV          (ES11_GETTEXPARAMETERIV         + 1)
#define ES11_HINT                       (ES11_GETTEXPARAMETERXV         + 1)
#define ES11_ISBUFFER                   (ES11_HINT                      + 1)
#define ES11_ISENABLED                  (ES11_ISBUFFER                  + 1)
#define ES11_ISTEXTURE                  (ES11_ISENABLED                 + 1)
#define ES11_LIGHTF                     (ES11_ISTEXTURE                 + 1)
#define ES11_LIGHTFV                    (ES11_LIGHTF                    + 1)
#define ES11_LIGHTMODELF                (ES11_LIGHTFV                   + 1)
#define ES11_LIGHTMODELFV               (ES11_LIGHTMODELF               + 1)
#define ES11_LIGHTMODELX                (ES11_LIGHTMODELFV              + 1)
#define ES11_LIGHTMODELXV               (ES11_LIGHTMODELX               + 1)
#define ES11_LIGHTX                     (ES11_LIGHTMODELXV              + 1)
#define ES11_LIGHTXV                    (ES11_LIGHTX                    + 1)
#define ES11_LINEWIDTH                  (ES11_LIGHTXV                   + 1)
#define ES11_LINEWIDTHX                 (ES11_LINEWIDTH                 + 1)
#define ES11_LOADIDENTITY               (ES11_LINEWIDTHX                + 1)
#define ES11_LOADMATRIXF                (ES11_LOADIDENTITY              + 1)
#define ES11_LOADMATRIXX                (ES11_LOADMATRIXF               + 1)
#define ES11_LOGICOP                    (ES11_LOADMATRIXX               + 1)
#define ES11_MATERIALF                  (ES11_LOGICOP                   + 1)
#define ES11_MATERIALFV                 (ES11_MATERIALF                 + 1)
#define ES11_MATERIALX                  (ES11_MATERIALFV                + 1)
#define ES11_MATERIALXV                 (ES11_MATERIALX                 + 1)
#define ES11_MATRIXMODE                 (ES11_MATERIALXV                + 1)
#define ES11_MULTITEXCOORD4F            (ES11_MATRIXMODE                + 1)
#define ES11_MULTITEXCOORD4X            (ES11_MULTITEXCOORD4F           + 1)
#define ES11_MULTMATRIXF                (ES11_MULTITEXCOORD4X           + 1)
#define ES11_MULTMATRIXX                (ES11_MULTMATRIXF               + 1)
#define ES11_NORMAL3F                   (ES11_MULTMATRIXX               + 1)
#define ES11_NORMAL3X                   (ES11_NORMAL3F                  + 1)
#define ES11_NORMALPOINTER              (ES11_NORMAL3X                  + 1)
#define ES11_ORTHOF                     (ES11_NORMALPOINTER             + 1)
#define ES11_ORTHOX                     (ES11_ORTHOF                    + 1)
#define ES11_PIXELSTOREI                (ES11_ORTHOX                    + 1)
#define ES11_POINTPARAMETERF            (ES11_PIXELSTOREI               + 1)
#define ES11_POINTPARAMETERFV           (ES11_POINTPARAMETERF           + 1)
#define ES11_POINTPARAMETERX            (ES11_POINTPARAMETERFV          + 1)
#define ES11_POINTPARAMETERXV           (ES11_POINTPARAMETERX           + 1)
#define ES11_POINTSIZE                  (ES11_POINTPARAMETERXV          + 1)
#define ES11_POINTSIZEX                 (ES11_POINTSIZE                 + 1)
#define ES11_POLYGONOFFSET              (ES11_POINTSIZEX                + 1)
#define ES11_POLYGONOFFSETX             (ES11_POLYGONOFFSET             + 1)
#define ES11_POPMATRIX                  (ES11_POLYGONOFFSETX            + 1)
#define ES11_PUSHMATRIX                 (ES11_POPMATRIX                 + 1)
#define ES11_READPIXELS                 (ES11_PUSHMATRIX                + 1)
#define ES11_ROTATEF                    (ES11_READPIXELS                + 1)
#define ES11_ROTATEX                    (ES11_ROTATEF                   + 1)
#define ES11_SAMPLECOVERAGE             (ES11_ROTATEX                   + 1)
#define ES11_SAMPLECOVERAGEX            (ES11_SAMPLECOVERAGE            + 1)
#define ES11_SCALEF                     (ES11_SAMPLECOVERAGEX           + 1)
#define ES11_SCALEX                     (ES11_SCALEF                    + 1)
#define ES11_SCISSOR                    (ES11_SCALEX                    + 1)
#define ES11_SHADEMODEL                 (ES11_SCISSOR                   + 1)
#define ES11_STENCILFUNC                (ES11_SHADEMODEL                + 1)
#define ES11_STENCILMASK                (ES11_STENCILFUNC               + 1)
#define ES11_STENCILOP                  (ES11_STENCILMASK               + 1)
#define ES11_TEXCOORDPOINTER            (ES11_STENCILOP                 + 1)
#define ES11_TEXENVF                    (ES11_TEXCOORDPOINTER           + 1)
#define ES11_TEXENVFV                   (ES11_TEXENVF                   + 1)
#define ES11_TEXENVI                    (ES11_TEXENVFV                  + 1)
#define ES11_TEXENVIV                   (ES11_TEXENVI                   + 1)
#define ES11_TEXENVX                    (ES11_TEXENVIV                  + 1)
#define ES11_TEXENVXV                   (ES11_TEXENVX                   + 1)
#define ES11_TEXIMAGE2D                 (ES11_TEXENVXV                  + 1)
#define ES11_TEXPARAMETERF              (ES11_TEXIMAGE2D                + 1)
#define ES11_TEXPARAMETERFV             (ES11_TEXPARAMETERF             + 1)
#define ES11_TEXPARAMETERI              (ES11_TEXPARAMETERFV            + 1)
#define ES11_TEXPARAMETERIV             (ES11_TEXPARAMETERI             + 1)
#define ES11_TEXPARAMETERX              (ES11_TEXPARAMETERIV            + 1)
#define ES11_TEXPARAMETERXV             (ES11_TEXPARAMETERX             + 1)
#define ES11_TEXSUBIMAGE2D              (ES11_TEXPARAMETERXV            + 1)
#define ES11_TRANSLATEF                 (ES11_TEXSUBIMAGE2D             + 1)
#define ES11_TRANSLATEX                 (ES11_TRANSLATEF                + 1)
#define ES11_VERTEXPOINTER              (ES11_TRANSLATEX                + 1)
#define ES11_VIEWPORT                   (ES11_VERTEXPOINTER             + 1)
#define ES11_BLENDEQUATIONOES           (ES11_VIEWPORT                  + 1)
#define ES11_BLENDFUNCSEPERATEOES       (ES11_BLENDEQUATIONOES          + 1)
#define ES11_BLENDEQUATIONSEPARATEOES   (ES11_BLENDFUNCSEPERATEOES      + 1)
#define ES11_GLMAPBUFFEROES             (ES11_BLENDEQUATIONSEPARATEOES  + 1)
#define ES11_GLUNMAPBUFFEROES           (ES11_GLMAPBUFFEROES            + 1)
#define ES11_GLGETBUFFERPOINTERVOES     (ES11_GLUNMAPBUFFEROES          + 1)
#define ES11_CALLS                      (ES11_GLGETBUFFERPOINTERVOES    + 1)
#define ES11_DRAWCALLS                  (ES11_CALLS                     + 1)
#define ES11_STATECHANGECALLS           (ES11_DRAWCALLS                 + 1)
#define ES11_POINTCOUNT                 (ES11_STATECHANGECALLS          + 1)
#define ES11_LINECOUNT                  (ES11_POINTCOUNT                + 1)
#define ES11_TRIANGLECOUNT              (ES11_LINECOUNT                 + 1)

/* OpenGL ES2X API IDs. */
#define ES20_ACTIVETEXTURE              1
#define ES20_ATTACHSHADER                           (ES20_ACTIVETEXTURE                         +   1)
#define ES20_BINDATTRIBLOCATION                     (ES20_ATTACHSHADER                          +   1)
#define ES20_BINDBUFFER                             (ES20_BINDATTRIBLOCATION                    +   1)
#define ES20_BINDFRAMEBUFFER                        (ES20_BINDBUFFER                            +   1)
#define ES20_BINDRENDERBUFFER                       (ES20_BINDFRAMEBUFFER                       +   1)
#define ES20_BINDTEXTURE                            (ES20_BINDRENDERBUFFER                      +   1)
#define ES20_BLENDCOLOR                             (ES20_BINDTEXTURE                           +   1)
#define ES20_BLENDEQUATION                          (ES20_BLENDCOLOR                            +   1)
#define ES20_BLENDEQUATIONSEPARATE                  (ES20_BLENDEQUATION                         +   1)
#define ES20_BLENDFUNC                              (ES20_BLENDEQUATIONSEPARATE                 +   1)
#define ES20_BLENDFUNCSEPARATE                      (ES20_BLENDFUNC                             +   1)
#define ES20_BUFFERDATA                             (ES20_BLENDFUNCSEPARATE                     +   1)
#define ES20_BUFFERSUBDATA                          (ES20_BUFFERDATA                            +   1)
#define ES20_CHECKFRAMEBUFFERSTATUS                 (ES20_BUFFERSUBDATA                         +   1)
#define ES20_CLEAR                                  (ES20_CHECKFRAMEBUFFERSTATUS                +   1)
#define ES20_CLEARCOLOR                             (ES20_CLEAR                                 +   1)
#define ES20_CLEARDEPTHF                            (ES20_CLEARCOLOR                            +   1)
#define ES20_CLEARSTENCIL                           (ES20_CLEARDEPTHF                           +   1)
#define ES20_COLORMASK                              (ES20_CLEARSTENCIL                          +   1)
#define ES20_COMPILESHADER                          (ES20_COLORMASK                             +   1)
#define ES20_COMPRESSEDTEXIMAGE2D                   (ES20_COMPILESHADER                         +   1)
#define ES20_COMPRESSEDTEXSUBIMAGE2D                (ES20_COMPRESSEDTEXIMAGE2D                  +   1)
#define ES20_COPYTEXIMAGE2D                         (ES20_COMPRESSEDTEXSUBIMAGE2D               +   1)
#define ES20_COPYTEXSUBIMAGE2D                      (ES20_COPYTEXIMAGE2D                        +   1)
#define ES20_CREATEPROGRAM                          (ES20_COPYTEXSUBIMAGE2D                     +   1)
#define ES20_CREATESHADER                           (ES20_CREATEPROGRAM                         +   1)
#define ES20_CULLFACE                               (ES20_CREATESHADER                          +   1)
#define ES20_DELETEBUFFERS                          (ES20_CULLFACE                              +   1)
#define ES20_DELETEFRAMEBUFFERS                     (ES20_DELETEBUFFERS                         +   1)
#define ES20_DELETEPROGRAM                          (ES20_DELETEFRAMEBUFFERS                    +   1)
#define ES20_DELETERENDERBUFFERS                    (ES20_DELETEPROGRAM                         +   1)
#define ES20_DELETESHADER                           (ES20_DELETERENDERBUFFERS                   +   1)
#define ES20_DELETETEXTURES                         (ES20_DELETESHADER                          +   1)
#define ES20_DEPTHFUNC                              (ES20_DELETETEXTURES                        +   1)
#define ES20_DEPTHMASK                              (ES20_DEPTHFUNC                             +   1)
#define ES20_DEPTHRANGEF                            (ES20_DEPTHMASK                             +   1)
#define ES20_DETACHSHADER                           (ES20_DEPTHRANGEF                           +   1)
#define ES20_DISABLE                                (ES20_DETACHSHADER                          +   1)
#define ES20_DISABLEVERTEXATTRIBARRAY               (ES20_DISABLE                               +   1)
#define ES20_DRAWARRAYS                             (ES20_DISABLEVERTEXATTRIBARRAY              +   1)
#define ES20_DRAWELEMENTS                           (ES20_DRAWARRAYS                            +   1)
#define ES20_ENABLE                                 (ES20_DRAWELEMENTS                          +   1)
#define ES20_ENABLEVERTEXATTRIBARRAY                (ES20_ENABLE                                +   1)
#define ES20_FINISH                                 (ES20_ENABLEVERTEXATTRIBARRAY               +   1)
#define ES20_FLUSH                                  (ES20_FINISH                                +   1)
#define ES20_FRAMEBUFFERRENDERBUFFER                (ES20_FLUSH                                 +   1)
#define ES20_FRAMEBUFFERTEXTURE2D                   (ES20_FRAMEBUFFERRENDERBUFFER               +   1)
#define ES20_FRONTFACE                              (ES20_FRAMEBUFFERTEXTURE2D                  +   1)
#define ES20_GENBUFFERS                             (ES20_FRONTFACE                             +   1)
#define ES20_GENERATEMIPMAP                         (ES20_GENBUFFERS                            +   1)
#define ES20_GENFRAMEBUFFERS                        (ES20_GENERATEMIPMAP                        +   1)
#define ES20_GENRENDERBUFFERS                       (ES20_GENFRAMEBUFFERS                       +   1)
#define ES20_GENTEXTURES                            (ES20_GENRENDERBUFFERS                      +   1)
#define ES20_GETACTIVEATTRIB                        (ES20_GENTEXTURES                           +   1)
#define ES20_GETACTIVEUNIFORM                       (ES20_GETACTIVEATTRIB                       +   1)
#define ES20_GETATTACHEDSHADERS                     (ES20_GETACTIVEUNIFORM                      +   1)
#define ES20_GETATTRIBLOCATION                      (ES20_GETATTACHEDSHADERS                    +   1)
#define ES20_GETBOOLEANV                            (ES20_GETATTRIBLOCATION                     +   1)
#define ES20_GETBUFFERPARAMETERIV                   (ES20_GETBOOLEANV                           +   1)
#define ES20_GETERROR                               (ES20_GETBUFFERPARAMETERIV                  +   1)
#define ES20_GETFLOATV                              (ES20_GETERROR                              +   1)
#define ES20_GETFRAMEBUFFERATTACHMENTPARAMETERIV    (ES20_GETFLOATV                             +   1)
#define ES20_GETINTEGERV                            (ES20_GETFRAMEBUFFERATTACHMENTPARAMETERIV   +   1)
#define ES20_GETPROGRAMIV                           (ES20_GETINTEGERV                           +   1)
#define ES20_GETPROGRAMINFOLOG                      (ES20_GETPROGRAMIV                          +   1)
#define ES20_GETRENDERBUFFERPARAMETERIV             (ES20_GETPROGRAMINFOLOG                     +   1)
#define ES20_GETSHADERIV                            (ES20_GETRENDERBUFFERPARAMETERIV            +   1)
#define ES20_GETSHADERINFOLOG                       (ES20_GETSHADERIV                           +   1)
#define ES20_GETSHADERPRECISIONFORMAT               (ES20_GETSHADERINFOLOG                      +   1)
#define ES20_GETSHADERSOURCE                        (ES20_GETSHADERPRECISIONFORMAT              +   1)
#define ES20_GETSTRING                              (ES20_GETSHADERSOURCE                       +   1)
#define ES20_GETTEXPARAMETERFV                      (ES20_GETSTRING                             +   1)
#define ES20_GETTEXPARAMETERIV                      (ES20_GETTEXPARAMETERFV                     +   1)
#define ES20_GETUNIFORMFV                           (ES20_GETTEXPARAMETERIV                     +   1)
#define ES20_GETUNIFORMIV                           (ES20_GETUNIFORMFV                          +   1)
#define ES20_GETUNIFORMLOCATION                     (ES20_GETUNIFORMIV                          +   1)
#define ES20_GETVERTEXATTRIBFV                      (ES20_GETUNIFORMLOCATION                    +   1)
#define ES20_GETVERTEXATTRIBIV                      (ES20_GETVERTEXATTRIBFV                     +   1)
#define ES20_GETVERTEXATTRIBPOINTERV                (ES20_GETVERTEXATTRIBIV                     +   1)
#define ES20_HINT                                   (ES20_GETVERTEXATTRIBPOINTERV               +   1)
#define ES20_ISBUFFER                               (ES20_HINT                                  +   1)
#define ES20_ISENABLED                              (ES20_ISBUFFER                              +   1)
#define ES20_ISFRAMEBUFFER                          (ES20_ISENABLED                             +   1)
#define ES20_ISPROGRAM                              (ES20_ISFRAMEBUFFER                         +   1)
#define ES20_ISRENDERBUFFER                         (ES20_ISPROGRAM                             +   1)
#define ES20_ISSHADER                               (ES20_ISRENDERBUFFER                        +   1)
#define ES20_ISTEXTURE                              (ES20_ISSHADER                              +   1)
#define ES20_LINEWIDTH                              (ES20_ISTEXTURE                             +   1)
#define ES20_LINKPROGRAM                            (ES20_LINEWIDTH                             +   1)
#define ES20_PIXELSTOREI                            (ES20_LINKPROGRAM                           +   1)
#define ES20_POLYGONOFFSET                          (ES20_PIXELSTOREI                           +   1)
#define ES20_READPIXELS                             (ES20_POLYGONOFFSET                         +   1)
#define ES20_RELEASESHADERCOMPILER                  (ES20_READPIXELS                            +   1)
#define ES20_RENDERBUFFERSTORAGE                    (ES20_RELEASESHADERCOMPILER                 +   1)
#define ES20_SAMPLECOVERAGE                         (ES20_RENDERBUFFERSTORAGE                   +   1)
#define ES20_SCISSOR                                (ES20_SAMPLECOVERAGE                        +   1)
#define ES20_SHADERBINARY                           (ES20_SCISSOR                               +   1)
#define ES20_SHADERSOURCE                           (ES20_SHADERBINARY                          +   1)
#define ES20_STENCILFUNC                            (ES20_SHADERSOURCE                          +   1)
#define ES20_STENCILFUNCSEPARATE                    (ES20_STENCILFUNC                           +   1)
#define ES20_STENCILMASK                            (ES20_STENCILFUNCSEPARATE                   +   1)
#define ES20_STENCILMASKSEPARATE                    (ES20_STENCILMASK                           +   1)
#define ES20_STENCILOP                              (ES20_STENCILMASKSEPARATE                   +   1)
#define ES20_STENCILOPSEPARATE                      (ES20_STENCILOP                             +   1)
#define ES20_TEXIMAGE2D                             (ES20_STENCILOPSEPARATE                     +   1)
#define ES20_TEXPARAMETERF                          (ES20_TEXIMAGE2D                            +   1)
#define ES20_TEXPARAMETERFV                         (ES20_TEXPARAMETERF                         +   1)
#define ES20_TEXPARAMETERI                          (ES20_TEXPARAMETERFV                        +   1)
#define ES20_TEXPARAMETERIV                         (ES20_TEXPARAMETERI                         +   1)
#define ES20_TEXSUBIMAGE2D                          (ES20_TEXPARAMETERIV                        +   1)
#define ES20_UNIFORM1F                              (ES20_TEXSUBIMAGE2D                         +   1)
#define ES20_UNIFORM1FV                             (ES20_UNIFORM1F                             +   1)
#define ES20_UNIFORM1I                              (ES20_UNIFORM1FV                            +   1)
#define ES20_UNIFORM1IV                             (ES20_UNIFORM1I                             +   1)
#define ES20_UNIFORM2F                              (ES20_UNIFORM1IV                            +   1)
#define ES20_UNIFORM2FV                             (ES20_UNIFORM2F                             +   1)
#define ES20_UNIFORM2I                              (ES20_UNIFORM2FV                            +   1)
#define ES20_UNIFORM2IV                             (ES20_UNIFORM2I                             +   1)
#define ES20_UNIFORM3F                              (ES20_UNIFORM2IV                            +   1)
#define ES20_UNIFORM3FV                             (ES20_UNIFORM3F                             +   1)
#define ES20_UNIFORM3I                              (ES20_UNIFORM3FV                            +   1)
#define ES20_UNIFORM3IV                             (ES20_UNIFORM3I                             +   1)
#define ES20_UNIFORM4F                              (ES20_UNIFORM3IV                            +   1)
#define ES20_UNIFORM4FV                             (ES20_UNIFORM4F                             +   1)
#define ES20_UNIFORM4I                              (ES20_UNIFORM4FV                            +   1)
#define ES20_UNIFORM4IV                             (ES20_UNIFORM4I                             +   1)
#define ES20_UNIFORMMATRIX2FV                       (ES20_UNIFORM4IV                            +   1)
#define ES20_UNIFORMMATRIX3FV                       (ES20_UNIFORMMATRIX2FV                      +   1)
#define ES20_UNIFORMMATRIX4FV                       (ES20_UNIFORMMATRIX3FV                      +   1)
#define ES20_USEPROGRAM                             (ES20_UNIFORMMATRIX4FV                      +   1)
#define ES20_VALIDATEPROGRAM                        (ES20_USEPROGRAM                            +   1)
#define ES20_VERTEXATTRIB1F                         (ES20_VALIDATEPROGRAM                       +   1)
#define ES20_VERTEXATTRIB1FV                        (ES20_VERTEXATTRIB1F                        +   1)
#define ES20_VERTEXATTRIB2F                         (ES20_VERTEXATTRIB1FV                       +   1)
#define ES20_VERTEXATTRIB2FV                        (ES20_VERTEXATTRIB2F                        +   1)
#define ES20_VERTEXATTRIB3F                         (ES20_VERTEXATTRIB2FV                       +   1)
#define ES20_VERTEXATTRIB3FV                        (ES20_VERTEXATTRIB3F                        +   1)
#define ES20_VERTEXATTRIB4F                         (ES20_VERTEXATTRIB3FV                       +   1)
#define ES20_VERTEXATTRIB4FV                        (ES20_VERTEXATTRIB4F                        +   1)
#define ES20_VERTEXATTRIBPOINTER                    (ES20_VERTEXATTRIB4FV                       +   1)
#define ES20_VIEWPORT                               (ES20_VERTEXATTRIBPOINTER                   +   1)
#define ES20_GETPROGRAMBINARYOES                    (ES20_VIEWPORT                              +   1)
#define ES20_PROGRAMBINARYOES                       (ES20_GETPROGRAMBINARYOES                   +   1)
#define ES20_TEXIMAGE3DOES                          (ES20_PROGRAMBINARYOES                      +   1)
#define ES20_TEXSUBIMAGE3DOES                       (ES20_TEXIMAGE3DOES                         +   1)
#define ES20_COPYSUBIMAGE3DOES                      (ES20_TEXSUBIMAGE3DOES                      +   1)
#define ES20_COMPRESSEDTEXIMAGE3DOES                (ES20_COPYSUBIMAGE3DOES                     +   1)
#define ES20_COMPRESSEDTEXSUBIMAGE3DOES             (ES20_COMPRESSEDTEXIMAGE3DOES               +   1)
#define ES20_FRAMEBUFFERTEXTURE3DOES                (ES20_COMPRESSEDTEXSUBIMAGE3DOES            +   1)
#define ES20_BINDVERTEXARRAYOES                     (ES20_FRAMEBUFFERTEXTURE3DOES               +   1)
#define ES20_GENVERTEXARRAYOES                      (ES20_BINDVERTEXARRAYOES                    +   1)
#define ES20_ISVERTEXARRAYOES                       (ES20_GENVERTEXARRAYOES                     +   1)
#define ES20_DELETEVERTEXARRAYOES                   (ES20_ISVERTEXARRAYOES                      +   1)
#define ES20_GLMAPBUFFEROES                         (ES20_DELETEVERTEXARRAYOES                  +   1)
#define ES20_GLUNMAPBUFFEROES                       (ES20_GLMAPBUFFEROES                        +   1)
#define ES20_GLGETBUFFERPOINTERVOES                 (ES20_GLUNMAPBUFFEROES                      +   1)
#define ES20_DISCARDFRAMEBUFFEREXT                  (ES20_GLGETBUFFERPOINTERVOES                +   1)
#define ES20_CALLS                                  (ES20_DISCARDFRAMEBUFFEREXT                 +   1)
#define ES20_DRAWCALLS                              (ES20_CALLS                                 +   1)
#define ES20_STATECHANGECALLS                       (ES20_DRAWCALLS                             +   1)
#define ES20_POINTCOUNT                             (ES20_STATECHANGECALLS                      +   1)
#define ES20_LINECOUNT                              (ES20_POINTCOUNT                            +   1)
#define ES20_TRIANGLECOUNT                          (ES20_LINECOUNT                             +   1)

/* OpenVG API IDs. */
#define VG11_APPENDPATH              1
#define VG11_APPENDPATHDATA         (VG11_APPENDPATH                + 1)
#define VG11_CHILDIMAGE             (VG11_APPENDPATHDATA            + 1)
#define VG11_CLEAR                  (VG11_CHILDIMAGE                + 1)
#define VG11_CLEARGLYPH             (VG11_CLEAR                     + 1)
#define VG11_CLEARIMAGE             (VG11_CLEARGLYPH                + 1)
#define VG11_CLEARPATH              (VG11_CLEARIMAGE                + 1)
#define VG11_COLORMATRIX            (VG11_CLEARPATH                 + 1)
#define VG11_CONVOLVE               (VG11_COLORMATRIX               + 1)
#define VG11_COPYIMAGE              (VG11_CONVOLVE                  + 1)
#define VG11_COPYMASK               (VG11_COPYIMAGE                 + 1)
#define VG11_COPYPIXELS             (VG11_COPYMASK                  + 1)
#define VG11_CREATEFONT             (VG11_COPYPIXELS                + 1)
#define VG11_CREATEIMAGE            (VG11_CREATEFONT                + 1)
#define VG11_CREATEMASKLAYER        (VG11_CREATEIMAGE               + 1)
#define VG11_CREATEPAINT            (VG11_CREATEMASKLAYER           + 1)
#define VG11_CREATEPATH             (VG11_CREATEPAINT               + 1)
#define VG11_DESTROYFONT            (VG11_CREATEPATH                + 1)
#define VG11_DESTROYIMAGE           (VG11_DESTROYFONT               + 1)
#define VG11_DESTROYMASKLAYER       (VG11_DESTROYIMAGE              + 1)
#define VG11_DESTROYPAINT           (VG11_DESTROYMASKLAYER          + 1)
#define VG11_DESTROYPATH            (VG11_DESTROYPAINT              + 1)
#define VG11_DRAWGLYPH              (VG11_DESTROYPATH               + 1)
#define VG11_DRAWGLYPHS             (VG11_DRAWGLYPH                 + 1)
#define VG11_DRAWIMAGE              (VG11_DRAWGLYPHS                + 1)
#define VG11_DRAWPATH               (VG11_DRAWIMAGE                 + 1)
#define VG11_FILLMASKLAYER          (VG11_DRAWPATH                  + 1)
#define VG11_FINISH                 (VG11_FILLMASKLAYER             + 1)
#define VG11_FLUSH                  (VG11_FINISH                    + 1)
#define VG11_GAUSSIANBLUR           (VG11_FLUSH                     + 1)
#define VG11_GETCOLOR               (VG11_GAUSSIANBLUR              + 1)
#define VG11_GETERROR               (VG11_GETCOLOR                  + 1)
#define VG11_GETF                   (VG11_GETERROR                  + 1)
#define VG11_GETFV                  (VG11_GETF                      + 1)
#define VG11_GETI                   (VG11_GETFV                     + 1)
#define VG11_GETIMAGESUBDATA        (VG11_GETI                      + 1)
#define VG11_GETIV                  (VG11_GETIMAGESUBDATA           + 1)
#define VG11_GETMATRIX              (VG11_GETIV                     + 1)
#define VG11_GETPAINT               (VG11_GETMATRIX                 + 1)
#define VG11_GETPARAMETERF          (VG11_GETPAINT                  + 1)
#define VG11_GETPARAMETERFV         (VG11_GETPARAMETERF             + 1)
#define VG11_GETPARAMETERI          (VG11_GETPARAMETERFV            + 1)
#define VG11_GETPARAMETERIV         (VG11_GETPARAMETERI             + 1)
#define VG11_GETPARAMETERVECTORSIZE (VG11_GETPARAMETERIV            + 1)
#define VG11_GETPARENT              (VG11_GETPARAMETERVECTORSIZE    + 1)
#define VG11_GETPATHCAPABILITIES    (VG11_GETPARENT                 + 1)
#define VG11_GETPIXELS              (VG11_GETPATHCAPABILITIES       + 1)
#define VG11_GETSTRING              (VG11_GETPIXELS                 + 1)
#define VG11_GETVECTORSIZE          (VG11_GETSTRING                 + 1)
#define VG11_HARDWAREQUERY          (VG11_GETVECTORSIZE             + 1)
#define VG11_IMAGESUBDATA           (VG11_HARDWAREQUERY             + 1)
#define VG11_INTERPOLATEPATH        (VG11_IMAGESUBDATA              + 1)
#define VG11_LOADIDENTITY           (VG11_INTERPOLATEPATH           + 1)
#define VG11_LOADMATRIX             (VG11_LOADIDENTITY              + 1)
#define VG11_LOOKUP                 (VG11_LOADMATRIX                + 1)
#define VG11_LOOKUPSINGLE           (VG11_LOOKUP                    + 1)
#define VG11_MASK                   (VG11_LOOKUPSINGLE              + 1)
#define VG11_MODIFYPATHCOORDS       (VG11_MASK                      + 1)
#define VG11_MULTMATRIX             (VG11_MODIFYPATHCOORDS          + 1)
#define VG11_PAINTPATTERN           (VG11_MULTMATRIX                + 1)
#define VG11_PATHBOUNDS             (VG11_PAINTPATTERN              + 1)
#define VG11_PATHLENGTH             (VG11_PATHBOUNDS                + 1)
#define VG11_PATHTRANSFORMEDBOUNDS  (VG11_PATHLENGTH                + 1)
#define VG11_POINTALONGPATH         (VG11_PATHTRANSFORMEDBOUNDS     + 1)
#define VG11_READPIXELS             (VG11_POINTALONGPATH            + 1)
#define VG11_REMOVEPATHCAPABILITIES (VG11_READPIXELS                + 1)
#define VG11_RENDERTOMASK           (VG11_REMOVEPATHCAPABILITIES    + 1)
#define VG11_ROTATE                 (VG11_RENDERTOMASK              + 1)
#define VG11_SCALE                  (VG11_ROTATE                    + 1)
#define VG11_SEPARABLECONVOLVE      (VG11_SCALE                     + 1)
#define VG11_SETCOLOR               (VG11_SEPARABLECONVOLVE         + 1)
#define VG11_SETF                   (VG11_SETCOLOR                  + 1)
#define VG11_SETFV                  (VG11_SETF                      + 1)
#define VG11_SETGLYPHTOIMAGE        (VG11_SETFV                     + 1)
#define VG11_SETGLYPHTOPATH         (VG11_SETGLYPHTOIMAGE           + 1)
#define VG11_SETI                   (VG11_SETGLYPHTOPATH            + 1)
#define VG11_SETIV                  (VG11_SETI                      + 1)
#define VG11_SETPAINT               (VG11_SETIV                     + 1)
#define VG11_SETPARAMETERF          (VG11_SETPAINT                  + 1)
#define VG11_SETPARAMETERFV         (VG11_SETPARAMETERF             + 1)
#define VG11_SETPARAMETERI          (VG11_SETPARAMETERFV            + 1)
#define VG11_SETPARAMETERIV         (VG11_SETPARAMETERI             + 1)
#define VG11_SETPIXELS              (VG11_SETPARAMETERIV            + 1)
#define VG11_SHEAR                  (VG11_SETPIXELS                 + 1)
#define VG11_TRANSFORMPATH          (VG11_SHEAR                     + 1)
#define VG11_TRANSLATE              (VG11_TRANSFORMPATH             + 1)
#define VG11_WRITEPIXELS            (VG11_TRANSLATE                 + 1)
#define VG11_CALLS                  (VG11_WRITEPIXELS               + 1)
#define VG11_DRAWCALLS              (VG11_CALLS                     + 1)
#define VG11_STATECHANGECALLS       (VG11_DRAWCALLS                 + 1)
#define VG11_FILLCOUNT              (VG11_STATECHANGECALLS          + 1)
#define VG11_STROKECOUNT            (VG11_FILLCOUNT                 + 1)
/* End of Driver API ID Definitions. */

/* HAL & MISC IDs. */
#define HAL_VERTBUFNEWBYTEALLOC     1
#define HAL_VERTBUFTOTALBYTEALLOC   (HAL_VERTBUFNEWBYTEALLOC    + 1)
#define HAL_VERTBUFNEWOBJALLOC      (HAL_VERTBUFTOTALBYTEALLOC  + 1)
#define HAL_VERTBUFTOTALOBJALLOC    (HAL_VERTBUFNEWOBJALLOC     + 1)
#define HAL_INDBUFNEWBYTEALLOC      (HAL_VERTBUFTOTALOBJALLOC   + 1)
#define HAL_INDBUFTOTALBYTEALLOC    (HAL_INDBUFNEWBYTEALLOC     + 1)
#define HAL_INDBUFNEWOBJALLOC       (HAL_INDBUFTOTALBYTEALLOC   + 1)
#define HAL_INDBUFTOTALOBJALLOC     (HAL_INDBUFNEWOBJALLOC      + 1)
#define HAL_TEXBUFNEWBYTEALLOC      (HAL_INDBUFTOTALOBJALLOC    + 1)
#define HAL_TEXBUFTOTALBYTEALLOC    (HAL_TEXBUFNEWBYTEALLOC     + 1)
#define HAL_TEXBUFNEWOBJALLOC       (HAL_TEXBUFTOTALBYTEALLOC   + 1)
#define HAL_TEXBUFTOTALOBJALLOC     (HAL_TEXBUFNEWOBJALLOC      + 1)

#define GPU_CYCLES      1
#define GPU_READ64BYTE  (GPU_CYCLES     + 1)
#define GPU_WRITE64BYTE (GPU_READ64BYTE + 1)
#define GPU_TOTALCYCLES (GPU_WRITE64BYTE    + 1)
#define GPU_IDLECYCLES  (GPU_TOTALCYCLES    + 1)

#define VS_INSTCOUNT            1
#define VS_BRANCHINSTCOUNT      (VS_INSTCOUNT       + 1)
#define VS_TEXLDINSTCOUNT       (VS_BRANCHINSTCOUNT + 1)
#define VS_RENDEREDVERTCOUNT    (VS_TEXLDINSTCOUNT  + 1)

#define PS_INSTCOUNT            1
#define PS_BRANCHINSTCOUNT      (PS_INSTCOUNT       + 1)
#define PS_TEXLDINSTCOUNT       (PS_BRANCHINSTCOUNT + 1)
#define PS_RENDEREDPIXCOUNT     (PS_TEXLDINSTCOUNT  + 1)

#define PA_INVERTCOUNT      1
#define PA_INPRIMCOUNT      (PA_INVERTCOUNT     + 1)
#define PA_OUTPRIMCOUNT     (PA_INPRIMCOUNT     + 1)
#define PA_DEPTHCLIPCOUNT   (PA_OUTPRIMCOUNT    + 1)
#define PA_TRIVIALREJCOUNT  (PA_DEPTHCLIPCOUNT  + 1)
#define PA_CULLCOUNT        (PA_TRIVIALREJCOUNT + 1)

#define SE_TRIANGLECOUNT    1
#define SE_LINECOUNT        (SE_TRIANGLECOUNT   + 1)

#define RA_VALIDPIXCOUNT        1
#define RA_TOTALQUADCOUNT       (RA_VALIDPIXCOUNT       + 1)
#define RA_VALIDQUADCOUNTEZ     (RA_TOTALQUADCOUNT      + 1)
#define RA_TOTALPRIMCOUNT       (RA_VALIDQUADCOUNTEZ    + 1)
#define RA_PIPECACHEMISSCOUNT   (RA_TOTALPRIMCOUNT      + 1)
#define RA_PREFCACHEMISSCOUNT   (RA_PIPECACHEMISSCOUNT  + 1)
#define RA_EEZCULLCOUNT         (RA_PREFCACHEMISSCOUNT  + 1)

#define TX_TOTBILINEARREQ       1
#define TX_TOTTRILINEARREQ      (TX_TOTBILINEARREQ      + 1)
#define TX_TOTDISCARDTEXREQ     (TX_TOTTRILINEARREQ     + 1)
#define TX_TOTTEXREQ            (TX_TOTDISCARDTEXREQ    + 1)
#define TX_MEMREADCOUNT         (TX_TOTTEXREQ           + 1)
#define TX_MEMREADIN8BCOUNT     (TX_MEMREADCOUNT        + 1)
#define TX_CACHEMISSCOUNT       (TX_MEMREADIN8BCOUNT    + 1)
#define TX_CACHEHITTEXELCOUNT   (TX_CACHEMISSCOUNT      + 1)
#define TX_CACHEMISSTEXELCOUNT  (TX_CACHEHITTEXELCOUNT  + 1)

#define PE_KILLEDBYCOLOR    1
#define PE_KILLEDBYDEPTH    (PE_KILLEDBYCOLOR   + 1)
#define PE_DRAWNBYCOLOR     (PE_KILLEDBYDEPTH   + 1)
#define PE_DRAWNBYDEPTH     (PE_DRAWNBYCOLOR    + 1)

#define MC_READREQ8BPIPE    1
#define MC_READREQ8BIP      (MC_READREQ8BPIPE   + 1)
#define MC_WRITEREQ8BPIPE   (MC_READREQ8BIP     + 1)

#define AXI_READREQSTALLED      1
#define AXI_WRITEREQSTALLED     (AXI_READREQSTALLED     + 1)
#define AXI_WRITEDATASTALLED    (AXI_WRITEREQSTALLED    + 1)

#define PVS_INSTRCOUNT      1
#define PVS_ALUINSTRCOUNT   (PVS_INSTRCOUNT     + 1)
#define PVS_TEXINSTRCOUNT   (PVS_ALUINSTRCOUNT  + 1)
#define PVS_ATTRIBCOUNT     (PVS_TEXINSTRCOUNT  + 1)
#define PVS_UNIFORMCOUNT    (PVS_ATTRIBCOUNT    + 1)
#define PVS_FUNCTIONCOUNT   (PVS_UNIFORMCOUNT   + 1)

#define PPS_INSTRCOUNT      1
#define PPS_ALUINSTRCOUNT   (PPS_INSTRCOUNT     + 1)
#define PPS_TEXINSTRCOUNT   (PPS_ALUINSTRCOUNT  + 1)
#define PPS_ATTRIBCOUNT     (PPS_TEXINSTRCOUNT  + 1)
#define PPS_UNIFORMCOUNT    (PPS_ATTRIBCOUNT    + 1)
#define PPS_FUNCTIONCOUNT   (PPS_UNIFORMCOUNT   + 1)
/* End of MISC Counter IDs. */

#ifdef gcdNEW_PROFILER_FILE

/* Category Constants. */
#define VPHEADER        0x010000
#define VPG_INFO        0x020000
#define VPG_TIME        0x030000
#define VPG_MEM         0x040000
#define VPG_ES11        0x050000
#define VPG_ES20        0x060000
#define VPG_VG11        0x070000
#define VPG_HAL         0x080000
#define VPG_HW          0x090000
#define VPG_GPU         0x0a0000
#define VPG_VS          0x0b0000
#define VPG_PS          0x0c0000
#define VPG_PA          0x0d0000
#define VPG_SETUP       0x0e0000
#define VPG_RA          0x0f0000
#define VPG_TX          0x100000
#define VPG_PE          0x110000
#define VPG_MC          0x120000
#define VPG_AXI         0x130000
#define VPG_PROG        0x140000
#define VPG_PVS         0x150000
#define VPG_PPS         0x160000
#define VPG_ES11_TIME   0x170000
#define VPG_ES20_TIME   0x180000
#define VPG_FRAME       0x190000
#define VPG_ES11_DRAW 0x200000
#define VPG_ES20_DRAW 0x210000
#define VPG_END         0xff0000

/* Info. */
#define VPC_INFOCOMPANY         (VPG_INFO + 1)
#define VPC_INFOVERSION         (VPC_INFOCOMPANY + 1)
#define VPC_INFORENDERER        (VPC_INFOVERSION + 1)
#define VPC_INFOREVISION        (VPC_INFORENDERER + 1)
#define VPC_INFODRIVER          (VPC_INFOREVISION + 1)
#define VPC_INFODRIVERMODE      (VPC_INFODRIVER + 1)
#define VPC_INFOSCREENSIZE      (VPC_INFODRIVERMODE + 1)

/* Counter Constants. */
#define VPC_ELAPSETIME          (VPG_TIME + 1)
#define VPC_CPUTIME             (VPC_ELAPSETIME + 1)

#define VPC_MEMMAXRES           (VPG_MEM + 1)
#define VPC_MEMSHARED           (VPC_MEMMAXRES + 1)
#define VPC_MEMUNSHAREDDATA     (VPC_MEMSHARED + 1)
#define VPC_MEMUNSHAREDSTACK    (VPC_MEMUNSHAREDDATA + 1)

/* OpenGL ES11 Counters. */
#define VPC_ES11ACTIVETEXTURE           (VPG_ES11 + ES11_ACTIVETEXTURE)
#define VPC_ES11ALPHAFUNC               (VPG_ES11 + ES11_ALPHAFUNC)
#define VPC_ES11ALPHAFUNCX              (VPG_ES11 + ES11_ALPHAFUNCX)
#define VPC_ES11BINDBUFFER              (VPG_ES11 + ES11_BINDBUFFER)
#define VPC_ES11BINDTEXTURE             (VPG_ES11 + ES11_BINDTEXTURE)
#define VPC_ES11BLENDFUNC               (VPG_ES11 + ES11_BLENDFUNC)
#define VPC_ES11BUFFERDATA              (VPG_ES11 + ES11_BUFFERDATA)
#define VPC_ES11BUFFERSUBDATA           (VPG_ES11 + ES11_BUFFERSUBDATA)
#define VPC_ES11CLEAR                   (VPG_ES11 + ES11_CLEAR)
#define VPC_ES11CLEARCOLOR              (VPG_ES11 + ES11_CLEARCOLOR)
#define VPC_ES11CLEARCOLORX             (VPG_ES11 + ES11_CLEARCOLORX)
#define VPC_ES11CLEARDEPTHF             (VPG_ES11 + ES11_CLEARDEPTHF)
#define VPC_ES11CLEARDEPTHX             (VPG_ES11 + ES11_CLEARDEPTHX)
#define VPC_ES11CLEARSTENCIL            (VPG_ES11 + ES11_CLEARSTENCIL)
#define VPC_ES11CLIENTACTIVETEXTURE     (VPG_ES11 + ES11_CLIENTACTIVETEXTURE)
#define VPC_ES11CLIPPLANEF              (VPG_ES11 + ES11_CLIPPLANEF)
#define VPC_ES11CLIPPLANEX              (VPG_ES11 + ES11_CLIPPLANEX)
#define VPC_ES11COLOR4F                 (VPG_ES11 + ES11_COLOR4F)
#define VPC_ES11COLOR4UB                (VPG_ES11 + ES11_COLOR4UB)
#define VPC_ES11COLOR4X                 (VPG_ES11 + ES11_COLOR4X)
#define VPC_ES11COLORMASK               (VPG_ES11 + ES11_COLORMASK)
#define VPC_ES11COLORPOINTER            (VPG_ES11 + ES11_COLORPOINTER)
#define VPC_ES11COMPRESSEDTEXIMAGE2D    (VPG_ES11 + ES11_COMPRESSEDTEXIMAGE2D)
#define VPC_ES11COMPRESSEDTEXSUBIMAGE2D (VPG_ES11 + ES11_COMPRESSEDTEXSUBIMAGE2D)
#define VPC_ES11COPYTEXIMAGE2D          (VPG_ES11 + ES11_COPYTEXIMAGE2D)
#define VPC_ES11COPYTEXSUBIMAGE2D       (VPG_ES11 + ES11_COPYTEXSUBIMAGE2D)
#define VPC_ES11CULLFACE                (VPG_ES11 + ES11_CULLFACE)
#define VPC_ES11DELETEBUFFERS           (VPG_ES11 + ES11_DELETEBUFFERS)
#define VPC_ES11DELETETEXTURES          (VPG_ES11 + ES11_DELETETEXTURES)
#define VPC_ES11DEPTHFUNC               (VPG_ES11 + ES11_DEPTHFUNC)
#define VPC_ES11DEPTHMASK               (VPG_ES11 + ES11_DEPTHMASK)
#define VPC_ES11DEPTHRANGEF             (VPG_ES11 + ES11_DEPTHRANGEF)
#define VPC_ES11DEPTHRANGEX             (VPG_ES11 + ES11_DEPTHRANGEX)
#define VPC_ES11DISABLE                 (VPG_ES11 + ES11_DISABLE)
#define VPC_ES11DISABLECLIENTSTATE      (VPG_ES11 + ES11_DISABLECLIENTSTATE)
#define VPC_ES11DRAWARRAYS              (VPG_ES11 + ES11_DRAWARRAYS)
#define VPC_ES11DRAWELEMENTS            (VPG_ES11 + ES11_DRAWELEMENTS)
#define VPC_ES11ENABLE                  (VPG_ES11 + ES11_ENABLE)
#define VPC_ES11ENABLECLIENTSTATE       (VPG_ES11 + ES11_ENABLECLIENTSTATE)
#define VPC_ES11FINISH                  (VPG_ES11 + ES11_FINISH)
#define VPC_ES11FLUSH                   (VPG_ES11 + ES11_FLUSH)
#define VPC_ES11FOGF                    (VPG_ES11 + ES11_FOGF)
#define VPC_ES11FOGFV                   (VPG_ES11 + ES11_FOGFV)
#define VPC_ES11FOGX                    (VPG_ES11 + ES11_FOGX)
#define VPC_ES11FOGXV                   (VPG_ES11 + ES11_FOGXV)
#define VPC_ES11FRONTFACE               (VPG_ES11 + ES11_FRONTFACE)
#define VPC_ES11FRUSTUMF                (VPG_ES11 + ES11_FRUSTUMF)
#define VPC_ES11FRUSTUMX                (VPG_ES11 + ES11_FRUSTUMX)
#define VPC_ES11GENBUFFERS              (VPG_ES11 + ES11_GENBUFFERS)
#define VPC_ES11GENTEXTURES             (VPG_ES11 + ES11_GENTEXTURES)
#define VPC_ES11GETBOOLEANV             (VPG_ES11 + ES11_GETBOOLEANV)
#define VPC_ES11GETBUFFERPARAMETERIV    (VPG_ES11 + ES11_GETBUFFERPARAMETERIV)
#define VPC_ES11GETCLIPPLANEF           (VPG_ES11 + ES11_GETCLIPPLANEF)
#define VPC_ES11GETCLIPPLANEX           (VPG_ES11 + ES11_GETCLIPPLANEX)
#define VPC_ES11GETERROR                (VPG_ES11 + ES11_GETERROR)
#define VPC_ES11GETFIXEDV               (VPG_ES11 + ES11_GETFIXEDV)
#define VPC_ES11GETFLOATV               (VPG_ES11 + ES11_GETFLOATV)
#define VPC_ES11GETINTEGERV             (VPG_ES11 + ES11_GETINTEGERV)
#define VPC_ES11GETLIGHTFV              (VPG_ES11 + ES11_GETLIGHTFV)
#define VPC_ES11GETLIGHTXV              (VPG_ES11 + ES11_GETLIGHTXV)
#define VPC_ES11GETMATERIALFV           (VPG_ES11 + ES11_GETMATERIALFV)
#define VPC_ES11GETMATERIALXV           (VPG_ES11 + ES11_GETMATERIALXV)
#define VPC_ES11GETPOINTERV             (VPG_ES11 + ES11_GETPOINTERV)
#define VPC_ES11GETSTRING               (VPG_ES11 + ES11_GETSTRING)
#define VPC_ES11GETTEXENVFV             (VPG_ES11 + ES11_GETTEXENVFV)
#define VPC_ES11GETTEXENVIV             (VPG_ES11 + ES11_GETTEXENVIV)
#define VPC_ES11GETTEXENVXV             (VPG_ES11 + ES11_GETTEXENVXV)
#define VPC_ES11GETTEXPARAMETERFV       (VPG_ES11 + ES11_GETTEXPARAMETERFV)
#define VPC_ES11GETTEXPARAMETERIV       (VPG_ES11 + ES11_GETTEXPARAMETERIV)
#define VPC_ES11GETTEXPARAMETERXV       (VPG_ES11 + ES11_GETTEXPARAMETERXV)
#define VPC_ES11HINT                    (VPG_ES11 + ES11_HINT)
#define VPC_ES11ISBUFFER                (VPG_ES11 + ES11_ISBUFFER)
#define VPC_ES11ISENABLED               (VPG_ES11 + ES11_ISENABLED)
#define VPC_ES11ISTEXTURE               (VPG_ES11 + ES11_ISTEXTURE)
#define VPC_ES11LIGHTF                  (VPG_ES11 + ES11_LIGHTF)
#define VPC_ES11LIGHTFV                 (VPG_ES11 + ES11_LIGHTFV)
#define VPC_ES11LIGHTMODELF             (VPG_ES11 + ES11_LIGHTMODELF)
#define VPC_ES11LIGHTMODELFV            (VPG_ES11 + ES11_LIGHTMODELFV)
#define VPC_ES11LIGHTMODELX             (VPG_ES11 + ES11_LIGHTMODELX)
#define VPC_ES11LIGHTMODELXV            (VPG_ES11 + ES11_LIGHTMODELXV)
#define VPC_ES11LIGHTX                  (VPG_ES11 + ES11_LIGHTX)
#define VPC_ES11LIGHTXV                 (VPG_ES11 + ES11_LIGHTXV)
#define VPC_ES11LINEWIDTH               (VPG_ES11 + ES11_LINEWIDTH)
#define VPC_ES11LINEWIDTHX              (VPG_ES11 + ES11_LINEWIDTHX)
#define VPC_ES11LOADIDENTITY            (VPG_ES11 + ES11_LOADIDENTITY)
#define VPC_ES11LOADMATRIXF             (VPG_ES11 + ES11_LOADMATRIXF)
#define VPC_ES11LOADMATRIXX             (VPG_ES11 + ES11_LOADMATRIXX)
#define VPC_ES11LOGICOP                 (VPG_ES11 + ES11_LOGICOP)
#define VPC_ES11MATERIALF               (VPG_ES11 + ES11_MATERIALF)
#define VPC_ES11MATERIALFV              (VPG_ES11 + ES11_MATERIALFV)
#define VPC_ES11MATERIALX               (VPG_ES11 + ES11_MATERIALX)
#define VPC_ES11MATERIALXV              (VPG_ES11 + ES11_MATERIALXV)
#define VPC_ES11MATRIXMODE              (VPG_ES11 + ES11_MATRIXMODE)
#define VPC_ES11MULTITEXCOORD4F         (VPG_ES11 + ES11_MULTITEXCOORD4F)
#define VPC_ES11MULTITEXCOORD4X         (VPG_ES11 + ES11_MULTITEXCOORD4X)
#define VPC_ES11MULTMATRIXF             (VPG_ES11 + ES11_MULTMATRIXF)
#define VPC_ES11MULTMATRIXX             (VPG_ES11 + ES11_MULTMATRIXX)
#define VPC_ES11NORMAL3F                (VPG_ES11 + ES11_NORMAL3F)
#define VPC_ES11NORMAL3X                (VPG_ES11 + ES11_NORMAL3X)
#define VPC_ES11NORMALPOINTER           (VPG_ES11 + ES11_NORMALPOINTER)
#define VPC_ES11ORTHOF                  (VPG_ES11 + ES11_ORTHOF)
#define VPC_ES11ORTHOX                  (VPG_ES11 + ES11_ORTHOX)
#define VPC_ES11PIXELSTOREI             (VPG_ES11 + ES11_PIXELSTOREI)
#define VPC_ES11POINTPARAMETERF         (VPG_ES11 + ES11_POINTPARAMETERF)
#define VPC_ES11POINTPARAMETERFV        (VPG_ES11 + ES11_POINTPARAMETERFV)
#define VPC_ES11POINTPARAMETERX         (VPG_ES11 + ES11_POINTPARAMETERX)
#define VPC_ES11POINTPARAMETERXV        (VPG_ES11 + ES11_POINTPARAMETERXV)
#define VPC_ES11POINTSIZE               (VPG_ES11 + ES11_POINTSIZE)
#define VPC_ES11POINTSIZEX              (VPG_ES11 + ES11_POINTSIZEX)
#define VPC_ES11POLYGONOFFSET           (VPG_ES11 + ES11_POLYGONOFFSET)
#define VPC_ES11POLYGONOFFSETX          (VPG_ES11 + ES11_POLYGONOFFSETX)
#define VPC_ES11POPMATRIX               (VPG_ES11 + ES11_POPMATRIX)
#define VPC_ES11PUSHMATRIX              (VPG_ES11 + ES11_PUSHMATRIX)
#define VPC_ES11READPIXELS              (VPG_ES11 + ES11_READPIXELS)
#define VPC_ES11ROTATEF                 (VPG_ES11 + ES11_ROTATEF)
#define VPC_ES11ROTATEX                 (VPG_ES11 + ES11_ROTATEX)
#define VPC_ES11SAMPLECOVERAGE          (VPG_ES11 + ES11_SAMPLECOVERAGE)
#define VPC_ES11SAMPLECOVERAGEX         (VPG_ES11 + ES11_SAMPLECOVERAGEX)
#define VPC_ES11SCALEF                  (VPG_ES11 + ES11_SCALEF)
#define VPC_ES11SCALEX                  (VPG_ES11 + ES11_SCALEX)
#define VPC_ES11SCISSOR                 (VPG_ES11 + ES11_SCISSOR)
#define VPC_ES11SHADEMODEL              (VPG_ES11 + ES11_SHADEMODEL)
#define VPC_ES11STENCILFUNC             (VPG_ES11 + ES11_STENCILFUNC)
#define VPC_ES11STENCILMASK             (VPG_ES11 + ES11_STENCILMASK)
#define VPC_ES11STENCILOP               (VPG_ES11 + ES11_STENCILOP)
#define VPC_ES11TEXCOORDPOINTER         (VPG_ES11 + ES11_TEXCOORDPOINTER)
#define VPC_ES11TEXENVF                 (VPG_ES11 + ES11_TEXENVF)
#define VPC_ES11TEXENVFV                (VPG_ES11 + ES11_TEXENVFV)
#define VPC_ES11TEXENVI                 (VPG_ES11 + ES11_TEXENVI)
#define VPC_ES11TEXENVIV                (VPG_ES11 + ES11_TEXENVIV)
#define VPC_ES11TEXENVX                 (VPG_ES11 + ES11_TEXENVX)
#define VPC_ES11TEXENVXV                (VPG_ES11 + ES11_TEXENVXV)
#define VPC_ES11TEXIMAGE2D              (VPG_ES11 + ES11_TEXIMAGE2D)
#define VPC_ES11TEXPARAMETERF           (VPG_ES11 + ES11_TEXPARAMETERF)
#define VPC_ES11TEXPARAMETERFV          (VPG_ES11 + ES11_TEXPARAMETERFV)
#define VPC_ES11TEXPARAMETERI           (VPG_ES11 + ES11_TEXPARAMETERI)
#define VPC_ES11TEXPARAMETERIV          (VPG_ES11 + ES11_TEXPARAMETERIV)
#define VPC_ES11TEXPARAMETERX           (VPG_ES11 + ES11_TEXPARAMETERX)
#define VPC_ES11TEXPARAMETERXV          (VPG_ES11 + ES11_TEXPARAMETERXV)
#define VPC_ES11TEXSUBIMAGE2D           (VPG_ES11 + ES11_TEXSUBIMAGE2D)
#define VPC_ES11TRANSLATEF              (VPG_ES11 + ES11_TRANSLATEF)
#define VPC_ES11TRANSLATEX              (VPG_ES11 + ES11_TRANSLATEX)
#define VPC_ES11VERTEXPOINTER           (VPG_ES11 + ES11_VERTEXPOINTER)
#define VPC_ES11VIEWPORT                (VPG_ES11 + ES11_VIEWPORT)
/* OpenGL ES11 Statics Counter IDs. */
#define VPC_ES11CALLS                   (VPG_ES11 + ES11_CALLS)
#define VPC_ES11DRAWCALLS               (VPG_ES11 + ES11_DRAWCALLS)
#define VPC_ES11STATECHANGECALLS        (VPG_ES11 + ES11_STATECHANGECALLS)
#define VPC_ES11POINTCOUNT              (VPG_ES11 + ES11_POINTCOUNT)
#define VPC_ES11LINECOUNT               (VPG_ES11 + ES11_LINECOUNT)
#define VPC_ES11TRIANGLECOUNT           (VPG_ES11 + ES11_TRIANGLECOUNT)

/* OpenGLES 2.x */
#define VPC_ES20ACTIVETEXTURE                       (VPG_ES20 + ES20_ACTIVETEXTURE)
#define VPC_ES20ATTACHSHADER                        (VPG_ES20 + ES20_ATTACHSHADER)
#define VPC_ES20BINDATTRIBLOCATION                  (VPG_ES20 + ES20_BINDATTRIBLOCATION)
#define VPC_ES20BINDBUFFER                          (VPG_ES20 + ES20_BINDBUFFER)
#define VPC_ES20BINDFRAMEBUFFER                     (VPG_ES20 + ES20_BINDFRAMEBUFFER)
#define VPC_ES20BINDRENDERBUFFER                    (VPG_ES20 + ES20_BINDRENDERBUFFER)
#define VPC_ES20BINDTEXTURE                         (VPG_ES20 + ES20_BINDTEXTURE)
#define VPC_ES20BLENDCOLOR                          (VPG_ES20 + ES20_BLENDCOLOR)
#define VPC_ES20BLENDEQUATION                       (VPG_ES20 + ES20_BLENDEQUATION)
#define VPC_ES20BLENDEQUATIONSEPARATE               (VPG_ES20 + ES20_BLENDEQUATIONSEPARATE)
#define VPC_ES20BLENDFUNC                           (VPG_ES20 + ES20_BLENDFUNC)
#define VPC_ES20BLENDFUNCSEPARATE                   (VPG_ES20 + ES20_BLENDFUNCSEPARATE)
#define VPC_ES20BUFFERDATA                          (VPG_ES20 + ES20_BUFFERDATA)
#define VPC_ES20BUFFERSUBDATA                       (VPG_ES20 + ES20_BUFFERSUBDATA)
#define VPC_ES20CHECKFRAMEBUFFERSTATUS              (VPG_ES20 + ES20_CHECKFRAMEBUFFERSTATUS)
#define VPC_ES20CLEAR                               (VPG_ES20 + ES20_CLEAR)
#define VPC_ES20CLEARCOLOR                          (VPG_ES20 + ES20_CLEARCOLOR)
#define VPC_ES20CLEARDEPTHF                         (VPG_ES20 + ES20_CLEARDEPTHF)
#define VPC_ES20CLEARSTENCIL                        (VPG_ES20 + ES20_CLEARSTENCIL)
#define VPC_ES20COLORMASK                           (VPG_ES20 + ES20_COLORMASK)
#define VPC_ES20COMPILESHADER                       (VPG_ES20 + ES20_COMPILESHADER)
#define VPC_ES20COMPRESSEDTEXIMAGE2D                (VPG_ES20 + ES20_COMPRESSEDTEXIMAGE2D)
#define VPC_ES20COMPRESSEDTEXSUBIMAGE2D             (VPG_ES20 + ES20_COMPRESSEDTEXSUBIMAGE2D)
#define VPC_ES20COPYTEXIMAGE2D                      (VPG_ES20 + ES20_COPYTEXIMAGE2D)
#define VPC_ES20COPYTEXSUBIMAGE2D                   (VPG_ES20 + ES20_COPYTEXSUBIMAGE2D)
#define VPC_ES20CREATEPROGRAM                       (VPG_ES20 + ES20_CREATEPROGRAM)
#define VPC_ES20CREATESHADER                        (VPG_ES20 + ES20_CREATESHADER)
#define VPC_ES20CULLFACE                            (VPG_ES20 + ES20_CULLFACE)
#define VPC_ES20DELETEBUFFERS                       (VPG_ES20 + ES20_DELETEBUFFERS)
#define VPC_ES20DELETEFRAMEBUFFERS                  (VPG_ES20 + ES20_DELETEFRAMEBUFFERS)
#define VPC_ES20DELETEPROGRAM                       (VPG_ES20 + ES20_DELETEPROGRAM)
#define VPC_ES20DELETERENDERBUFFERS                 (VPG_ES20 + ES20_DELETERENDERBUFFERS)
#define VPC_ES20DELETESHADER                        (VPG_ES20 + ES20_DELETESHADER)
#define VPC_ES20DELETETEXTURES                      (VPG_ES20 + ES20_DELETETEXTURES)
#define VPC_ES20DEPTHFUNC                           (VPG_ES20 + ES20_DEPTHFUNC)
#define VPC_ES20DEPTHMASK                           (VPG_ES20 + ES20_DEPTHMASK)
#define VPC_ES20DEPTHRANGEF                         (VPG_ES20 + ES20_DEPTHRANGEF)
#define VPC_ES20DETACHSHADER                        (VPG_ES20 + ES20_DETACHSHADER)
#define VPC_ES20DISABLE                             (VPG_ES20 + ES20_DISABLE)
#define VPC_ES20DISABLEVERTEXATTRIBARRAY            (VPG_ES20 + ES20_DISABLEVERTEXATTRIBARRAY)
#define VPC_ES20DRAWARRAYS                          (VPG_ES20 + ES20_DRAWARRAYS)
#define VPC_ES20DRAWELEMENTS                        (VPG_ES20 + ES20_DRAWELEMENTS)
#define VPC_ES20ENABLE                              (VPG_ES20 + ES20_ENABLE)
#define VPC_ES20ENABLEVERTEXATTRIBARRAY             (VPG_ES20 + ES20_ENABLEVERTEXATTRIBARRAY)
#define VPC_ES20FINISH                              (VPG_ES20 + ES20_FINISH)
#define VPC_ES20FLUSH                               (VPG_ES20 + ES20_FLUSH)
#define VPC_ES20FRAMEBUFFERRENDERBUFFER             (VPG_ES20 + ES20_FRAMEBUFFERRENDERBUFFER)
#define VPC_ES20FRAMEBUFFERTEXTURE2D                (VPG_ES20 + ES20_FRAMEBUFFERTEXTURE2D)
#define VPC_ES20FRONTFACE                           (VPG_ES20 + ES20_FRONTFACE)
#define VPC_ES20GENBUFFERS                          (VPG_ES20 + ES20_GENBUFFERS)
#define VPC_ES20GENERATEMIPMAP                      (VPG_ES20 + ES20_GENERATEMIPMAP)
#define VPC_ES20GENFRAMEBUFFERS                     (VPG_ES20 + ES20_GENFRAMEBUFFERS)
#define VPC_ES20GENRENDERBUFFERS                    (VPG_ES20 + ES20_GENRENDERBUFFERS)
#define VPC_ES20GENTEXTURES                         (VPG_ES20 + ES20_GENTEXTURES)
#define VPC_ES20GETACTIVEATTRIB                     (VPG_ES20 + ES20_GETACTIVEATTRIB)
#define VPC_ES20GETACTIVEUNIFORM                    (VPG_ES20 + ES20_GETACTIVEUNIFORM)
#define VPC_ES20GETATTACHEDSHADERS                  (VPG_ES20 + ES20_GETATTACHEDSHADERS)
#define VPC_ES20GETATTRIBLOCATION                   (VPG_ES20 + ES20_GETATTRIBLOCATION)
#define VPC_ES20GETBOOLEANV                         (VPG_ES20 + ES20_GETBOOLEANV)
#define VPC_ES20GETBUFFERPARAMETERIV                (VPG_ES20 + ES20_GETBUFFERPARAMETERIV)
#define VPC_ES20GETERROR                            (VPG_ES20 + ES20_GETERROR)
#define VPC_ES20GETFLOATV                           (VPG_ES20 + ES20_GETFLOATV)
#define VPC_ES20GETFRAMEBUFFERATTACHMENTPARAMETERIV (VPG_ES20 + ES20_GETFRAMEBUFFERATTACHMENTPARAMETERIV)
#define VPC_ES20GETINTEGERV                         (VPG_ES20 + ES20_GETINTEGERV)
#define VPC_ES20GETPROGRAMIV                        (VPG_ES20 + ES20_GETPROGRAMIV)
#define VPC_ES20GETPROGRAMINFOLOG                   (VPG_ES20 + ES20_GETPROGRAMINFOLOG)
#define VPC_ES20GETRENDERBUFFERPARAMETERIV          (VPG_ES20 + ES20_GETRENDERBUFFERPARAMETERIV)
#define VPC_ES20GETSHADERIV                         (VPG_ES20 + ES20_GETSHADERIV)
#define VPC_ES20GETSHADERINFOLOG                    (VPG_ES20 + ES20_GETSHADERINFOLOG)
#define VPC_ES20GETSHADERPRECISIONFORMAT            (VPG_ES20 + ES20_GETSHADERPRECISIONFORMAT)
#define VPC_ES20GETSHADERSOURCE                     (VPG_ES20 + ES20_GETSHADERSOURCE)
#define VPC_ES20GETSTRING                           (VPG_ES20 + ES20_GETSTRING)
#define VPC_ES20GETTEXPARAMETERFV                   (VPG_ES20 + ES20_GETTEXPARAMETERFV)
#define VPC_ES20GETTEXPARAMETERIV                   (VPG_ES20 + ES20_GETTEXPARAMETERIV)
#define VPC_ES20GETUNIFORMFV                        (VPG_ES20 + ES20_GETUNIFORMFV)
#define VPC_ES20GETUNIFORMIV                        (VPG_ES20 + ES20_GETUNIFORMIV)
#define VPC_ES20GETUNIFORMLOCATION                  (VPG_ES20 + ES20_GETUNIFORMLOCATION)
#define VPC_ES20GETVERTEXATTRIBFV                   (VPG_ES20 + ES20_GETVERTEXATTRIBFV)
#define VPC_ES20GETVERTEXATTRIBIV                   (VPG_ES20 + ES20_GETVERTEXATTRIBIV)
#define VPC_ES20GETVERTEXATTRIBPOINTERV             (VPG_ES20 + ES20_GETVERTEXATTRIBPOINTERV)
#define VPC_ES20HINT                                (VPG_ES20 + ES20_HINT)
#define VPC_ES20ISBUFFER                            (VPG_ES20 + ES20_ISBUFFER)
#define VPC_ES20ISENABLED                           (VPG_ES20 + ES20_ISENABLED)
#define VPC_ES20ISFRAMEBUFFER                       (VPG_ES20 + ES20_ISFRAMEBUFFER)
#define VPC_ES20ISPROGRAM                           (VPG_ES20 + ES20_ISPROGRAM)
#define VPC_ES20ISRENDERBUFFER                      (VPG_ES20 + ES20_ISRENDERBUFFER)
#define VPC_ES20ISSHADER                            (VPG_ES20 + ES20_ISSHADER)
#define VPC_ES20ISTEXTURE                           (VPG_ES20 + ES20_ISTEXTURE)
#define VPC_ES20LINEWIDTH                           (VPG_ES20 + ES20_LINEWIDTH)
#define VPC_ES20LINKPROGRAM                         (VPG_ES20 + ES20_LINKPROGRAM)
#define VPC_ES20PIXELSTOREI                         (VPG_ES20 + ES20_PIXELSTOREI)
#define VPC_ES20POLYGONOFFSET                       (VPG_ES20 + ES20_POLYGONOFFSET)
#define VPC_ES20READPIXELS                          (VPG_ES20 + ES20_READPIXELS)
#define VPC_ES20RELEASESHADERCOMPILER               (VPG_ES20 + ES20_RELEASESHADERCOMPILER)
#define VPC_ES20RENDERBUFFERSTORAGE                 (VPG_ES20 + ES20_RENDERBUFFERSTORAGE)
#define VPC_ES20SAMPLECOVERAGE                      (VPG_ES20 + ES20_SAMPLECOVERAGE)
#define VPC_ES20SCISSOR                             (VPG_ES20 + ES20_SCISSOR)
#define VPC_ES20SHADERBINARY                        (VPG_ES20 + ES20_SHADERBINARY)
#define VPC_ES20SHADERSOURCE                        (VPG_ES20 + ES20_SHADERSOURCE)
#define VPC_ES20STENCILFUNC                         (VPG_ES20 + ES20_STENCILFUNC)
#define VPC_ES20STENCILFUNCSEPARATE                 (VPG_ES20 + ES20_STENCILFUNCSEPARATE)
#define VPC_ES20STENCILMASK                         (VPG_ES20 + ES20_STENCILMASK)
#define VPC_ES20STENCILMASKSEPARATE                 (VPG_ES20 + ES20_STENCILMASKSEPARATE)
#define VPC_ES20STENCILOP                           (VPG_ES20 + ES20_STENCILOP)
#define VPC_ES20STENCILOPSEPARATE                   (VPG_ES20 + ES20_STENCILOPSEPARATE)
#define VPC_ES20TEXIMAGE2D                          (VPG_ES20 + ES20_TEXIMAGE2D)
#define VPC_ES20TEXPARAMETERF                       (VPG_ES20 + ES20_TEXPARAMETERF)
#define VPC_ES20TEXPARAMETERFV                      (VPG_ES20 + ES20_TEXPARAMETERFV)
#define VPC_ES20TEXPARAMETERI                       (VPG_ES20 + ES20_TEXPARAMETERI)
#define VPC_ES20TEXPARAMETERIV                      (VPG_ES20 + ES20_TEXPARAMETERIV)
#define VPC_ES20TEXSUBIMAGE2D                       (VPG_ES20 + ES20_TEXSUBIMAGE2D)
#define VPC_ES20UNIFORM1F                           (VPG_ES20 + ES20_UNIFORM1F)
#define VPC_ES20UNIFORM1FV                          (VPG_ES20 + ES20_UNIFORM1FV)
#define VPC_ES20UNIFORM1I                           (VPG_ES20 + ES20_UNIFORM1I)
#define VPC_ES20UNIFORM1IV                          (VPG_ES20 + ES20_UNIFORM1IV)
#define VPC_ES20UNIFORM2F                           (VPG_ES20 + ES20_UNIFORM2F)
#define VPC_ES20UNIFORM2FV                          (VPG_ES20 + ES20_UNIFORM2FV)
#define VPC_ES20UNIFORM2I                           (VPG_ES20 + ES20_UNIFORM2I)
#define VPC_ES20UNIFORM2IV                          (VPG_ES20 + ES20_UNIFORM2IV)
#define VPC_ES20UNIFORM3F                           (VPG_ES20 + ES20_UNIFORM3F)
#define VPC_ES20UNIFORM3FV                          (VPG_ES20 + ES20_UNIFORM3FV)
#define VPC_ES20UNIFORM3I                           (VPG_ES20 + ES20_UNIFORM3I)
#define VPC_ES20UNIFORM3IV                          (VPG_ES20 + ES20_UNIFORM3IV)
#define VPC_ES20UNIFORM4F                           (VPG_ES20 + ES20_UNIFORM4F)
#define VPC_ES20UNIFORM4FV                          (VPG_ES20 + ES20_UNIFORM4FV)
#define VPC_ES20UNIFORM4I                           (VPG_ES20 + ES20_UNIFORM4I)
#define VPC_ES20UNIFORM4IV                          (VPG_ES20 + ES20_UNIFORM4IV)
#define VPC_ES20UNIFORMMATRIX2FV                    (VPG_ES20 + ES20_UNIFORMMATRIX2FV)
#define VPC_ES20UNIFORMMATRIX3FV                    (VPG_ES20 + ES20_UNIFORMMATRIX3FV)
#define VPC_ES20UNIFORMMATRIX4FV                    (VPG_ES20 + ES20_UNIFORMMATRIX4FV)
#define VPC_ES20USEPROGRAM                          (VPG_ES20 + ES20_USEPROGRAM)
#define VPC_ES20VALIDATEPROGRAM                     (VPG_ES20 + ES20_VALIDATEPROGRAM)
#define VPC_ES20VERTEXATTRIB1F                      (VPG_ES20 + ES20_VERTEXATTRIB1F)
#define VPC_ES20VERTEXATTRIB1FV                     (VPG_ES20 + ES20_VERTEXATTRIB1FV)
#define VPC_ES20VERTEXATTRIB2F                      (VPG_ES20 + ES20_VERTEXATTRIB2F)
#define VPC_ES20VERTEXATTRIB2FV                     (VPG_ES20 + ES20_VERTEXATTRIB2FV)
#define VPC_ES20VERTEXATTRIB3F                      (VPG_ES20 + ES20_VERTEXATTRIB3F)
#define VPC_ES20VERTEXATTRIB3FV                     (VPG_ES20 + ES20_VERTEXATTRIB3FV)
#define VPC_ES20VERTEXATTRIB4F                      (VPG_ES20 + ES20_VERTEXATTRIB4F)
#define VPC_ES20VERTEXATTRIB4FV                     (VPG_ES20 + ES20_VERTEXATTRIB4FV)
#define VPC_ES20VERTEXATTRIBPOINTER                 (VPG_ES20 + ES20_VERTEXATTRIBPOINTER)
#define VPC_ES20VIEWPORT                            (VPG_ES20 + ES20_VIEWPORT)
/* OpenGL ES20 Statistics Counter IDs. */
#define VPC_ES20CALLS                               (VPG_ES20 + ES20_CALLS)
#define VPC_ES20DRAWCALLS                           (VPG_ES20 + ES20_DRAWCALLS)
#define VPC_ES20STATECHANGECALLS                    (VPG_ES20 + ES20_STATECHANGECALLS)
#define VPC_ES20POINTCOUNT                          (VPG_ES20 + ES20_POINTCOUNT)
#define VPC_ES20LINECOUNT                           (VPG_ES20 + ES20_LINECOUNT)
#define VPC_ES20TRIANGLECOUNT                       (VPG_ES20 + ES20_TRIANGLECOUNT)

/* VG11 Counters. */
#define VPC_VG11APPENDPATH              (VPG_VG11 + VG11_APPENDPATH)
#define VPC_VG11APPENDPATHDATA          (VPG_VG11 + VG11_APPENDPATHDATA)
#define VPC_VG11CHILDIMAGE              (VPG_VG11 + VG11_CHILDIMAGE)
#define VPC_VG11CLEAR                   (VPG_VG11 + VG11_CLEAR)
#define VPC_VG11CLEARGLYPH              (VPG_VG11 + VG11_CLEARGLYPH)
#define VPC_VG11CLEARIMAGE              (VPG_VG11 + VG11_CLEARIMAGE)
#define VPC_VG11CLEARPATH               (VPG_VG11 + VG11_CLEARPATH)
#define VPC_VG11COLORMATRIX             (VPG_VG11 + VG11_COLORMATRIX)
#define VPC_VG11CONVOLVE                (VPG_VG11 + VG11_CONVOLVE)
#define VPC_VG11COPYIMAGE               (VPG_VG11 + VG11_COPYIMAGE)
#define VPC_VG11COPYMASK                (VPG_VG11 + VG11_COPYMASK)
#define VPC_VG11COPYPIXELS              (VPG_VG11 + VG11_COPYPIXELS)
#define VPC_VG11CREATEFONT              (VPG_VG11 + VG11_CREATEFONT)
#define VPC_VG11CREATEIMAGE             (VPG_VG11 + VG11_CREATEIMAGE)
#define VPC_VG11CREATEMASKLAYER         (VPG_VG11 + VG11_CREATEMASKLAYER)
#define VPC_VG11CREATEPAINT             (VPG_VG11 + VG11_CREATEPAINT)
#define VPC_VG11CREATEPATH              (VPG_VG11 + VG11_CREATEPATH)
#define VPC_VG11DESTROYFONT             (VPG_VG11 + VG11_DESTROYFONT)
#define VPC_VG11DESTROYIMAGE            (VPG_VG11 + VG11_DESTROYIMAGE)
#define VPC_VG11DESTROYMASKLAYER        (VPG_VG11 + VG11_DESTROYMASKLAYER)
#define VPC_VG11DESTROYPAINT            (VPG_VG11 + VG11_DESTROYPAINT)
#define VPC_VG11DESTROYPATH             (VPG_VG11 + VG11_DESTROYPATH)
#define VPC_VG11DRAWGLYPH               (VPG_VG11 + VG11_DRAWGLYPH)
#define VPC_VG11DRAWGLYPHS              (VPG_VG11 + VG11_DRAWGLYPHS)
#define VPC_VG11DRAWIMAGE               (VPG_VG11 + VG11_DRAWIMAGE)
#define VPC_VG11DRAWPATH                (VPG_VG11 + VG11_DRAWPATH)
#define VPC_VG11FILLMASKLAYER           (VPG_VG11 + VG11_FILLMASKLAYER)
#define VPC_VG11FINISH                  (VPG_VG11 + VG11_FINISH)
#define VPC_VG11FLUSH                   (VPG_VG11 + VG11_FLUSH)
#define VPC_VG11GAUSSIANBLUR            (VPG_VG11 + VG11_GAUSSIANBLUR)
#define VPC_VG11GETCOLOR                (VPG_VG11 + VG11_GETCOLOR)
#define VPC_VG11GETERROR                (VPG_VG11 + VG11_GETERROR)
#define VPC_VG11GETF                    (VPG_VG11 + VG11_GETF)
#define VPC_VG11GETFV                   (VPG_VG11 + VG11_GETFV)
#define VPC_VG11GETI                    (VPG_VG11 + VG11_GETI)
#define VPC_VG11GETIMAGESUBDATA         (VPG_VG11 + VG11_GETIMAGESUBDATA)
#define VPC_VG11GETIV                   (VPG_VG11 + VG11_GETIV)
#define VPC_VG11GETMATRIX               (VPG_VG11 + VG11_GETMATRIX)
#define VPC_VG11GETPAINT                (VPG_VG11 + VG11_GETPAINT)
#define VPC_VG11GETPARAMETERF           (VPG_VG11 + VG11_GETPARAMETERF)
#define VPC_VG11GETPARAMETERFV          (VPG_VG11 + VG11_GETPARAMETERFV)
#define VPC_VG11GETPARAMETERI           (VPG_VG11 + VG11_GETPARAMETERI)
#define VPC_VG11GETPARAMETERIV          (VPG_VG11 + VG11_GETPARAMETERIV)
#define VPC_VG11GETPARAMETERVECTORSIZE  (VPG_VG11 + VG11_GETPARAMETERVECTORSIZE)
#define VPC_VG11GETPARENT               (VPG_VG11 + VG11_GETPARENT)
#define VPC_VG11GETPATHCAPABILITIES     (VPG_VG11 + VG11_GETPATHCAPABILITIES)
#define VPC_VG11GETPIXELS               (VPG_VG11 + VG11_GETPIXELS)
#define VPC_VG11GETSTRING               (VPG_VG11 + VG11_GETSTRING)
#define VPC_VG11GETVECTORSIZE           (VPG_VG11 + VG11_GETVECTORSIZE)
#define VPC_VG11HARDWAREQUERY           (VPG_VG11 + VG11_HARDWAREQUERY)
#define VPC_VG11IMAGESUBDATA            (VPG_VG11 + VG11_IMAGESUBDATA)
#define VPC_VG11INTERPOLATEPATH         (VPG_VG11 + VG11_INTERPOLATEPATH)
#define VPC_VG11LOADIDENTITY            (VPG_VG11 + VG11_LOADIDENTITY)
#define VPC_VG11LOADMATRIX              (VPG_VG11 + VG11_LOADMATRIX)
#define VPC_VG11LOOKUP                  (VPG_VG11 + VG11_LOOKUP)
#define VPC_VG11LOOKUPSINGLE            (VPG_VG11 + VG11_LOOKUPSINGLE)
#define VPC_VG11MASK                    (VPG_VG11 + VG11_MASK)
#define VPC_VG11MODIFYPATHCOORDS        (VPG_VG11 + VG11_MODIFYPATHCOORDS)
#define VPC_VG11MULTMATRIX              (VPG_VG11 + VG11_MULTMATRIX)
#define VPC_VG11PAINTPATTERN            (VPG_VG11 + VG11_PAINTPATTERN)
#define VPC_VG11PATHBOUNDS              (VPG_VG11 + VG11_PATHBOUNDS)
#define VPC_VG11PATHLENGTH              (VPG_VG11 + VG11_PATHLENGTH)
#define VPC_VG11PATHTRANSFORMEDBOUNDS   (VPG_VG11 + VG11_PATHTRANSFORMEDBOUNDS)
#define VPC_VG11POINTALONGPATH          (VPG_VG11 + VG11_POINTALONGPATH)
#define VPC_VG11READPIXELS              (VPG_VG11 + VG11_READPIXELS)
#define VPC_VG11REMOVEPATHCAPABILITIES  (VPG_VG11 + VG11_REMOVEPATHCAPABILITIES)
#define VPC_VG11RENDERTOMASK            (VPG_VG11 + VG11_RENDERTOMASK)
#define VPC_VG11ROTATE                  (VPG_VG11 + VG11_ROTATE)
#define VPC_VG11SCALE                   (VPG_VG11 + VG11_SCALE)
#define VPC_VG11SEPARABLECONVOLVE       (VPG_VG11 + VG11_SEPARABLECONVOLVE)
#define VPC_VG11SETCOLOR                (VPG_VG11 + VG11_SETCOLOR)
#define VPC_VG11SETF                    (VPG_VG11 + VG11_SETF)
#define VPC_VG11SETFV                   (VPG_VG11 + VG11_SETFV)
#define VPC_VG11SETGLYPHTOIMAGE         (VPG_VG11 + VG11_SETGLYPHTOIMAGE)
#define VPC_VG11SETGLYPHTOPATH          (VPG_VG11 + VG11_SETGLYPHTOPATH)
#define VPC_VG11SETI                    (VPG_VG11 + VG11_SETI)
#define VPC_VG11SETIV                   (VPG_VG11 + VG11_SETIV)
#define VPC_VG11SETPAINT                (VPG_VG11 + VG11_SETPAINT)
#define VPC_VG11SETPARAMETERF           (VPG_VG11 + VG11_SETPARAMETERF)
#define VPC_VG11SETPARAMETERFV          (VPG_VG11 + VG11_SETPARAMETERFV)
#define VPC_VG11SETPARAMETERI           (VPG_VG11 + VG11_SETPARAMETERI)
#define VPC_VG11SETPARAMETERIV          (VPG_VG11 + VG11_SETPARAMETERIV)
#define VPC_VG11SETPIXELS               (VPG_VG11 + VG11_SETPIXELS)
#define VPC_VG11SHEAR                   (VPG_VG11 + VG11_SHEAR)
#define VPC_VG11TRANSFORMPATH           (VPG_VG11 + VG11_TRANSFORMPATH)
#define VPC_VG11TRANSLATE               (VPG_VG11 + VG11_TRANSLATE)
#define VPC_VG11WRITEPIXELS             (VPG_VG11 + VG11_WRITEPIXELS)
/* OpenVG Statistics Counter IDs. */
#define VPC_VG11CALLS                   (VPG_VG11 + VG11_CALLS)
#define VPC_VG11DRAWCALLS               (VPG_VG11 + VG11_DRAWCALLS)
#define VPC_VG11STATECHANGECALLS        (VPG_VG11 + VG11_STATECHANGECALLS)
#define VPC_VG11FILLCOUNT               (VPG_VG11 + VG11_FILLCOUNT)
#define VPC_VG11STROKECOUNT             (VPG_VG11 + VG11_STROKECOUNT)

/* HAL Counters. */
#define VPC_HALVERTBUFNEWBYTEALLOC      (VPG_HAL + HAL_VERTBUFNEWBYTEALLOC)
#define VPC_HALVERTBUFTOTALBYTEALLOC    (VPG_HAL + HAL_VERTBUFTOTALBYTEALLOC)
#define VPC_HALVERTBUFNEWOBJALLOC       (VPG_HAL + HAL_VERTBUFNEWOBJALLOC)
#define VPC_HALVERTBUFTOTALOBJALLOC     (VPG_HAL + HAL_VERTBUFTOTALOBJALLOC)
#define VPC_HALINDBUFNEWBYTEALLOC       (VPG_HAL + HAL_INDBUFNEWBYTEALLOC)
#define VPC_HALINDBUFTOTALBYTEALLOC     (VPG_HAL + HAL_INDBUFTOTALBYTEALLOC)
#define VPC_HALINDBUFNEWOBJALLOC        (VPG_HAL + HAL_INDBUFNEWOBJALLOC)
#define VPC_HALINDBUFTOTALOBJALLOC      (VPG_HAL + HAL_INDBUFTOTALOBJALLOC)
#define VPC_HALTEXBUFNEWBYTEALLOC       (VPG_HAL + HAL_TEXBUFNEWBYTEALLOC)
#define VPC_HALTEXBUFTOTALBYTEALLOC     (VPG_HAL + HAL_TEXBUFTOTALBYTEALLOC)
#define VPC_HALTEXBUFNEWOBJALLOC        (VPG_HAL + HAL_TEXBUFNEWOBJALLOC)
#define VPC_HALTEXBUFTOTALOBJALLOC      (VPG_HAL + HAL_TEXBUFTOTALOBJALLOC)

/* HW: GPU Counters. */
#define VPC_GPUCYCLES                   (VPG_GPU + GPU_CYCLES)
#define VPC_GPUREAD64BYTE               (VPG_GPU + GPU_READ64BYTE)
#define VPC_GPUWRITE64BYTE              (VPG_GPU + GPU_WRITE64BYTE)
#define VPC_GPUTOTALCYCLES              (VPG_GPU + GPU_TOTALCYCLES)
#define VPC_GPUIDLECYCLES              (VPG_GPU + GPU_IDLECYCLES)

/* HW: Shader Counters. */
#define VPC_VSINSTCOUNT                 (VPG_VS + VS_INSTCOUNT)
#define VPC_VSBRANCHINSTCOUNT           (VPG_VS + VS_BRANCHINSTCOUNT)
#define VPC_VSTEXLDINSTCOUNT            (VPG_VS + VS_TEXLDINSTCOUNT)
#define VPC_VSRENDEREDVERTCOUNT         (VPG_VS + VS_RENDEREDVERTCOUNT)
/* HW: PS Count. */
#define VPC_PSINSTCOUNT                 (VPG_PS + PS_INSTCOUNT)
#define VPC_PSBRANCHINSTCOUNT           (VPG_PS + PS_BRANCHINSTCOUNT)
#define VPC_PSTEXLDINSTCOUNT            (VPG_PS + PS_TEXLDINSTCOUNT)
#define VPC_PSRENDEREDPIXCOUNT          (VPG_PS + PS_RENDEREDPIXCOUNT)


/* HW: PA Counters. */
#define VPC_PAINVERTCOUNT               (VPG_PA + PA_INVERTCOUNT)
#define VPC_PAINPRIMCOUNT               (VPG_PA + PA_INPRIMCOUNT)
#define VPC_PAOUTPRIMCOUNT              (VPG_PA + PA_OUTPRIMCOUNT)
#define VPC_PADEPTHCLIPCOUNT            (VPG_PA + PA_DEPTHCLIPCOUNT)
#define VPC_PATRIVIALREJCOUNT           (VPG_PA + PA_TRIVIALREJCOUNT)
#define VPC_PACULLCOUNT                 (VPG_PA + PA_CULLCOUNT)

/* HW: Setup Counters. */
#define VPC_SETRIANGLECOUNT             (VPG_SETUP + SE_TRIANGLECOUNT)
#define VPC_SELINECOUNT                 (VPG_SETUP + SE_LINECOUNT)

/* HW: RA Counters. */
#define VPC_RAVALIDPIXCOUNT             (VPG_RA + RA_VALIDPIXCOUNT)
#define VPC_RATOTALQUADCOUNT            (VPG_RA + RA_TOTALQUADCOUNT)
#define VPC_RAVALIDQUADCOUNTEZ          (VPG_RA + RA_VALIDQUADCOUNTEZ)
#define VPC_RATOTALPRIMCOUNT            (VPG_RA + RA_TOTALPRIMCOUNT)
#define VPC_RAPIPECACHEMISSCOUNT        (VPG_RA + RA_PIPECACHEMISSCOUNT)
#define VPC_RAPREFCACHEMISSCOUNT        (VPG_RA + RA_PREFCACHEMISSCOUNT)
#define VPC_RAEEZCULLCOUNT              (VPG_RA + RA_EEZCULLCOUNT)

/* HW: TEX Counters. */
#define VPC_TXTOTBILINEARREQ            (VPG_TX + TX_TOTBILINEARREQ)
#define VPC_TXTOTTRILINEARREQ           (VPG_TX + TX_TOTTRILINEARREQ)
#define VPC_TXTOTDISCARDTEXREQ          (VPG_TX + TX_TOTDISCARDTEXREQ)
#define VPC_TXTOTTEXREQ                 (VPG_TX + TX_TOTTEXREQ)
#define VPC_TXMEMREADCOUNT              (VPG_TX + TX_MEMREADCOUNT)
#define VPC_TXMEMREADIN8BCOUNT          (VPG_TX + TX_MEMREADIN8BCOUNT)
#define VPC_TXCACHEMISSCOUNT            (VPG_TX + TX_CACHEMISSCOUNT)
#define VPC_TXCACHEHITTEXELCOUNT        (VPG_TX + TX_CACHEHITTEXELCOUNT)
#define VPC_TXCACHEMISSTEXELCOUNT       (VPG_TX + TX_CACHEMISSTEXELCOUNT)

/* HW: PE Counters. */
#define VPC_PEKILLEDBYCOLOR             (VPG_PE + PE_KILLEDBYCOLOR)
#define VPC_PEKILLEDBYDEPTH             (VPG_PE + PE_KILLEDBYDEPTH)
#define VPC_PEDRAWNBYCOLOR              (VPG_PE + PE_DRAWNBYCOLOR)
#define VPC_PEDRAWNBYDEPTH              (VPG_PE + PE_DRAWNBYDEPTH)

/* HW: MC Counters. */
#define VPC_MCREADREQ8BPIPE             (VPG_MC + MC_READREQ8BPIPE)
#define VPC_MCREADREQ8BIP               (VPG_MC + MC_READREQ8BIP)
#define VPC_MCWRITEREQ8BPIPE            (VPG_MC + MC_WRITEREQ8BPIPE)

/* HW: AXI Counters. */
#define VPC_AXIREADREQSTALLED           (VPG_AXI + AXI_READREQSTALLED)
#define VPC_AXIWRITEREQSTALLED          (VPG_AXI + AXI_WRITEREQSTALLED)
#define VPC_AXIWRITEDATASTALLED         (VPG_AXI + AXI_WRITEDATASTALLED)

/* PROGRAM: Shader program counters. */
#define VPC_PVSINSTRCOUNT           (VPG_PVS + PVS_INSTRCOUNT)
#define VPC_PVSALUINSTRCOUNT        (VPG_PVS + PVS_ALUINSTRCOUNT)
#define VPC_PVSTEXINSTRCOUNT        (VPG_PVS + PVS_TEXINSTRCOUNT)
#define VPC_PVSATTRIBCOUNT          (VPG_PVS + PVS_ATTRIBCOUNT)
#define VPC_PVSUNIFORMCOUNT         (VPG_PVS + PVS_UNIFORMCOUNT)
#define VPC_PVSFUNCTIONCOUNT        (VPG_PVS + PVS_FUNCTIONCOUNT)

#define VPC_PPSINSTRCOUNT           (VPG_PPS + PPS_INSTRCOUNT)
#define VPC_PPSALUINSTRCOUNT        (VPG_PPS + PPS_ALUINSTRCOUNT)
#define VPC_PPSTEXINSTRCOUNT        (VPG_PPS + PPS_TEXINSTRCOUNT)
#define VPC_PPSATTRIBCOUNT          (VPG_PPS + PPS_ATTRIBCOUNT)
#define VPC_PPSUNIFORMCOUNT         (VPG_PPS + PPS_UNIFORMCOUNT)
#define VPC_PPSFUNCTIONCOUNT        (VPG_PPS + PPS_FUNCTIONCOUNT)


#define VPG_ES20_DRAW_NO  (VPG_ES20_DRAW + 1)
#define VPG_ES11_DRAW_NO  (VPG_ES11_DRAW + 1)

#define VPG_FRAME_USEVBO (VPG_FRAME + 1)

#endif


/* HW profile information. */
typedef struct _gcsPROFILER_COUNTERS
{
    /* HW static counters. */
    gctUINT32       gpuClock;
    gctUINT32       axiClock;
    gctUINT32       shaderClock;

    /* HW vairable counters. */
    gctUINT32       gpuClockStart;
    gctUINT32       gpuClockEnd;

    /* HW vairable counters. */
    gctUINT32       gpuCyclesCounter;
    gctUINT32       gpuTotalCyclesCounter;
    gctUINT32       gpuIdleCyclesCounter;
    gctUINT32       gpuTotalRead64BytesPerFrame;
    gctUINT32       gpuTotalWrite64BytesPerFrame;

    /* PE */
    gctUINT32       pe_pixel_count_killed_by_color_pipe;
    gctUINT32       pe_pixel_count_killed_by_depth_pipe;
    gctUINT32       pe_pixel_count_drawn_by_color_pipe;
    gctUINT32       pe_pixel_count_drawn_by_depth_pipe;

    /* SH */
    gctUINT32       ps_inst_counter;
    gctUINT32       rendered_pixel_counter;
    gctUINT32       vs_inst_counter;
    gctUINT32       rendered_vertice_counter;
    gctUINT32       vtx_branch_inst_counter;
    gctUINT32       vtx_texld_inst_counter;
    gctUINT32       pxl_branch_inst_counter;
    gctUINT32       pxl_texld_inst_counter;

    /* PA */
    gctUINT32       pa_input_vtx_counter;
    gctUINT32       pa_input_prim_counter;
    gctUINT32       pa_output_prim_counter;
    gctUINT32       pa_depth_clipped_counter;
    gctUINT32       pa_trivial_rejected_counter;
    gctUINT32       pa_culled_counter;

    /* SE */
    gctUINT32       se_culled_triangle_count;
    gctUINT32       se_culled_lines_count;

    /* RA */
    gctUINT32       ra_valid_pixel_count;
    gctUINT32       ra_total_quad_count;
    gctUINT32       ra_valid_quad_count_after_early_z;
    gctUINT32       ra_total_primitive_count;
    gctUINT32       ra_pipe_cache_miss_counter;
    gctUINT32       ra_prefetch_cache_miss_counter;
    gctUINT32       ra_eez_culled_counter;

    /* TX */
    gctUINT32       tx_total_bilinear_requests;
    gctUINT32       tx_total_trilinear_requests;
    gctUINT32       tx_total_discarded_texture_requests;
    gctUINT32       tx_total_texture_requests;
    gctUINT32       tx_mem_read_count;
    gctUINT32       tx_mem_read_in_8B_count;
    gctUINT32       tx_cache_miss_count;
    gctUINT32       tx_cache_hit_texel_count;
    gctUINT32       tx_cache_miss_texel_count;

    /* MC */
    gctUINT32       mc_total_read_req_8B_from_pipeline;
    gctUINT32       mc_total_read_req_8B_from_IP;
    gctUINT32       mc_total_write_req_8B_from_pipeline;

    /* HI */
    gctUINT32       hi_axi_cycles_read_request_stalled;
    gctUINT32       hi_axi_cycles_write_request_stalled;
    gctUINT32       hi_axi_cycles_write_data_stalled;
}
gcsPROFILER_COUNTERS;

/* HAL profile information. */
typedef struct _gcsPROFILER
{
    gctUINT32       enable;
    gctBOOL         enableHal;
    gctBOOL         enableHW;
    gctBOOL         enableSH;
    gctBOOL         isSyncMode;

    gctBOOL         useSocket;
    gctINT          sockFd;

    gctFILE         file;

    /* Aggregate Information */

    /* Clock Info */
    gctUINT64       frameStart;
    gctUINT64       frameEnd;

    /* Current frame information */
    gctUINT32       frameNumber;
    gctUINT64       frameStartTimeusec;
    gctUINT64       frameEndTimeusec;
    gctUINT64       frameStartCPUTimeusec;
    gctUINT64       frameEndCPUTimeusec;

#if PROFILE_HAL_COUNTERS
    gctUINT32       vertexBufferTotalBytesAlloc;
    gctUINT32       vertexBufferNewBytesAlloc;
    int             vertexBufferTotalObjectsAlloc;
    int             vertexBufferNewObjectsAlloc;

    gctUINT32       indexBufferTotalBytesAlloc;
    gctUINT32       indexBufferNewBytesAlloc;
    int             indexBufferTotalObjectsAlloc;
    int             indexBufferNewObjectsAlloc;

    gctUINT32       textureBufferTotalBytesAlloc;
    gctUINT32       textureBufferNewBytesAlloc;
    int             textureBufferTotalObjectsAlloc;
    int             textureBufferNewObjectsAlloc;

    gctUINT32       numCommits;
    gctUINT32       drawPointCount;
    gctUINT32       drawLineCount;
    gctUINT32       drawTriangleCount;
    gctUINT32       drawVertexCount;
    gctUINT32       redundantStateChangeCalls;
#endif

    gctUINT32       prevVSInstCount;
    gctUINT32       prevVSBranchInstCount;
    gctUINT32       prevVSTexInstCount;
    gctUINT32       prevVSVertexCount;
    gctUINT32       prevPSInstCount;
    gctUINT32       prevPSBranchInstCount;
    gctUINT32       prevPSTexInstCount;
    gctUINT32       prevPSPixelCount;

}
gcsPROFILER;

/* Memory profile information. */
struct _gcsMemProfile
{
    /* Memory Usage */
    gctUINT32       videoMemUsed;
    gctUINT32       systemMemUsed;
    gctUINT32       commitBufferSize;
    gctUINT32       contextBufferCopyBytes;
};

/* Shader profile information. */
struct _gcsSHADER_PROFILER
{
    gctUINT32       shaderLength;
    gctUINT32       shaderALUCycles;
    gctUINT32       shaderTexLoadCycles;
    gctUINT32       shaderTempRegCount;
    gctUINT32       shaderSamplerRegCount;
    gctUINT32       shaderInputRegCount;
    gctUINT32       shaderOutputRegCount;
};

/* Initialize the gcsProfiler. */
gceSTATUS
gcoPROFILER_Initialize(
    IN gcoHAL Hal
    );

/* Destroy the gcProfiler. */
gceSTATUS
gcoPROFILER_Destroy(
    IN gcoHAL Hal
    );

/* Write data to profiler. */
gceSTATUS
gcoPROFILER_Write(
    IN gcoHAL Hal,
    IN gctSIZE_T ByteCount,
    IN gctCONST_POINTER Data
    );

/* Flush data out. */
gceSTATUS
gcoPROFILER_Flush(
    IN gcoHAL Hal
    );

/* Call to signal end of frame. */
gceSTATUS
gcoPROFILER_EndFrame(
    IN gcoHAL Hal
    );

/* Call to signal end of draw. */
gceSTATUS
gcoPROFILER_EndDraw(
    IN gcoHAL Hal,
    IN gctBOOL FirstDraw
    );

/* Increase profile counter Enum by Value. */
gceSTATUS
gcoPROFILER_Count(
    IN gcoHAL Hal,
    IN gctUINT32 Enum,
    IN gctINT Value
    );

/* Profile input vertex shader. */
gceSTATUS
gcoPROFILER_ShaderVS(
    IN gcoHAL Hal,
    IN gctPOINTER Vs
    );

/* Profile input fragment shader. */
gceSTATUS
gcoPROFILER_ShaderFS(
    IN gcoHAL Hal,
    IN gctPOINTER Fs
    );

#ifdef __cplusplus
}
#endif

#endif /* __gc_hal_profiler_h_ */
