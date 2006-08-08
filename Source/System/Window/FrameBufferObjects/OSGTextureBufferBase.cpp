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
 **     class TextureBuffer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILETEXTUREBUFFERINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>



#include <OSGTextureChunk.h> // Texture Class

#include "OSGTextureBufferBase.h"
#include "OSGTextureBuffer.h"

OSG_USING_NAMESPACE

// Field descriptions

/*! \var TextureChunkPtr TextureBufferBase::_sfTexture
    
*/
/*! \var GLenum TextureBufferBase::_sfTexTarget
    
*/
/*! \var UInt32 TextureBufferBase::_sfLevel
    
*/
/*! \var UInt32 TextureBufferBase::_sfZoffset
    
*/

void TextureBufferBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL; 


    pDesc = new SFTextureChunkPtr::Description(
        SFTextureChunkPtr::getClassType(), 
        "texture", 
        TextureFieldId, TextureFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&TextureBufferBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&TextureBufferBase::getSFTexture));

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFGLenum *(TextureBufferBase::*GetSFTexTargetF)(void) const;

    GetSFTexTargetF GetSFTexTarget = &TextureBufferBase::getSFTexTarget;
#endif

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(), 
        "texTarget", 
        TexTargetFieldId, TexTargetFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&TextureBufferBase::editSFTexTarget),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFTexTarget));
#else
        reinterpret_cast<FieldGetMethodSig >(&TextureBufferBase::getSFTexTarget));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFUInt32 *(TextureBufferBase::*GetSFLevelF)(void) const;

    GetSFLevelF GetSFLevel = &TextureBufferBase::getSFLevel;
#endif

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(), 
        "level", 
        LevelFieldId, LevelFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&TextureBufferBase::editSFLevel),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFLevel));
#else
        reinterpret_cast<FieldGetMethodSig >(&TextureBufferBase::getSFLevel));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFUInt32 *(TextureBufferBase::*GetSFZoffsetF)(void) const;

    GetSFZoffsetF GetSFZoffset = &TextureBufferBase::getSFZoffset;
#endif

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(), 
        "zoffset", 
        ZoffsetFieldId, ZoffsetFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&TextureBufferBase::editSFZoffset),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFZoffset));
#else
        reinterpret_cast<FieldGetMethodSig >(&TextureBufferBase::getSFZoffset));
#endif

    oType.addInitialDesc(pDesc);
}


TextureBufferBase::TypeObject TextureBufferBase::_type(true,
    TextureBufferBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &TextureBufferBase::createEmpty,
    TextureBuffer::initMethod,
    (InitalInsertDescFunc) &TextureBufferBase::classDescInserter,
    false);

/*------------------------------ get -----------------------------------*/

FieldContainerType &TextureBufferBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &TextureBufferBase::getType(void) const 
{
    return _type;
} 

UInt32 TextureBufferBase::getContainerSize(void) const 
{ 
    return sizeof(TextureBuffer); 
}

/*------------------------- decorator get ------------------------------*/


//! Get the TextureBuffer::_sfTexture field.
const SFTextureChunkPtr *TextureBufferBase::getSFTexture(void) const
{
    return &_sfTexture;
}

SFGLenum *TextureBufferBase::editSFTexTarget(void)
{
    editSField(TexTargetFieldMask);

    return &_sfTexTarget;
}

const SFGLenum *TextureBufferBase::getSFTexTarget(void) const
{
    return &_sfTexTarget;
}

SFUInt32 *TextureBufferBase::editSFLevel(void)
{
    editSField(LevelFieldMask);

    return &_sfLevel;
}

const SFUInt32 *TextureBufferBase::getSFLevel(void) const
{
    return &_sfLevel;
}

SFUInt32 *TextureBufferBase::editSFZoffset(void)
{
    editSField(ZoffsetFieldMask);

    return &_sfZoffset;
}

const SFUInt32 *TextureBufferBase::getSFZoffset(void) const
{
    return &_sfZoffset;
}


void TextureBufferBase::pushToField(      FieldContainerPtrConstArg pNewElement,
                                    const UInt32                    uiFieldId  )
{
    Inherited::pushToField(pNewElement, uiFieldId);

    if(uiFieldId == TextureFieldId)
    {
        static_cast<TextureBuffer *>(this)->setTexture(
            cast_dynamic<TextureChunkPtr>(pNewElement));
    }
}

void TextureBufferBase::insertIntoMField(const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::insertIntoMField(uiIndex, pNewElement, uiFieldId);

}

void TextureBufferBase::replaceInMField (const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::replaceInMField(uiIndex, pNewElement, uiFieldId);

}

void TextureBufferBase::replaceInMField (      FieldContainerPtrConstArg pOldElement,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::replaceInMField(pOldElement, pNewElement, uiFieldId);

}

void TextureBufferBase::removeFromMField(const UInt32 uiIndex,
                                         const UInt32 uiFieldId)
{
    Inherited::removeFromMField(uiIndex, uiFieldId);

}

void TextureBufferBase::removeFromMField(      FieldContainerPtrConstArg pElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::removeFromMField(pElement, uiFieldId);

}

void TextureBufferBase::clearField(const UInt32 uiFieldId)
{
    Inherited::clearField(uiFieldId);

    if(uiFieldId == TextureFieldId)
    {
        static_cast<TextureBuffer *>(this)->setTexture(NullFC);
    }
}



/*------------------------------ access -----------------------------------*/

UInt32 TextureBufferBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        returnValue += _sfTexture.getBinSize();
    }
    if(FieldBits::NoField != (TexTargetFieldMask & whichField))
    {
        returnValue += _sfTexTarget.getBinSize();
    }
    if(FieldBits::NoField != (LevelFieldMask & whichField))
    {
        returnValue += _sfLevel.getBinSize();
    }
    if(FieldBits::NoField != (ZoffsetFieldMask & whichField))
    {
        returnValue += _sfZoffset.getBinSize();
    }

    return returnValue;
}

void TextureBufferBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        _sfTexture.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TexTargetFieldMask & whichField))
    {
        _sfTexTarget.copyToBin(pMem);
    }
    if(FieldBits::NoField != (LevelFieldMask & whichField))
    {
        _sfLevel.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ZoffsetFieldMask & whichField))
    {
        _sfZoffset.copyToBin(pMem);
    }
}

void TextureBufferBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        _sfTexture.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TexTargetFieldMask & whichField))
    {
        _sfTexTarget.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (LevelFieldMask & whichField))
    {
        _sfLevel.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ZoffsetFieldMask & whichField))
    {
        _sfZoffset.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
TextureBufferPtr TextureBufferBase::createEmpty(void) 
{ 
    TextureBufferPtr returnValue; 
    
    newPtr<TextureBuffer>(returnValue); 

    return returnValue; 
}

FieldContainerPtr TextureBufferBase::shallowCopy(void) const 
{ 
    TextureBufferPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const TextureBuffer *>(this)); 

    return returnValue; 
}



/*------------------------- constructors ----------------------------------*/

TextureBufferBase::TextureBufferBase(void) :
    Inherited(),
    _sfTexture(),
    _sfTexTarget(GLenum(GL_NONE)),
    _sfLevel(UInt32(0)),
    _sfZoffset(UInt32(0))
{
}

TextureBufferBase::TextureBufferBase(const TextureBufferBase &source) :
    Inherited(source),
    _sfTexture(),
    _sfTexTarget(source._sfTexTarget),
    _sfLevel(source._sfLevel),
    _sfZoffset(source._sfZoffset)
{
}

/*-------------------------- destructors ----------------------------------*/

TextureBufferBase::~TextureBufferBase(void)
{
}

void TextureBufferBase::onCreate(const TextureBuffer *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        this->setTexture(source->getTexture());
    }
}

#ifdef OSG_MT_FIELDCONTAINERPTR
void TextureBufferBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<TextureBufferBase *>(&oFrom),
                   whichField, 
                   syncMode, 
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void TextureBufferBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<TextureBufferBase *>(&oFrom), 
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void TextureBufferBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr TextureBufferBase::createAspectCopy(void) const
{
    TextureBufferPtr returnValue; 

    newAspectCopy(returnValue, 
                  dynamic_cast<const TextureBuffer *>(this)); 

    return returnValue; 
}
#endif

void TextureBufferBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<TextureBuffer *>(this)->setTexture(NullFC);
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
DataType FieldTraits<TextureBufferPtr>::_type("TextureBufferPtr", "FrameBufferAttachmentPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(TextureBufferPtr)

OSG_FIELD_DLLEXPORT_DEF1(SField, TextureBufferPtr);
OSG_FIELD_DLLEXPORT_DEF1(MField, TextureBufferPtr);

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
    static Char8 cvsid_hpp       [] = OSGTEXTUREBUFFERBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGTEXTUREBUFFERBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGTEXTUREBUFFERFIELDS_HEADER_CVSID;
}
