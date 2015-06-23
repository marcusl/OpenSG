/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: dirk@opensg.org, gerrit.voss@vossg.org, carsten_neumann@gmx.net  *
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
 **     class TextureBaseChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"


#include "OSGGL.h"                        // Target default header


#include "OSGTextureBaseChunkBase.h"
#include "OSGTextureBaseChunk.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TextureBaseChunk
    See \ref PageSystemTextureBaseChunk for a description.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var GLenum          TextureBaseChunkBase::_sfTarget
    Texture target. Overwrite automatically determined texture target
    based on the parameters of the assigned image if set to anything 
    else than GL_NONE. Used for nVidia's rectangle textures. Be careful
    when using it!
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<TextureBaseChunk *, nsOSG>::_type(
    "TextureBaseChunkPtr", 
    "StateChunkPtr", 
    TextureBaseChunk::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(TextureBaseChunk *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           TextureBaseChunk *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           TextureBaseChunk *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void TextureBaseChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "target",
        "Texture target. Overwrite automatically determined texture target\n"
        "based on the parameters of the assigned image if set to anything \n"
        "else than GL_NONE. Used for nVidia's rectangle textures. Be careful\n"
        "when using it!\n",
        TargetFieldId, TargetFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextureBaseChunk::editHandleTarget),
        static_cast<FieldGetMethodSig >(&TextureBaseChunk::getHandleTarget));

    oType.addInitialDesc(pDesc);
}


TextureBaseChunkBase::TypeObject TextureBaseChunkBase::_type(
    TextureBaseChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    NULL,
    TextureBaseChunk::initMethod,
    TextureBaseChunk::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&TextureBaseChunk::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"TextureBaseChunk\"\n"
    "   parent=\"StateChunk\"\n"
    "   library=\"System\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"abstract\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   useLocalIncludes=\"false\"\n"
    "   docGroupBase=\"GrpSystemState\"\n"
    "   >\n"
    "  \n"
    "  See \\ref PageSystemTextureBaseChunk for a description.\n"
    "  <Field\n"
    "     name=\"target\"\n"
    "     type=\"GLenum\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"external\"\n"
    "     defaultValue=\"GL_NONE\"\n"
    "     defaultHeader=\"&quot;OSGGL.h&quot;\"\n"
    "     access=\"public\"\n"
    "     >\n"
    "    Texture target. Overwrite automatically determined texture target\n"
    "    based on the parameters of the assigned image if set to anything \n"
    "    else than GL_NONE. Used for nVidia's rectangle textures. Be careful\n"
    "    when using it!\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    "See \\ref PageSystemTextureBaseChunk for a description.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &TextureBaseChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &TextureBaseChunkBase::getType(void) const
{
    return _type;
}

UInt32 TextureBaseChunkBase::getContainerSize(void) const
{
    return sizeof(TextureBaseChunk);
}

/*------------------------- decorator get ------------------------------*/


SFGLenum *TextureBaseChunkBase::editSFTarget(void)
{
    editSField(TargetFieldMask);

    return &_sfTarget;
}

const SFGLenum *TextureBaseChunkBase::getSFTarget(void) const
{
    return &_sfTarget;
}






/*------------------------------ access -----------------------------------*/

SizeT TextureBaseChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (TargetFieldMask & whichField))
    {
        returnValue += _sfTarget.getBinSize();
    }

    return returnValue;
}

void TextureBaseChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (TargetFieldMask & whichField))
    {
        _sfTarget.copyToBin(pMem);
    }
}

void TextureBaseChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (TargetFieldMask & whichField))
    {
        editSField(TargetFieldMask);
        _sfTarget.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

TextureBaseChunkBase::TextureBaseChunkBase(void) :
    Inherited(),
    _sfTarget                 (GLenum(GL_NONE))
{
}

TextureBaseChunkBase::TextureBaseChunkBase(const TextureBaseChunkBase &source) :
    Inherited(source),
    _sfTarget                 (source._sfTarget                 )
{
}


/*-------------------------- destructors ----------------------------------*/

TextureBaseChunkBase::~TextureBaseChunkBase(void)
{
}


GetFieldHandlePtr TextureBaseChunkBase::getHandleTarget          (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfTarget,
             this->getType().getFieldDesc(TargetFieldId),
             const_cast<TextureBaseChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextureBaseChunkBase::editHandleTarget         (void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfTarget,
             this->getType().getFieldDesc(TargetFieldId),
             this));


    editSField(TargetFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void TextureBaseChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    TextureBaseChunk *pThis = static_cast<TextureBaseChunk *>(this);

    pThis->execSync(static_cast<TextureBaseChunk *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void TextureBaseChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
