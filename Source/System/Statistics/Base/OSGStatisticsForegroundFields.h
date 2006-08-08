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


#ifndef _OSGSTATISTICSFOREGROUNDFIELDS_H_
#define _OSGSTATISTICSFOREGROUNDFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGForegroundFields.h"

#include "OSGSFieldAdaptor.h"
#include "OSGMFieldAdaptor.h"


OSG_BEGIN_NAMESPACE

class StatisticsForeground;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! StatisticsForegroundPtr

typedef PointerFwdBuilder<ForegroundPtr, 
                          ForegroundConstPtr,
                          StatisticsForeground>::ObjPtr         StatisticsForegroundPtr;
typedef PointerFwdBuilder<ForegroundPtr, 
                          ForegroundConstPtr,
                          StatisticsForeground>::ObjPtrConst    StatisticsForegroundPtrConst;
typedef PointerFwdBuilder<ForegroundPtr, 
                          ForegroundConstPtr,
                          StatisticsForeground>::ObjConstPtr    StatisticsForegroundConstPtr;
typedef PointerFwdBuilder<ForegroundPtr, 
                          ForegroundConstPtr,
                          StatisticsForeground>::ObjPtrArg      StatisticsForegroundPtrArg;
typedef PointerFwdBuilder<ForegroundPtr, 
                          ForegroundConstPtr,
                          StatisticsForeground>::ObjConstPtrArg StatisticsForegroundConstPtrArg;
typedef PointerFwdBuilder<ForegroundPtr, 
                          ForegroundConstPtr,
                          StatisticsForeground>::ObjPtrConstArg StatisticsForegroundPtrConstArg;

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpSystemFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<StatisticsForegroundPtr> : 
    public FieldTraitsTemplateBase<StatisticsForegroundPtr>
{
  private:

    static DataType             _type;                       

  public:

    typedef FieldTraits<StatisticsForegroundPtr>  Self;

    enum                        { StringConvertable = 0x00 };

    static OSG_SYSTEM_DLLMAPPING 
                     DataType &getType (void);

    static const char *getSName(void) { return "SFStatisticsForegroundPtr"; }
    static const char *getMName(void) { return "MFStatisticsForegroundPtr"; }
};

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<StatisticsForegroundPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpSystemFieldSingle */

typedef SFieldAdaptor<StatisticsForegroundPtr, SFFieldContainerPtr> SFStatisticsForegroundPtr;
#endif

#ifndef OSG_COMPILESTATISTICSFOREGROUNDINST
OSG_FIELD_DLLEXPORT_DECL1(SField, StatisticsForegroundPtr, OSG_SYSTEM_DLLTMPLMAPPING)
#endif

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpSystemFieldMulti */

typedef MFieldAdaptor<StatisticsForegroundPtr, MFFieldContainerPtr> MFStatisticsForegroundPtr;
#endif

#ifndef OSG_COMPILESTATISTICSFOREGROUNDINST
OSG_FIELD_DLLEXPORT_DECL1(MField, StatisticsForegroundPtr, OSG_SYSTEM_DLLTMPLMAPPING)
#endif

OSG_END_NAMESPACE

#define OSGSTATISTICSFOREGROUNDFIELDS_HEADER_CVSID "@(#)$Id: OSGStatisticsForegroundFields.h,v 1.1.2.3 2006/08/01 08:48:59 vossg Exp $"

#endif /* _OSGSTATISTICSFOREGROUNDFIELDS_H_ */
