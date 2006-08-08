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
 **     class FrameBufferObject!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEFRAMEBUFFEROBJECTINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>



#include <OSGFrameBufferAttachment.h> // ColorAttachments Class
#include <OSGFrameBufferAttachment.h> // DepthAttachment Class
#include <OSGFrameBufferAttachment.h> // StencilAttachment Class

#include "OSGFrameBufferObjectBase.h"
#include "OSGFrameBufferObject.h"

OSG_USING_NAMESPACE

// Field descriptions

/*! \var GLenum FrameBufferObjectBase::_sfGLId
            The OpenGL texture id for this frame buffer object.

*/
/*! \var FrameBufferAttachmentPtr FrameBufferObjectBase::_mfColorAttachments
            GL_COLOR_ATTACHMENTX_EXT slots, position defines X

*/
/*! \var GLenum FrameBufferObjectBase::_mfDrawBuffers
            The OpenGL texture id for this frame buffer object.

*/
/*! \var FrameBufferAttachmentPtr FrameBufferObjectBase::_sfDepthAttachment
            GL_DEPTH_ATTACHMENT_EXT slot

*/
/*! \var FrameBufferAttachmentPtr FrameBufferObjectBase::_sfStencilAttachment
            GL_STENCIL_ATTACHMENT_EXT slot

*/
/*! \var UInt16 FrameBufferObjectBase::_sfWidth
    
*/
/*! \var UInt16 FrameBufferObjectBase::_sfHeight
    
*/

void FrameBufferObjectBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL; 


#ifdef OSG_1_COMPAT
    typedef const SFGLenum *(FrameBufferObjectBase::*GetSFGLIdF)(void) const;

    GetSFGLIdF GetSFGLId = &FrameBufferObjectBase::getSFGLId;
#endif

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(), 
        "GLId", 
        GLIdFieldId, GLIdFieldMask,
        true,
        (Field::FClusterLocal),
        reinterpret_cast<FieldEditMethodSig>(&FrameBufferObjectBase::editSFGLId),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFGLId));
#else
        reinterpret_cast<FieldGetMethodSig >(&FrameBufferObjectBase::getSFGLId));
#endif

    oType.addInitialDesc(pDesc);

    pDesc = new MFFrameBufferAttachmentPtr::Description(
        MFFrameBufferAttachmentPtr::getClassType(), 
        "colorAttachments", 
        ColorAttachmentsFieldId, ColorAttachmentsFieldMask,
        false,
        Field::MFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&FrameBufferObjectBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&FrameBufferObjectBase::getMFColorAttachments));

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const MFGLenum *(FrameBufferObjectBase::*GetMFDrawBuffersF)(void) const;

    GetMFDrawBuffersF GetMFDrawBuffers = &FrameBufferObjectBase::getMFDrawBuffers;
#endif

    pDesc = new MFGLenum::Description(
        MFGLenum::getClassType(), 
        "drawBuffers", 
        DrawBuffersFieldId, DrawBuffersFieldMask,
        false,
        Field::MFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&FrameBufferObjectBase::editMFDrawBuffers),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetMFDrawBuffers));
#else
        reinterpret_cast<FieldGetMethodSig >(&FrameBufferObjectBase::getMFDrawBuffers));
#endif

    oType.addInitialDesc(pDesc);

    pDesc = new SFFrameBufferAttachmentPtr::Description(
        SFFrameBufferAttachmentPtr::getClassType(), 
        "depthAttachment", 
        DepthAttachmentFieldId, DepthAttachmentFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&FrameBufferObjectBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&FrameBufferObjectBase::getSFDepthAttachment));

    oType.addInitialDesc(pDesc);

    pDesc = new SFFrameBufferAttachmentPtr::Description(
        SFFrameBufferAttachmentPtr::getClassType(), 
        "stencilAttachment", 
        StencilAttachmentFieldId, StencilAttachmentFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&FrameBufferObjectBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&FrameBufferObjectBase::getSFStencilAttachment));

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFUInt16 *(FrameBufferObjectBase::*GetSFWidthF)(void) const;

    GetSFWidthF GetSFWidth = &FrameBufferObjectBase::getSFWidth;
#endif

    pDesc = new SFUInt16::Description(
        SFUInt16::getClassType(), 
        "width", 
        WidthFieldId, WidthFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&FrameBufferObjectBase::editSFWidth),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFWidth));
#else
        reinterpret_cast<FieldGetMethodSig >(&FrameBufferObjectBase::getSFWidth));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFUInt16 *(FrameBufferObjectBase::*GetSFHeightF)(void) const;

    GetSFHeightF GetSFHeight = &FrameBufferObjectBase::getSFHeight;
#endif

    pDesc = new SFUInt16::Description(
        SFUInt16::getClassType(), 
        "height", 
        HeightFieldId, HeightFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&FrameBufferObjectBase::editSFHeight),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFHeight));
#else
        reinterpret_cast<FieldGetMethodSig >(&FrameBufferObjectBase::getSFHeight));
#endif

    oType.addInitialDesc(pDesc);
}


FrameBufferObjectBase::TypeObject FrameBufferObjectBase::_type(true,
    FrameBufferObjectBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &FrameBufferObjectBase::createEmpty,
    FrameBufferObject::initMethod,
    (InitalInsertDescFunc) &FrameBufferObjectBase::classDescInserter,
    false);

/*------------------------------ get -----------------------------------*/

FieldContainerType &FrameBufferObjectBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &FrameBufferObjectBase::getType(void) const 
{
    return _type;
} 

UInt32 FrameBufferObjectBase::getContainerSize(void) const 
{ 
    return sizeof(FrameBufferObject); 
}

/*------------------------- decorator get ------------------------------*/


SFGLenum *FrameBufferObjectBase::editSFGLId(void)
{
    editSField(GLIdFieldMask);

    return &_sfGLId;
}

const SFGLenum *FrameBufferObjectBase::getSFGLId(void) const
{
    return &_sfGLId;
}

//! Get the FrameBufferObject::_mfColorAttachments field.
const MFFrameBufferAttachmentPtr *FrameBufferObjectBase::getMFColorAttachments(void) const
{
    return &_mfColorAttachments;
}

MFGLenum *FrameBufferObjectBase::editMFDrawBuffers(void)
{
    editMField(DrawBuffersFieldMask, _mfDrawBuffers);

    return &_mfDrawBuffers;
}

const MFGLenum *FrameBufferObjectBase::getMFDrawBuffers(void) const
{
    return &_mfDrawBuffers;
}

//! Get the FrameBufferObject::_sfDepthAttachment field.
const SFFrameBufferAttachmentPtr *FrameBufferObjectBase::getSFDepthAttachment(void) const
{
    return &_sfDepthAttachment;
}

//! Get the FrameBufferObject::_sfStencilAttachment field.
const SFFrameBufferAttachmentPtr *FrameBufferObjectBase::getSFStencilAttachment(void) const
{
    return &_sfStencilAttachment;
}

SFUInt16 *FrameBufferObjectBase::editSFWidth(void)
{
    editSField(WidthFieldMask);

    return &_sfWidth;
}

const SFUInt16 *FrameBufferObjectBase::getSFWidth(void) const
{
    return &_sfWidth;
}

SFUInt16 *FrameBufferObjectBase::editSFHeight(void)
{
    editSField(HeightFieldMask);

    return &_sfHeight;
}

const SFUInt16 *FrameBufferObjectBase::getSFHeight(void) const
{
    return &_sfHeight;
}


void FrameBufferObjectBase::pushToField(      FieldContainerPtrConstArg pNewElement,
                                    const UInt32                    uiFieldId  )
{
    Inherited::pushToField(pNewElement, uiFieldId);

    if(uiFieldId == ColorAttachmentsFieldId)
    {
        static_cast<FrameBufferObject *>(this)->pushToColorAttachments(
            cast_dynamic<FrameBufferAttachmentPtr>(pNewElement));
    }
    if(uiFieldId == DepthAttachmentFieldId)
    {
        static_cast<FrameBufferObject *>(this)->setDepthAttachment(
            cast_dynamic<FrameBufferAttachmentPtr>(pNewElement));
    }
    if(uiFieldId == StencilAttachmentFieldId)
    {
        static_cast<FrameBufferObject *>(this)->setStencilAttachment(
            cast_dynamic<FrameBufferAttachmentPtr>(pNewElement));
    }
}

void FrameBufferObjectBase::insertIntoMField(const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::insertIntoMField(uiIndex, pNewElement, uiFieldId);

    if(uiFieldId == ColorAttachmentsFieldId)
    {
        static_cast<FrameBufferObject *>(this)->insertIntoColorAttachments(
            uiIndex,
            cast_dynamic<FrameBufferAttachmentPtr>(pNewElement));
    }
}

void FrameBufferObjectBase::replaceInMField (const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::replaceInMField(uiIndex, pNewElement, uiFieldId);

    if(uiFieldId == ColorAttachmentsFieldId)
    {
        static_cast<FrameBufferObject *>(this)->replaceInColorAttachments(
            uiIndex,
            cast_dynamic<FrameBufferAttachmentPtr>(pNewElement));
    }
}

void FrameBufferObjectBase::replaceInMField (      FieldContainerPtrConstArg pOldElement,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::replaceInMField(pOldElement, pNewElement, uiFieldId);

    if(uiFieldId == ColorAttachmentsFieldId)
    {
        static_cast<FrameBufferObject *>(this)->replaceInColorAttachments(
            cast_dynamic<FrameBufferAttachmentPtr>(pOldElement),
            cast_dynamic<FrameBufferAttachmentPtr>(pNewElement));
    }
}

void FrameBufferObjectBase::removeFromMField(const UInt32 uiIndex,
                                         const UInt32 uiFieldId)
{
    Inherited::removeFromMField(uiIndex, uiFieldId);

    if(uiFieldId == ColorAttachmentsFieldId)
    {
        static_cast<FrameBufferObject *>(this)->removeFromColorAttachments(
            uiIndex);
    }
}

void FrameBufferObjectBase::removeFromMField(      FieldContainerPtrConstArg pElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::removeFromMField(pElement, uiFieldId);

    if(uiFieldId == ColorAttachmentsFieldId)
    {
        static_cast<FrameBufferObject *>(this)->removeFromColorAttachments(
            cast_dynamic<FrameBufferAttachmentPtr>(pElement));
    }
}

void FrameBufferObjectBase::clearField(const UInt32 uiFieldId)
{
    Inherited::clearField(uiFieldId);

    if(uiFieldId == ColorAttachmentsFieldId)
    {
        static_cast<FrameBufferObject *>(this)->clearColorAttachments();
    }
    if(uiFieldId == DepthAttachmentFieldId)
    {
        static_cast<FrameBufferObject *>(this)->setDepthAttachment(NullFC);
    }
    if(uiFieldId == StencilAttachmentFieldId)
    {
        static_cast<FrameBufferObject *>(this)->setStencilAttachment(NullFC);
    }
}

void FrameBufferObjectBase::pushToColorAttachments(FrameBufferAttachmentPtrConstArg value)
{
    if(value == NullFC)
        return;

    editMField(ColorAttachmentsFieldMask, _mfColorAttachments);

    addRef(value);

    _mfColorAttachments.push_back(value);
}

void FrameBufferObjectBase::insertIntoColorAttachments(UInt32                uiIndex,
                                             FrameBufferAttachmentPtrConstArg value   )
{
    if(value == NullFC)
        return;

    editMField(ColorAttachmentsFieldMask, _mfColorAttachments);

    MFFrameBufferAttachmentPtr::iterator fieldIt = _mfColorAttachments.begin();

    addRef(value);

    fieldIt += uiIndex;

    _mfColorAttachments.insert(fieldIt, value);
}

void FrameBufferObjectBase::replaceInColorAttachments(UInt32                uiIndex,
                                                 FrameBufferAttachmentPtrConstArg value   )
{
    if(value == NullFC)
        return;

    if(uiIndex >= _mfColorAttachments.size())
        return;

    editMField(ColorAttachmentsFieldMask, _mfColorAttachments);

    addRef(value);

    subRef(_mfColorAttachments[uiIndex]);

    _mfColorAttachments[uiIndex] = value;
}

void FrameBufferObjectBase::replaceInColorAttachments(FrameBufferAttachmentPtrConstArg pOldElem,
                                                  FrameBufferAttachmentPtrConstArg pNewElem)
{
    if(pNewElem == NullFC)
        return;

    Int32  elemIdx = _mfColorAttachments.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(ColorAttachmentsFieldMask, _mfColorAttachments);

        MFFrameBufferAttachmentPtr::iterator fieldIt = _mfColorAttachments.begin();

        fieldIt += elemIdx;

        addRef(pNewElem);
        subRef(pOldElem);

        (*fieldIt) = pNewElem;
    }
}

void FrameBufferObjectBase::removeFromColorAttachments(UInt32 uiIndex)
{
    if(uiIndex < _mfColorAttachments.size())
    {
        editMField(ColorAttachmentsFieldMask, _mfColorAttachments);

        MFFrameBufferAttachmentPtr::iterator fieldIt = _mfColorAttachments.begin();

        fieldIt += uiIndex;

        subRef(*fieldIt);

        _mfColorAttachments.erase(fieldIt);
    }
}

void FrameBufferObjectBase::removeFromColorAttachments(FrameBufferAttachmentPtrConstArg value)
{
    Int32 iElemIdx = _mfColorAttachments.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(ColorAttachmentsFieldMask, _mfColorAttachments);

        MFFrameBufferAttachmentPtr::iterator fieldIt = _mfColorAttachments.begin();

        fieldIt += iElemIdx;

        subRef(*fieldIt);

        _mfColorAttachments.erase(fieldIt);
    }
}
void FrameBufferObjectBase::clearColorAttachments(void)
{
    editMField(ColorAttachmentsFieldMask, _mfColorAttachments);

    MFFrameBufferAttachmentPtr::iterator       fieldIt  = _mfColorAttachments.begin();
    MFFrameBufferAttachmentPtr::const_iterator fieldEnd = _mfColorAttachments.end  ();

    while(fieldIt != fieldEnd)
    {
        subRef(*fieldIt);

        ++fieldIt;
    }

    _mfColorAttachments.clear();
}




/*------------------------------ access -----------------------------------*/

UInt32 FrameBufferObjectBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        returnValue += _sfGLId.getBinSize();
    }
    if(FieldBits::NoField != (ColorAttachmentsFieldMask & whichField))
    {
        returnValue += _mfColorAttachments.getBinSize();
    }
    if(FieldBits::NoField != (DrawBuffersFieldMask & whichField))
    {
        returnValue += _mfDrawBuffers.getBinSize();
    }
    if(FieldBits::NoField != (DepthAttachmentFieldMask & whichField))
    {
        returnValue += _sfDepthAttachment.getBinSize();
    }
    if(FieldBits::NoField != (StencilAttachmentFieldMask & whichField))
    {
        returnValue += _sfStencilAttachment.getBinSize();
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

void FrameBufferObjectBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        _sfGLId.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ColorAttachmentsFieldMask & whichField))
    {
        _mfColorAttachments.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DrawBuffersFieldMask & whichField))
    {
        _mfDrawBuffers.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DepthAttachmentFieldMask & whichField))
    {
        _sfDepthAttachment.copyToBin(pMem);
    }
    if(FieldBits::NoField != (StencilAttachmentFieldMask & whichField))
    {
        _sfStencilAttachment.copyToBin(pMem);
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

void FrameBufferObjectBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        _sfGLId.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ColorAttachmentsFieldMask & whichField))
    {
        _mfColorAttachments.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DrawBuffersFieldMask & whichField))
    {
        _mfDrawBuffers.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DepthAttachmentFieldMask & whichField))
    {
        _sfDepthAttachment.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (StencilAttachmentFieldMask & whichField))
    {
        _sfStencilAttachment.copyFromBin(pMem);
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
FrameBufferObjectPtr FrameBufferObjectBase::createEmpty(void) 
{ 
    FrameBufferObjectPtr returnValue; 
    
    newPtr<FrameBufferObject>(returnValue); 

    return returnValue; 
}

FieldContainerPtr FrameBufferObjectBase::shallowCopy(void) const 
{ 
    FrameBufferObjectPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const FrameBufferObject *>(this)); 

    return returnValue; 
}



/*------------------------- constructors ----------------------------------*/

FrameBufferObjectBase::FrameBufferObjectBase(void) :
    Inherited(),
    _sfGLId(GLenum(0)),
    _mfColorAttachments(),
    _mfDrawBuffers(GLenum(0)),
    _sfDepthAttachment(),
    _sfStencilAttachment(),
    _sfWidth(),
    _sfHeight()
{
}

FrameBufferObjectBase::FrameBufferObjectBase(const FrameBufferObjectBase &source) :
    Inherited(source),
    _sfGLId(source._sfGLId),
    _mfColorAttachments(),
    _mfDrawBuffers(source._mfDrawBuffers),
    _sfDepthAttachment(),
    _sfStencilAttachment(),
    _sfWidth(source._sfWidth),
    _sfHeight(source._sfHeight)
{
}

/*-------------------------- destructors ----------------------------------*/

FrameBufferObjectBase::~FrameBufferObjectBase(void)
{
}

void FrameBufferObjectBase::onCreate(const FrameBufferObject *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        MFFrameBufferAttachmentPtr::const_iterator ColorAttachmentsIt  = 
            source->_mfColorAttachments.begin();
        MFFrameBufferAttachmentPtr::const_iterator ColorAttachmentsEnd = 
            source->_mfColorAttachments.end  ();

        while(ColorAttachmentsIt != ColorAttachmentsEnd)
        {
            this->pushToColorAttachments(*ColorAttachmentsIt);

            ++ColorAttachmentsIt;
        }

        this->setDepthAttachment(source->getDepthAttachment());

        this->setStencilAttachment(source->getStencilAttachment());
    }
}

#ifdef OSG_MT_FIELDCONTAINERPTR
void FrameBufferObjectBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<FrameBufferObjectBase *>(&oFrom),
                   whichField, 
                   syncMode, 
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void FrameBufferObjectBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<FrameBufferObjectBase *>(&oFrom), 
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void FrameBufferObjectBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr FrameBufferObjectBase::createAspectCopy(void) const
{
    FrameBufferObjectPtr returnValue; 

    newAspectCopy(returnValue, 
                  dynamic_cast<const FrameBufferObject *>(this)); 

    return returnValue; 
}
#endif

void FrameBufferObjectBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<FrameBufferObject *>(this)->setDepthAttachment(NullFC);

    static_cast<FrameBufferObject *>(this)->setStencilAttachment(NullFC);

    static_cast<FrameBufferObject *>(this)->clearColorAttachments();
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
DataType FieldTraits<FrameBufferObjectPtr>::_type("FrameBufferObjectPtr", "AttachmentContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(FrameBufferObjectPtr)

OSG_FIELD_DLLEXPORT_DEF1(SField, FrameBufferObjectPtr);
OSG_FIELD_DLLEXPORT_DEF1(MField, FrameBufferObjectPtr);

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
    static Char8 cvsid_hpp       [] = OSGFRAMEBUFFEROBJECTBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGFRAMEBUFFEROBJECTBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGFRAMEBUFFEROBJECTFIELDS_HEADER_CVSID;
}
