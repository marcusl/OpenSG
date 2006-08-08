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


#ifndef _OSGLINECHUNKFIELDS_H_
#define _OSGLINECHUNKFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGStateDef.h"

#include "OSGStateChunkFields.h"

#include "OSGSFieldAdaptor.h"
#include "OSGMFieldAdaptor.h"


OSG_BEGIN_NAMESPACE

class LineChunk;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! LineChunkPtr

typedef PointerFwdBuilder<StateChunkPtr, 
                          StateChunkConstPtr,
                          LineChunk>::ObjPtr         LineChunkPtr;
typedef PointerFwdBuilder<StateChunkPtr, 
                          StateChunkConstPtr,
                          LineChunk>::ObjPtrConst    LineChunkPtrConst;
typedef PointerFwdBuilder<StateChunkPtr, 
                          StateChunkConstPtr,
                          LineChunk>::ObjConstPtr    LineChunkConstPtr;
typedef PointerFwdBuilder<StateChunkPtr, 
                          StateChunkConstPtr,
                          LineChunk>::ObjPtrArg      LineChunkPtrArg;
typedef PointerFwdBuilder<StateChunkPtr, 
                          StateChunkConstPtr,
                          LineChunk>::ObjConstPtrArg LineChunkConstPtrArg;
typedef PointerFwdBuilder<StateChunkPtr, 
                          StateChunkConstPtr,
                          LineChunk>::ObjPtrConstArg LineChunkPtrConstArg;

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpStateFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<LineChunkPtr> : 
    public FieldTraitsTemplateBase<LineChunkPtr>
{
  private:

    static DataType             _type;                       

  public:

    typedef FieldTraits<LineChunkPtr>  Self;

    enum                        { StringConvertable = 0x00 };

    static OSG_STATE_DLLMAPPING 
                     DataType &getType (void);

    static const char *getSName(void) { return "SFLineChunkPtr"; }
    static const char *getMName(void) { return "MFLineChunkPtr"; }
};

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<LineChunkPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpStateFieldSingle */

typedef SFieldAdaptor<LineChunkPtr, SFFieldContainerPtr> SFLineChunkPtr;
#endif

#ifndef OSG_COMPILELINECHUNKINST
OSG_FIELD_DLLEXPORT_DECL1(SField, LineChunkPtr, OSG_STATE_DLLTMPLMAPPING)
#endif

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpStateFieldMulti */

typedef MFieldAdaptor<LineChunkPtr, MFFieldContainerPtr> MFLineChunkPtr;
#endif

#ifndef OSG_COMPILELINECHUNKINST
OSG_FIELD_DLLEXPORT_DECL1(MField, LineChunkPtr, OSG_STATE_DLLTMPLMAPPING)
#endif

OSG_END_NAMESPACE

#define OSGLINECHUNKFIELDS_HEADER_CVSID "@(#)$Id: $"

#endif /* _OSGLINECHUNKFIELDS_H_ */
