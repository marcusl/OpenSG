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


#ifndef _OSGGROUPFIELDS_H_
#define _OSGGROUPFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGNodeCoreFields.h"

#include "OSGSFieldAdaptor.h"
#include "OSGMFieldAdaptor.h"


OSG_BEGIN_NAMESPACE

class Group;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! GroupPtr

typedef PointerFwdBuilder<NodeCorePtr, 
                          NodeCoreConstPtr,
                          Group>::ObjPtr         GroupPtr;
typedef PointerFwdBuilder<NodeCorePtr, 
                          NodeCoreConstPtr,
                          Group>::ObjPtrConst    GroupPtrConst;
typedef PointerFwdBuilder<NodeCorePtr, 
                          NodeCoreConstPtr,
                          Group>::ObjConstPtr    GroupConstPtr;
typedef PointerFwdBuilder<NodeCorePtr, 
                          NodeCoreConstPtr,
                          Group>::ObjPtrArg      GroupPtrArg;
typedef PointerFwdBuilder<NodeCorePtr, 
                          NodeCoreConstPtr,
                          Group>::ObjConstPtrArg GroupConstPtrArg;
typedef PointerFwdBuilder<NodeCorePtr, 
                          NodeCoreConstPtr,
                          Group>::ObjPtrConstArg GroupPtrConstArg;

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpSystemFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<GroupPtr> : 
    public FieldTraitsTemplateBase<GroupPtr>
{
  private:

    static DataType             _type;                       

  public:

    typedef FieldTraits<GroupPtr>  Self;

    enum                        { StringConvertable = 0x00 };

    static OSG_SYSTEM_DLLMAPPING 
                     DataType &getType (void);

    static const char *getSName(void) { return "SFGroupPtr"; }
    static const char *getMName(void) { return "MFGroupPtr"; }
};

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<GroupPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpSystemFieldSingle */

typedef SFieldAdaptor<GroupPtr, SFFieldContainerPtr> SFGroupPtr;
#endif

#ifndef OSG_COMPILEGROUPINST
OSG_FIELD_DLLEXPORT_DECL1(SField, GroupPtr, OSG_SYSTEM_DLLTMPLMAPPING)
#endif

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpSystemFieldMulti */

typedef MFieldAdaptor<GroupPtr, MFFieldContainerPtr> MFGroupPtr;
#endif

#ifndef OSG_COMPILEGROUPINST
OSG_FIELD_DLLEXPORT_DECL1(MField, GroupPtr, OSG_SYSTEM_DLLTMPLMAPPING)
#endif

OSG_END_NAMESPACE

#define OSGGROUPFIELDS_HEADER_CVSID "@(#)$Id: $"

#endif /* _OSGGROUPFIELDS_H_ */
