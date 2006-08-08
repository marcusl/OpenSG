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
 **     Do not change this file, changes should be done in the derived      **
 **     class ProjectionCameraDecorator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEPROJECTIONCAMERADECORATORINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>



#include <OSGNode.h> // User Class

#include "OSGProjectionCameraDecoratorBase.h"
#include "OSGProjectionCameraDecorator.h"

OSG_USING_NAMESPACE

// Field descriptions

/*! \var NodePtr ProjectionCameraDecoratorBase::_sfUser
    	The coordinate system relative to the camera.

*/
/*! \var Pnt3f ProjectionCameraDecoratorBase::_mfSurface
    	4 points describing the rectangular projection surface, in the camera coordinate system. Counterclockwise, starting at lower left corner of the screen.

*/
/*! \var Plane ProjectionCameraDecoratorBase::_sfLeft
    	The left edge direction vector.

*/
/*! \var Plane ProjectionCameraDecoratorBase::_sfBottom
    	The bottom edge direction vector.

*/
/*! \var Plane ProjectionCameraDecoratorBase::_sfNormal
    	The normal of the projection surface.

*/
/*! \var Real32 ProjectionCameraDecoratorBase::_sfWidth
    	The width of the projection screen.

*/
/*! \var Real32 ProjectionCameraDecoratorBase::_sfHeight
    	The height of the projection screen.

*/

void ProjectionCameraDecoratorBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL; 


    pDesc = new SFNodePtr::Description(
        SFNodePtr::getClassType(), 
        "user", 
        UserFieldId, UserFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&ProjectionCameraDecoratorBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&ProjectionCameraDecoratorBase::getSFUser));

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const MFPnt3f *(ProjectionCameraDecoratorBase::*GetMFSurfaceF)(void) const;

    GetMFSurfaceF GetMFSurface = &ProjectionCameraDecoratorBase::getMFSurface;
#endif

    pDesc = new MFPnt3f::Description(
        MFPnt3f::getClassType(), 
        "surface", 
        SurfaceFieldId, SurfaceFieldMask,
        false,
        Field::MFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ProjectionCameraDecoratorBase::editMFSurface),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetMFSurface));
#else
        reinterpret_cast<FieldGetMethodSig >(&ProjectionCameraDecoratorBase::getMFSurface));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFPlane *(ProjectionCameraDecoratorBase::*GetSFLeftF)(void) const;

    GetSFLeftF GetSFLeft = &ProjectionCameraDecoratorBase::getSFLeft;
#endif

    pDesc = new SFPlane::Description(
        SFPlane::getClassType(), 
        "left", 
        LeftFieldId, LeftFieldMask,
        true,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ProjectionCameraDecoratorBase::editSFLeft),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFLeft));
#else
        reinterpret_cast<FieldGetMethodSig >(&ProjectionCameraDecoratorBase::getSFLeft));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFPlane *(ProjectionCameraDecoratorBase::*GetSFBottomF)(void) const;

    GetSFBottomF GetSFBottom = &ProjectionCameraDecoratorBase::getSFBottom;
#endif

    pDesc = new SFPlane::Description(
        SFPlane::getClassType(), 
        "bottom", 
        BottomFieldId, BottomFieldMask,
        true,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ProjectionCameraDecoratorBase::editSFBottom),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFBottom));
#else
        reinterpret_cast<FieldGetMethodSig >(&ProjectionCameraDecoratorBase::getSFBottom));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFPlane *(ProjectionCameraDecoratorBase::*GetSFNormalF)(void) const;

    GetSFNormalF GetSFNormal = &ProjectionCameraDecoratorBase::getSFNormal;
#endif

    pDesc = new SFPlane::Description(
        SFPlane::getClassType(), 
        "normal", 
        NormalFieldId, NormalFieldMask,
        true,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ProjectionCameraDecoratorBase::editSFNormal),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFNormal));
#else
        reinterpret_cast<FieldGetMethodSig >(&ProjectionCameraDecoratorBase::getSFNormal));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFReal32 *(ProjectionCameraDecoratorBase::*GetSFWidthF)(void) const;

    GetSFWidthF GetSFWidth = &ProjectionCameraDecoratorBase::getSFWidth;
#endif

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(), 
        "width", 
        WidthFieldId, WidthFieldMask,
        true,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ProjectionCameraDecoratorBase::editSFWidth),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFWidth));
#else
        reinterpret_cast<FieldGetMethodSig >(&ProjectionCameraDecoratorBase::getSFWidth));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFReal32 *(ProjectionCameraDecoratorBase::*GetSFHeightF)(void) const;

    GetSFHeightF GetSFHeight = &ProjectionCameraDecoratorBase::getSFHeight;
#endif

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(), 
        "height", 
        HeightFieldId, HeightFieldMask,
        true,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ProjectionCameraDecoratorBase::editSFHeight),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFHeight));
#else
        reinterpret_cast<FieldGetMethodSig >(&ProjectionCameraDecoratorBase::getSFHeight));
#endif

    oType.addInitialDesc(pDesc);
}


ProjectionCameraDecoratorBase::TypeObject ProjectionCameraDecoratorBase::_type(true,
    ProjectionCameraDecoratorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &ProjectionCameraDecoratorBase::createEmpty,
    ProjectionCameraDecorator::initMethod,
    (InitalInsertDescFunc) &ProjectionCameraDecoratorBase::classDescInserter,
    false);

/*------------------------------ get -----------------------------------*/

FieldContainerType &ProjectionCameraDecoratorBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &ProjectionCameraDecoratorBase::getType(void) const 
{
    return _type;
} 

UInt32 ProjectionCameraDecoratorBase::getContainerSize(void) const 
{ 
    return sizeof(ProjectionCameraDecorator); 
}

/*------------------------- decorator get ------------------------------*/


//! Get the ProjectionCameraDecorator::_sfUser field.
const SFNodePtr *ProjectionCameraDecoratorBase::getSFUser(void) const
{
    return &_sfUser;
}

MFPnt3f *ProjectionCameraDecoratorBase::editMFSurface(void)
{
    editMField(SurfaceFieldMask, _mfSurface);

    return &_mfSurface;
}

const MFPnt3f *ProjectionCameraDecoratorBase::getMFSurface(void) const
{
    return &_mfSurface;
}

SFPlane *ProjectionCameraDecoratorBase::editSFLeft(void)
{
    editSField(LeftFieldMask);

    return &_sfLeft;
}

const SFPlane *ProjectionCameraDecoratorBase::getSFLeft(void) const
{
    return &_sfLeft;
}

SFPlane *ProjectionCameraDecoratorBase::editSFBottom(void)
{
    editSField(BottomFieldMask);

    return &_sfBottom;
}

const SFPlane *ProjectionCameraDecoratorBase::getSFBottom(void) const
{
    return &_sfBottom;
}

SFPlane *ProjectionCameraDecoratorBase::editSFNormal(void)
{
    editSField(NormalFieldMask);

    return &_sfNormal;
}

const SFPlane *ProjectionCameraDecoratorBase::getSFNormal(void) const
{
    return &_sfNormal;
}

SFReal32 *ProjectionCameraDecoratorBase::editSFWidth(void)
{
    editSField(WidthFieldMask);

    return &_sfWidth;
}

const SFReal32 *ProjectionCameraDecoratorBase::getSFWidth(void) const
{
    return &_sfWidth;
}

SFReal32 *ProjectionCameraDecoratorBase::editSFHeight(void)
{
    editSField(HeightFieldMask);

    return &_sfHeight;
}

const SFReal32 *ProjectionCameraDecoratorBase::getSFHeight(void) const
{
    return &_sfHeight;
}


void ProjectionCameraDecoratorBase::pushToField(      FieldContainerPtrConstArg pNewElement,
                                    const UInt32                    uiFieldId  )
{
    Inherited::pushToField(pNewElement, uiFieldId);

    if(uiFieldId == UserFieldId)
    {
        static_cast<ProjectionCameraDecorator *>(this)->setUser(
            cast_dynamic<NodePtr>(pNewElement));
    }
}

void ProjectionCameraDecoratorBase::insertIntoMField(const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::insertIntoMField(uiIndex, pNewElement, uiFieldId);

}

void ProjectionCameraDecoratorBase::replaceInMField (const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::replaceInMField(uiIndex, pNewElement, uiFieldId);

}

void ProjectionCameraDecoratorBase::replaceInMField (      FieldContainerPtrConstArg pOldElement,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::replaceInMField(pOldElement, pNewElement, uiFieldId);

}

void ProjectionCameraDecoratorBase::removeFromMField(const UInt32 uiIndex,
                                         const UInt32 uiFieldId)
{
    Inherited::removeFromMField(uiIndex, uiFieldId);

}

void ProjectionCameraDecoratorBase::removeFromMField(      FieldContainerPtrConstArg pElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::removeFromMField(pElement, uiFieldId);

}

void ProjectionCameraDecoratorBase::clearField(const UInt32 uiFieldId)
{
    Inherited::clearField(uiFieldId);

    if(uiFieldId == UserFieldId)
    {
        static_cast<ProjectionCameraDecorator *>(this)->setUser(NullFC);
    }
}




/*------------------------------ access -----------------------------------*/

UInt32 ProjectionCameraDecoratorBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (UserFieldMask & whichField))
    {
        returnValue += _sfUser.getBinSize();
    }
    if(FieldBits::NoField != (SurfaceFieldMask & whichField))
    {
        returnValue += _mfSurface.getBinSize();
    }
    if(FieldBits::NoField != (LeftFieldMask & whichField))
    {
        returnValue += _sfLeft.getBinSize();
    }
    if(FieldBits::NoField != (BottomFieldMask & whichField))
    {
        returnValue += _sfBottom.getBinSize();
    }
    if(FieldBits::NoField != (NormalFieldMask & whichField))
    {
        returnValue += _sfNormal.getBinSize();
    }
    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        returnValue += _sfWidth.getBinSize();
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        returnValue += _sfHeight.getBinSize();
    }

    return returnValue;
}

void ProjectionCameraDecoratorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (UserFieldMask & whichField))
    {
        _sfUser.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SurfaceFieldMask & whichField))
    {
        _mfSurface.copyToBin(pMem);
    }
    if(FieldBits::NoField != (LeftFieldMask & whichField))
    {
        _sfLeft.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BottomFieldMask & whichField))
    {
        _sfBottom.copyToBin(pMem);
    }
    if(FieldBits::NoField != (NormalFieldMask & whichField))
    {
        _sfNormal.copyToBin(pMem);
    }
    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyToBin(pMem);
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        _sfHeight.copyToBin(pMem);
    }
}

void ProjectionCameraDecoratorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (UserFieldMask & whichField))
    {
        _sfUser.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SurfaceFieldMask & whichField))
    {
        _mfSurface.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (LeftFieldMask & whichField))
    {
        _sfLeft.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BottomFieldMask & whichField))
    {
        _sfBottom.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (NormalFieldMask & whichField))
    {
        _sfNormal.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        _sfHeight.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
ProjectionCameraDecoratorPtr ProjectionCameraDecoratorBase::createEmpty(void) 
{ 
    ProjectionCameraDecoratorPtr returnValue; 
    
    newPtr<ProjectionCameraDecorator>(returnValue); 

    return returnValue; 
}

FieldContainerPtr ProjectionCameraDecoratorBase::shallowCopy(void) const 
{ 
    ProjectionCameraDecoratorPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const ProjectionCameraDecorator *>(this)); 

    return returnValue; 
}



/*------------------------- constructors ----------------------------------*/

ProjectionCameraDecoratorBase::ProjectionCameraDecoratorBase(void) :
    Inherited(),
    _sfUser(),
    _mfSurface(),
    _sfLeft(),
    _sfBottom(),
    _sfNormal(),
    _sfWidth(),
    _sfHeight()
{
}

ProjectionCameraDecoratorBase::ProjectionCameraDecoratorBase(const ProjectionCameraDecoratorBase &source) :
    Inherited(source),
    _sfUser(),
    _mfSurface(source._mfSurface),
    _sfLeft(source._sfLeft),
    _sfBottom(source._sfBottom),
    _sfNormal(source._sfNormal),
    _sfWidth(source._sfWidth),
    _sfHeight(source._sfHeight)
{
}

/*-------------------------- destructors ----------------------------------*/

ProjectionCameraDecoratorBase::~ProjectionCameraDecoratorBase(void)
{
}

void ProjectionCameraDecoratorBase::onCreate(const ProjectionCameraDecorator *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        this->setUser(source->getUser());
    }
}

#ifdef OSG_MT_FIELDCONTAINERPTR
void ProjectionCameraDecoratorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<ProjectionCameraDecoratorBase *>(&oFrom),
                   whichField, 
                   syncMode, 
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void ProjectionCameraDecoratorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ProjectionCameraDecoratorBase *>(&oFrom), 
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void ProjectionCameraDecoratorBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr ProjectionCameraDecoratorBase::createAspectCopy(void) const
{
    ProjectionCameraDecoratorPtr returnValue; 

    newAspectCopy(returnValue, 
                  dynamic_cast<const ProjectionCameraDecorator *>(this)); 

    return returnValue; 
}
#endif

void ProjectionCameraDecoratorBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<ProjectionCameraDecorator *>(this)->setUser(NullFC);
}


#include "OSGSField.ins"
#include "OSGMField.ins"

#if defined(OSG_TMPL_STATIC_MEMBER_NEEDS_FUNCTION_INSTANTIATION) || \
    defined(OSG_TMPL_STATIC_MEMBER_NEEDS_CLASS_INSTANTIATION   )

#include "OSGSFieldFuncs.ins"
#include "OSGMFieldFuncs.ins"
#endif

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ProjectionCameraDecoratorPtr>::_type("ProjectionCameraDecoratorPtr", "StereoCameraDecoratorPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ProjectionCameraDecoratorPtr)

OSG_FIELD_DLLEXPORT_DEF1(SField, ProjectionCameraDecoratorPtr);
OSG_FIELD_DLLEXPORT_DEF1(MField, ProjectionCameraDecoratorPtr);

OSG_END_NAMESPACE


/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: OSGProjectionCameraDecoratorBase.cpp,v 1.1.2.3 2006/08/01 08:49:01 vossg Exp $";
    static Char8 cvsid_hpp       [] = OSGPROJECTIONCAMERADECORATORBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGPROJECTIONCAMERADECORATORBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGPROJECTIONCAMERADECORATORFIELDS_HEADER_CVSID;
}
