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


#ifndef _OSGSWITCHMATERIALFIELDS_H_
#define _OSGSWITCHMATERIALFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGMaterialFields.h"

#include "OSGSFieldAdaptor.h"
#include "OSGMFieldAdaptor.h"


OSG_BEGIN_NAMESPACE

class SwitchMaterial;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! SwitchMaterialPtr

typedef PointerFwdBuilder<MaterialPtr, 
                          MaterialConstPtr,
                          SwitchMaterial>::ObjPtr         SwitchMaterialPtr;
typedef PointerFwdBuilder<MaterialPtr, 
                          MaterialConstPtr,
                          SwitchMaterial>::ObjPtrConst    SwitchMaterialPtrConst;
typedef PointerFwdBuilder<MaterialPtr, 
                          MaterialConstPtr,
                          SwitchMaterial>::ObjConstPtr    SwitchMaterialConstPtr;
typedef PointerFwdBuilder<MaterialPtr, 
                          MaterialConstPtr,
                          SwitchMaterial>::ObjPtrArg      SwitchMaterialPtrArg;
typedef PointerFwdBuilder<MaterialPtr, 
                          MaterialConstPtr,
                          SwitchMaterial>::ObjConstPtrArg SwitchMaterialConstPtrArg;
typedef PointerFwdBuilder<MaterialPtr, 
                          MaterialConstPtr,
                          SwitchMaterial>::ObjPtrConstArg SwitchMaterialPtrConstArg;

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpSystemFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<SwitchMaterialPtr> : 
    public FieldTraitsTemplateBase<SwitchMaterialPtr>
{
  private:

    static DataType             _type;                       

  public:

    typedef FieldTraits<SwitchMaterialPtr>  Self;

    enum                        { StringConvertable = 0x00 };

    static OSG_SYSTEM_DLLMAPPING 
                     DataType &getType (void);

    static const char *getSName(void) { return "SFSwitchMaterialPtr"; }
    static const char *getMName(void) { return "MFSwitchMaterialPtr"; }
};

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<SwitchMaterialPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpSystemFieldSingle */

typedef SFieldAdaptor<SwitchMaterialPtr, SFFieldContainerPtr> SFSwitchMaterialPtr;
#endif

#ifndef OSG_COMPILESWITCHMATERIALINST
OSG_FIELD_DLLEXPORT_DECL1(SField, SwitchMaterialPtr, OSG_SYSTEM_DLLTMPLMAPPING)
#endif

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpSystemFieldMulti */

typedef MFieldAdaptor<SwitchMaterialPtr, MFFieldContainerPtr> MFSwitchMaterialPtr;
#endif

#ifndef OSG_COMPILESWITCHMATERIALINST
OSG_FIELD_DLLEXPORT_DECL1(MField, SwitchMaterialPtr, OSG_SYSTEM_DLLTMPLMAPPING)
#endif

OSG_END_NAMESPACE

#define OSGSWITCHMATERIALFIELDS_HEADER_CVSID "@(#)$Id: OSGSwitchMaterialFields.h,v 1.1.2.3 2006/08/01 08:48:56 vossg Exp $"

#endif /* _OSGSWITCHMATERIALFIELDS_H_ */
