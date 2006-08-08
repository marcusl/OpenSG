/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTEXTURECHUNKFIELDS_H_
#define _OSGTEXTURECHUNKFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGStateChunkFields.h"

#include "OSGSFieldAdaptor.h"
#include "OSGMFieldAdaptor.h"


OSG_BEGIN_NAMESPACE

class TextureChunk;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! TextureChunkPtr

typedef PointerFwdBuilder<StateChunkPtr, 
                          StateChunkConstPtr,
                          TextureChunk>::ObjPtr         TextureChunkPtr;
typedef PointerFwdBuilder<StateChunkPtr, 
                          StateChunkConstPtr,
                          TextureChunk>::ObjPtrConst    TextureChunkPtrConst;
typedef PointerFwdBuilder<StateChunkPtr, 
                          StateChunkConstPtr,
                          TextureChunk>::ObjConstPtr    TextureChunkConstPtr;
typedef PointerFwdBuilder<StateChunkPtr, 
                          StateChunkConstPtr,
                          TextureChunk>::ObjPtrArg      TextureChunkPtrArg;
typedef PointerFwdBuilder<StateChunkPtr, 
                          StateChunkConstPtr,
                          TextureChunk>::ObjConstPtrArg TextureChunkConstPtrArg;
typedef PointerFwdBuilder<StateChunkPtr, 
                          StateChunkConstPtr,
                          TextureChunk>::ObjPtrConstArg TextureChunkPtrConstArg;

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpSystemFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<TextureChunkPtr> : 
    public FieldTraitsTemplateBase<TextureChunkPtr>
{
  private:

    static DataType             _type;                       

  public:

    typedef FieldTraits<TextureChunkPtr>  Self;

    enum                        { StringConvertable = 0x00 };

    static OSG_SYSTEM_DLLMAPPING 
                     DataType &getType (void);

    static const char *getSName(void) { return "SFTextureChunkPtr"; }
    static const char *getMName(void) { return "MFTextureChunkPtr"; }
};

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<TextureChunkPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpSystemFieldSingle */

typedef SFieldAdaptor<TextureChunkPtr, SFFieldContainerPtr> SFTextureChunkPtr;
#endif

#ifndef OSG_COMPILETEXTURECHUNKINST
OSG_FIELD_DLLEXPORT_DECL1(SField, TextureChunkPtr, OSG_SYSTEM_DLLTMPLMAPPING)
#endif

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpSystemFieldMulti */

typedef MFieldAdaptor<TextureChunkPtr, MFFieldContainerPtr> MFTextureChunkPtr;
#endif

#ifndef OSG_COMPILETEXTURECHUNKINST
OSG_FIELD_DLLEXPORT_DECL1(MField, TextureChunkPtr, OSG_SYSTEM_DLLTMPLMAPPING)
#endif

OSG_END_NAMESPACE

#define OSGTEXTURECHUNKFIELDS_HEADER_CVSID "@(#)$Id: $"

#endif /* _OSGTEXTURECHUNKFIELDS_H_ */
