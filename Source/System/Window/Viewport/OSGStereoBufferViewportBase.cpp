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
 **     class StereoBufferViewport!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESTEREOBUFFERVIEWPORTINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>




#include "OSGStereoBufferViewportBase.h"
#include "OSGStereoBufferViewport.h"

OSG_USING_NAMESPACE

// Field descriptions

/*! \var bool StereoBufferViewportBase::_sfLeftBuffer
            Defines whether the left buffer is written to.

*/
/*! \var bool StereoBufferViewportBase::_sfRightBuffer
            Defines whether the right buffer is written to.

*/

void StereoBufferViewportBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL; 


#ifdef OSG_1_COMPAT
    typedef const SFBool *(StereoBufferViewportBase::*GetSFLeftBufferF)(void) const;

    GetSFLeftBufferF GetSFLeftBuffer = &StereoBufferViewportBase::getSFLeftBuffer;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(), 
        "leftBuffer", 
        LeftBufferFieldId, LeftBufferFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&StereoBufferViewportBase::editSFLeftBuffer),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFLeftBuffer));
#else
        reinterpret_cast<FieldGetMethodSig >(&StereoBufferViewportBase::getSFLeftBuffer));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFBool *(StereoBufferViewportBase::*GetSFRightBufferF)(void) const;

    GetSFRightBufferF GetSFRightBuffer = &StereoBufferViewportBase::getSFRightBuffer;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(), 
        "rightBuffer", 
        RightBufferFieldId, RightBufferFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&StereoBufferViewportBase::editSFRightBuffer),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFRightBuffer));
#else
        reinterpret_cast<FieldGetMethodSig >(&StereoBufferViewportBase::getSFRightBuffer));
#endif

    oType.addInitialDesc(pDesc);
}


StereoBufferViewportBase::TypeObject StereoBufferViewportBase::_type(true,
    StereoBufferViewportBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &StereoBufferViewportBase::createEmpty,
    StereoBufferViewport::initMethod,
    (InitalInsertDescFunc) &StereoBufferViewportBase::classDescInserter,
    false);

/*------------------------------ get -----------------------------------*/

FieldContainerType &StereoBufferViewportBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &StereoBufferViewportBase::getType(void) const 
{
    return _type;
} 

UInt32 StereoBufferViewportBase::getContainerSize(void) const 
{ 
    return sizeof(StereoBufferViewport); 
}

/*------------------------- decorator get ------------------------------*/


SFBool *StereoBufferViewportBase::editSFLeftBuffer(void)
{
    editSField(LeftBufferFieldMask);

    return &_sfLeftBuffer;
}

const SFBool *StereoBufferViewportBase::getSFLeftBuffer(void) const
{
    return &_sfLeftBuffer;
}

SFBool *StereoBufferViewportBase::editSFRightBuffer(void)
{
    editSField(RightBufferFieldMask);

    return &_sfRightBuffer;
}

const SFBool *StereoBufferViewportBase::getSFRightBuffer(void) const
{
    return &_sfRightBuffer;
}



/*------------------------------ access -----------------------------------*/

UInt32 StereoBufferViewportBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (LeftBufferFieldMask & whichField))
    {
        returnValue += _sfLeftBuffer.getBinSize();
    }
    if(FieldBits::NoField != (RightBufferFieldMask & whichField))
    {
        returnValue += _sfRightBuffer.getBinSize();
    }

    return returnValue;
}

void StereoBufferViewportBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (LeftBufferFieldMask & whichField))
    {
        _sfLeftBuffer.copyToBin(pMem);
    }
    if(FieldBits::NoField != (RightBufferFieldMask & whichField))
    {
        _sfRightBuffer.copyToBin(pMem);
    }
}

void StereoBufferViewportBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (LeftBufferFieldMask & whichField))
    {
        _sfLeftBuffer.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (RightBufferFieldMask & whichField))
    {
        _sfRightBuffer.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
StereoBufferViewportPtr StereoBufferViewportBase::createEmpty(void) 
{ 
    StereoBufferViewportPtr returnValue; 
    
    newPtr<StereoBufferViewport>(returnValue); 

    return returnValue; 
}

FieldContainerPtr StereoBufferViewportBase::shallowCopy(void) const 
{ 
    StereoBufferViewportPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const StereoBufferViewport *>(this)); 

    return returnValue; 
}



/*------------------------- constructors ----------------------------------*/

StereoBufferViewportBase::StereoBufferViewportBase(void) :
    Inherited(),
    _sfLeftBuffer(bool(true)),
    _sfRightBuffer(bool(true))
{
}

StereoBufferViewportBase::StereoBufferViewportBase(const StereoBufferViewportBase &source) :
    Inherited(source),
    _sfLeftBuffer(source._sfLeftBuffer),
    _sfRightBuffer(source._sfRightBuffer)
{
}

/*-------------------------- destructors ----------------------------------*/

StereoBufferViewportBase::~StereoBufferViewportBase(void)
{
}


#ifdef OSG_MT_FIELDCONTAINERPTR
void StereoBufferViewportBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<StereoBufferViewportBase *>(&oFrom),
                   whichField, 
                   syncMode, 
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void StereoBufferViewportBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<StereoBufferViewportBase *>(&oFrom), 
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void StereoBufferViewportBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr StereoBufferViewportBase::createAspectCopy(void) const
{
    StereoBufferViewportPtr returnValue; 

    newAspectCopy(returnValue, 
                  dynamic_cast<const StereoBufferViewport *>(this)); 

    return returnValue; 
}
#endif

void StereoBufferViewportBase::resolveLinks(void)
{
    Inherited::resolveLinks();
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
DataType FieldTraits<StereoBufferViewportPtr>::_type("StereoBufferViewportPtr", "ViewportPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(StereoBufferViewportPtr)

OSG_FIELD_DLLEXPORT_DEF1(SField, StereoBufferViewportPtr);
OSG_FIELD_DLLEXPORT_DEF1(MField, StereoBufferViewportPtr);

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
    static Char8 cvsid_cpp       [] = "@(#)$Id: $";
    static Char8 cvsid_hpp       [] = OSGSTEREOBUFFERVIEWPORTBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGSTEREOBUFFERVIEWPORTBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGSTEREOBUFFERVIEWPORTFIELDS_HEADER_CVSID;
}
