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


#ifndef _OSGTEXTUREGRABBACKGROUNDFIELDS_H_
#define _OSGTEXTUREGRABBACKGROUNDFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGWindowDef.h"

#include "OSGSolidBackgroundFields.h"

#include "OSGSFieldAdaptor.h"
#include "OSGMFieldAdaptor.h"


OSG_BEGIN_NAMESPACE

class TextureGrabBackground;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! TextureGrabBackgroundPtr

typedef PointerFwdBuilder<SolidBackgroundPtr, 
                          SolidBackgroundConstPtr,
                          TextureGrabBackground>::ObjPtr         TextureGrabBackgroundPtr;
typedef PointerFwdBuilder<SolidBackgroundPtr, 
                          SolidBackgroundConstPtr,
                          TextureGrabBackground>::ObjPtrConst    TextureGrabBackgroundPtrConst;
typedef PointerFwdBuilder<SolidBackgroundPtr, 
                          SolidBackgroundConstPtr,
                          TextureGrabBackground>::ObjConstPtr    TextureGrabBackgroundConstPtr;
typedef PointerFwdBuilder<SolidBackgroundPtr, 
                          SolidBackgroundConstPtr,
                          TextureGrabBackground>::ObjPtrArg      TextureGrabBackgroundPtrArg;
typedef PointerFwdBuilder<SolidBackgroundPtr, 
                          SolidBackgroundConstPtr,
                          TextureGrabBackground>::ObjConstPtrArg TextureGrabBackgroundConstPtrArg;
typedef PointerFwdBuilder<SolidBackgroundPtr, 
                          SolidBackgroundConstPtr,
                          TextureGrabBackground>::ObjPtrConstArg TextureGrabBackgroundPtrConstArg;

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpWindowFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<TextureGrabBackgroundPtr> : 
    public FieldTraitsTemplateBase<TextureGrabBackgroundPtr>
{
  private:

    static DataType             _type;                       

  public:

    typedef FieldTraits<TextureGrabBackgroundPtr>  Self;

    enum                        { StringConvertable = 0x00 };
};

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<TextureGrabBackgroundPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)



OSG_END_NAMESPACE

#define OSGTEXTUREGRABBACKGROUNDFIELDS_HEADER_CVSID "@(#)$Id: $"

#endif /* _OSGTEXTUREGRABBACKGROUNDFIELDS_H_ */
