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


#ifndef _OSGPROJECTIONCAMERADECORATORFIELDS_H_
#define _OSGPROJECTIONCAMERADECORATORFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGWindowDef.h"

#include "OSGStereoCameraDecoratorFields.h"

#include "OSGSFieldAdaptor.h"
#include "OSGMFieldAdaptor.h"


OSG_BEGIN_NAMESPACE

class ProjectionCameraDecorator;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! ProjectionCameraDecoratorPtr

typedef PointerFwdBuilder<StereoCameraDecoratorPtr, 
                          StereoCameraDecoratorConstPtr,
                          ProjectionCameraDecorator>::ObjPtr         ProjectionCameraDecoratorPtr;
typedef PointerFwdBuilder<StereoCameraDecoratorPtr, 
                          StereoCameraDecoratorConstPtr,
                          ProjectionCameraDecorator>::ObjPtrConst    ProjectionCameraDecoratorPtrConst;
typedef PointerFwdBuilder<StereoCameraDecoratorPtr, 
                          StereoCameraDecoratorConstPtr,
                          ProjectionCameraDecorator>::ObjConstPtr    ProjectionCameraDecoratorConstPtr;
typedef PointerFwdBuilder<StereoCameraDecoratorPtr, 
                          StereoCameraDecoratorConstPtr,
                          ProjectionCameraDecorator>::ObjPtrArg      ProjectionCameraDecoratorPtrArg;
typedef PointerFwdBuilder<StereoCameraDecoratorPtr, 
                          StereoCameraDecoratorConstPtr,
                          ProjectionCameraDecorator>::ObjConstPtrArg ProjectionCameraDecoratorConstPtrArg;
typedef PointerFwdBuilder<StereoCameraDecoratorPtr, 
                          StereoCameraDecoratorConstPtr,
                          ProjectionCameraDecorator>::ObjPtrConstArg ProjectionCameraDecoratorPtrConstArg;

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpWindowFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<ProjectionCameraDecoratorPtr> : 
    public FieldTraitsTemplateBase<ProjectionCameraDecoratorPtr>
{
  private:

    static DataType             _type;                       

  public:

    typedef FieldTraits<ProjectionCameraDecoratorPtr>  Self;

    enum                        { StringConvertable = 0x00 };

    static OSG_WINDOW_DLLMAPPING 
                     DataType &getType (void);

    static const char *getSName(void) { return "SFProjectionCameraDecoratorPtr"; }
    static const char *getMName(void) { return "MFProjectionCameraDecoratorPtr"; }
};

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<ProjectionCameraDecoratorPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpWindowFieldSingle */

typedef SFieldAdaptor<ProjectionCameraDecoratorPtr, SFFieldContainerPtr> SFProjectionCameraDecoratorPtr;
#endif

#ifndef OSG_COMPILEPROJECTIONCAMERADECORATORINST
OSG_FIELD_DLLEXPORT_DECL1(SField, ProjectionCameraDecoratorPtr, OSG_WINDOW_DLLTMPLMAPPING)
#endif

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpWindowFieldMulti */

typedef MFieldAdaptor<ProjectionCameraDecoratorPtr, MFFieldContainerPtr> MFProjectionCameraDecoratorPtr;
#endif

#ifndef OSG_COMPILEPROJECTIONCAMERADECORATORINST
OSG_FIELD_DLLEXPORT_DECL1(MField, ProjectionCameraDecoratorPtr, OSG_WINDOW_DLLTMPLMAPPING)
#endif

OSG_END_NAMESPACE

#define OSGPROJECTIONCAMERADECORATORFIELDS_HEADER_CVSID "@(#)$Id: OSGProjectionCameraDecoratorFields.h,v 1.1.2.3 2006/08/01 08:49:02 vossg Exp $"

#endif /* _OSGPROJECTIONCAMERADECORATORFIELDS_H_ */
