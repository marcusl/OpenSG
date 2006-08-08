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
 **     class SimpleShadowMapEngine!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESIMPLESHADOWMAPENGINEINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>




#include "OSGSimpleShadowMapEngineBase.h"
#include "OSGSimpleShadowMapEngine.h"

OSG_USING_NAMESPACE

// Field descriptions

/*! \var Int32 SimpleShadowMapEngineBase::_sfForceTextureUnit
    
*/

void SimpleShadowMapEngineBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL; 


#ifdef OSG_1_COMPAT
    typedef const SFInt32 *(SimpleShadowMapEngineBase::*GetSFForceTextureUnitF)(void) const;

    GetSFForceTextureUnitF GetSFForceTextureUnit = &SimpleShadowMapEngineBase::getSFForceTextureUnit;
#endif

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(), 
        "forceTextureUnit", 
        ForceTextureUnitFieldId, ForceTextureUnitFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&SimpleShadowMapEngineBase::editSFForceTextureUnit),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFForceTextureUnit));
#else
        reinterpret_cast<FieldGetMethodSig >(&SimpleShadowMapEngineBase::getSFForceTextureUnit));
#endif

    oType.addInitialDesc(pDesc);
}


SimpleShadowMapEngineBase::TypeObject SimpleShadowMapEngineBase::_type(true,
    SimpleShadowMapEngineBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &SimpleShadowMapEngineBase::createEmpty,
    SimpleShadowMapEngine::initMethod,
    (InitalInsertDescFunc) &SimpleShadowMapEngineBase::classDescInserter,
    false);

/*------------------------------ get -----------------------------------*/

FieldContainerType &SimpleShadowMapEngineBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &SimpleShadowMapEngineBase::getType(void) const 
{
    return _type;
} 

UInt32 SimpleShadowMapEngineBase::getContainerSize(void) const 
{ 
    return sizeof(SimpleShadowMapEngine); 
}

/*------------------------- decorator get ------------------------------*/


SFInt32 *SimpleShadowMapEngineBase::editSFForceTextureUnit(void)
{
    editSField(ForceTextureUnitFieldMask);

    return &_sfForceTextureUnit;
}

const SFInt32 *SimpleShadowMapEngineBase::getSFForceTextureUnit(void) const
{
    return &_sfForceTextureUnit;
}



/*------------------------------ access -----------------------------------*/

UInt32 SimpleShadowMapEngineBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ForceTextureUnitFieldMask & whichField))
    {
        returnValue += _sfForceTextureUnit.getBinSize();
    }

    return returnValue;
}

void SimpleShadowMapEngineBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ForceTextureUnitFieldMask & whichField))
    {
        _sfForceTextureUnit.copyToBin(pMem);
    }
}

void SimpleShadowMapEngineBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ForceTextureUnitFieldMask & whichField))
    {
        _sfForceTextureUnit.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
SimpleShadowMapEnginePtr SimpleShadowMapEngineBase::createEmpty(void) 
{ 
    SimpleShadowMapEnginePtr returnValue; 
    
    newPtr<SimpleShadowMapEngine>(returnValue); 

    return returnValue; 
}

FieldContainerPtr SimpleShadowMapEngineBase::shallowCopy(void) const 
{ 
    SimpleShadowMapEnginePtr returnValue; 

    newPtr(returnValue, dynamic_cast<const SimpleShadowMapEngine *>(this)); 

    return returnValue; 
}



/*------------------------- constructors ----------------------------------*/

SimpleShadowMapEngineBase::SimpleShadowMapEngineBase(void) :
    Inherited(),
    _sfForceTextureUnit(Int32(-1))
{
}

SimpleShadowMapEngineBase::SimpleShadowMapEngineBase(const SimpleShadowMapEngineBase &source) :
    Inherited(source),
    _sfForceTextureUnit(source._sfForceTextureUnit)
{
}

/*-------------------------- destructors ----------------------------------*/

SimpleShadowMapEngineBase::~SimpleShadowMapEngineBase(void)
{
}


#ifdef OSG_MT_FIELDCONTAINERPTR
void SimpleShadowMapEngineBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<SimpleShadowMapEngineBase *>(&oFrom),
                   whichField, 
                   syncMode, 
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void SimpleShadowMapEngineBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<SimpleShadowMapEngineBase *>(&oFrom), 
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void SimpleShadowMapEngineBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr SimpleShadowMapEngineBase::createAspectCopy(void) const
{
    SimpleShadowMapEnginePtr returnValue; 

    newAspectCopy(returnValue, 
                  dynamic_cast<const SimpleShadowMapEngine *>(this)); 

    return returnValue; 
}
#endif

void SimpleShadowMapEngineBase::resolveLinks(void)
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
DataType FieldTraits<SimpleShadowMapEnginePtr>::_type("SimpleShadowMapEnginePtr", "ShadowMapEnginePtr");
#endif

OSG_FIELDTRAITS_GETTYPE(SimpleShadowMapEnginePtr)

OSG_FIELD_DLLEXPORT_DEF1(SField, SimpleShadowMapEnginePtr);
OSG_FIELD_DLLEXPORT_DEF1(MField, SimpleShadowMapEnginePtr);

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
    static Char8 cvsid_cpp       [] = "@(#)$Id: OSGSimpleShadowMapEngineBase.cpp,v 1.1.2.3 2006/08/01 08:48:58 vossg Exp $";
    static Char8 cvsid_hpp       [] = OSGSIMPLESHADOWMAPENGINEBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGSIMPLESHADOWMAPENGINEBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGSIMPLESHADOWMAPENGINEFIELDS_HEADER_CVSID;
}
