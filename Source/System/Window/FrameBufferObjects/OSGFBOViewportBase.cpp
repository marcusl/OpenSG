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
 **     class FBOViewport!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEFBOVIEWPORTINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>



#include <OSGFrameBufferObject.h> // FrameBufferObject Class

#include "OSGFBOViewportBase.h"
#include "OSGFBOViewport.h"

OSG_USING_NAMESPACE

// Field descriptions

/*! \var FrameBufferObjectPtr FBOViewportBase::_sfFrameBufferObject
            FramebufferObject to be written to

*/

void FBOViewportBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL; 


    pDesc = new SFFrameBufferObjectPtr::Description(
        SFFrameBufferObjectPtr::getClassType(), 
        "frameBufferObject", 
        FrameBufferObjectFieldId, FrameBufferObjectFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&FBOViewportBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&FBOViewportBase::getSFFrameBufferObject));

    oType.addInitialDesc(pDesc);
}


FBOViewportBase::TypeObject FBOViewportBase::_type(true,
    FBOViewportBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &FBOViewportBase::createEmpty,
    FBOViewport::initMethod,
    (InitalInsertDescFunc) &FBOViewportBase::classDescInserter,
    false);

/*------------------------------ get -----------------------------------*/

FieldContainerType &FBOViewportBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &FBOViewportBase::getType(void) const 
{
    return _type;
} 

UInt32 FBOViewportBase::getContainerSize(void) const 
{ 
    return sizeof(FBOViewport); 
}

/*------------------------- decorator get ------------------------------*/


//! Get the FBOViewport::_sfFrameBufferObject field.
const SFFrameBufferObjectPtr *FBOViewportBase::getSFFrameBufferObject(void) const
{
    return &_sfFrameBufferObject;
}


void FBOViewportBase::pushToField(      FieldContainerPtrConstArg pNewElement,
                                    const UInt32                    uiFieldId  )
{
    Inherited::pushToField(pNewElement, uiFieldId);

    if(uiFieldId == FrameBufferObjectFieldId)
    {
        static_cast<FBOViewport *>(this)->setFrameBufferObject(
            cast_dynamic<FrameBufferObjectPtr>(pNewElement));
    }
}

void FBOViewportBase::insertIntoMField(const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::insertIntoMField(uiIndex, pNewElement, uiFieldId);

}

void FBOViewportBase::replaceInMField (const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::replaceInMField(uiIndex, pNewElement, uiFieldId);

}

void FBOViewportBase::replaceInMField (      FieldContainerPtrConstArg pOldElement,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::replaceInMField(pOldElement, pNewElement, uiFieldId);

}

void FBOViewportBase::removeFromMField(const UInt32 uiIndex,
                                         const UInt32 uiFieldId)
{
    Inherited::removeFromMField(uiIndex, uiFieldId);

}

void FBOViewportBase::removeFromMField(      FieldContainerPtrConstArg pElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::removeFromMField(pElement, uiFieldId);

}

void FBOViewportBase::clearField(const UInt32 uiFieldId)
{
    Inherited::clearField(uiFieldId);

    if(uiFieldId == FrameBufferObjectFieldId)
    {
        static_cast<FBOViewport *>(this)->setFrameBufferObject(NullFC);
    }
}



/*------------------------------ access -----------------------------------*/

UInt32 FBOViewportBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (FrameBufferObjectFieldMask & whichField))
    {
        returnValue += _sfFrameBufferObject.getBinSize();
    }

    return returnValue;
}

void FBOViewportBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (FrameBufferObjectFieldMask & whichField))
    {
        _sfFrameBufferObject.copyToBin(pMem);
    }
}

void FBOViewportBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (FrameBufferObjectFieldMask & whichField))
    {
        _sfFrameBufferObject.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
FBOViewportPtr FBOViewportBase::createEmpty(void) 
{ 
    FBOViewportPtr returnValue; 
    
    newPtr<FBOViewport>(returnValue); 

    return returnValue; 
}

FieldContainerPtr FBOViewportBase::shallowCopy(void) const 
{ 
    FBOViewportPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const FBOViewport *>(this)); 

    return returnValue; 
}



/*------------------------- constructors ----------------------------------*/

FBOViewportBase::FBOViewportBase(void) :
    Inherited(),
    _sfFrameBufferObject()
{
}

FBOViewportBase::FBOViewportBase(const FBOViewportBase &source) :
    Inherited(source),
    _sfFrameBufferObject()
{
}

/*-------------------------- destructors ----------------------------------*/

FBOViewportBase::~FBOViewportBase(void)
{
}

void FBOViewportBase::onCreate(const FBOViewport *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        this->setFrameBufferObject(source->getFrameBufferObject());
    }
}

#ifdef OSG_MT_FIELDCONTAINERPTR
void FBOViewportBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<FBOViewportBase *>(&oFrom),
                   whichField, 
                   syncMode, 
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void FBOViewportBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<FBOViewportBase *>(&oFrom), 
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void FBOViewportBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr FBOViewportBase::createAspectCopy(void) const
{
    FBOViewportPtr returnValue; 

    newAspectCopy(returnValue, 
                  dynamic_cast<const FBOViewport *>(this)); 

    return returnValue; 
}
#endif

void FBOViewportBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<FBOViewport *>(this)->setFrameBufferObject(NullFC);
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
DataType FieldTraits<FBOViewportPtr>::_type("FBOViewportPtr", "ViewportPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(FBOViewportPtr)

OSG_FIELD_DLLEXPORT_DEF1(SField, FBOViewportPtr);
OSG_FIELD_DLLEXPORT_DEF1(MField, FBOViewportPtr);

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
    static Char8 cvsid_hpp       [] = OSGFBOVIEWPORTBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGFBOVIEWPORTBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGFBOVIEWPORTFIELDS_HEADER_CVSID;
}
