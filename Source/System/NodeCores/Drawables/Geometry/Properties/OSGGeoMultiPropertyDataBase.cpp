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
 **     class GeoMultiPropertyData!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEGEOMULTIPROPERTYDATAINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>




#include "OSGGeoMultiPropertyDataBase.h"
#include "OSGGeoMultiPropertyData.h"

OSG_USING_NAMESPACE

// Field descriptions

/*! \var UInt8 GeoMultiPropertyDataBase::_mfIData
    	The data for the multi-properties.

*/
/*! \var UInt32 GeoMultiPropertyDataBase::_sfGLId
    	The internal GL object id for the VBO, if used.

*/

void GeoMultiPropertyDataBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL; 


#ifdef OSG_1_COMPAT
    typedef const MFUInt8 *(GeoMultiPropertyDataBase::*GetMFIDataF)(void) const;

    GetMFIDataF GetMFIData = &GeoMultiPropertyDataBase::getMFIData;
#endif

    pDesc = new MFUInt8::Description(
        MFUInt8::getClassType(), 
        "iData", 
        IDataFieldId, IDataFieldMask,
        false,
        Field::MFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&GeoMultiPropertyDataBase::editMFIData),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetMFIData));
#else
        reinterpret_cast<FieldGetMethodSig >(&GeoMultiPropertyDataBase::getMFIData));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFUInt32 *(GeoMultiPropertyDataBase::*GetSFGLIdF)(void) const;

    GetSFGLIdF GetSFGLId = &GeoMultiPropertyDataBase::getSFGLId;
#endif

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(), 
        "GLId", 
        GLIdFieldId, GLIdFieldMask,
        true,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&GeoMultiPropertyDataBase::editSFGLId),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFGLId));
#else
        reinterpret_cast<FieldGetMethodSig >(&GeoMultiPropertyDataBase::getSFGLId));
#endif

    oType.addInitialDesc(pDesc);
}


GeoMultiPropertyDataBase::TypeObject GeoMultiPropertyDataBase::_type(true,
    GeoMultiPropertyDataBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &GeoMultiPropertyDataBase::createEmpty,
    GeoMultiPropertyData::initMethod,
    (InitalInsertDescFunc) &GeoMultiPropertyDataBase::classDescInserter,
    false);

/*------------------------------ get -----------------------------------*/

FieldContainerType &GeoMultiPropertyDataBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &GeoMultiPropertyDataBase::getType(void) const 
{
    return _type;
} 

UInt32 GeoMultiPropertyDataBase::getContainerSize(void) const 
{ 
    return sizeof(GeoMultiPropertyData); 
}

/*------------------------- decorator get ------------------------------*/


MFUInt8 *GeoMultiPropertyDataBase::editMFIData(void)
{
    editMField(IDataFieldMask, _mfIData);

    return &_mfIData;
}

const MFUInt8 *GeoMultiPropertyDataBase::getMFIData(void) const
{
    return &_mfIData;
}

SFUInt32 *GeoMultiPropertyDataBase::editSFGLId(void)
{
    editSField(GLIdFieldMask);

    return &_sfGLId;
}

const SFUInt32 *GeoMultiPropertyDataBase::getSFGLId(void) const
{
    return &_sfGLId;
}



/*------------------------------ access -----------------------------------*/

UInt32 GeoMultiPropertyDataBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (IDataFieldMask & whichField))
    {
        returnValue += _mfIData.getBinSize();
    }
    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        returnValue += _sfGLId.getBinSize();
    }

    return returnValue;
}

void GeoMultiPropertyDataBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (IDataFieldMask & whichField))
    {
        _mfIData.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        _sfGLId.copyToBin(pMem);
    }
}

void GeoMultiPropertyDataBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (IDataFieldMask & whichField))
    {
        _mfIData.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        _sfGLId.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
GeoMultiPropertyDataPtr GeoMultiPropertyDataBase::createEmpty(void) 
{ 
    GeoMultiPropertyDataPtr returnValue; 
    
    newPtr<GeoMultiPropertyData>(returnValue); 

    return returnValue; 
}

FieldContainerPtr GeoMultiPropertyDataBase::shallowCopy(void) const 
{ 
    GeoMultiPropertyDataPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const GeoMultiPropertyData *>(this)); 

    return returnValue; 
}



/*------------------------- constructors ----------------------------------*/

GeoMultiPropertyDataBase::GeoMultiPropertyDataBase(void) :
    Inherited(),
    _mfIData(),
    _sfGLId()
{
}

GeoMultiPropertyDataBase::GeoMultiPropertyDataBase(const GeoMultiPropertyDataBase &source) :
    Inherited(source),
    _mfIData(source._mfIData),
    _sfGLId(source._sfGLId)
{
}

/*-------------------------- destructors ----------------------------------*/

GeoMultiPropertyDataBase::~GeoMultiPropertyDataBase(void)
{
}


#ifdef OSG_MT_FIELDCONTAINERPTR
void GeoMultiPropertyDataBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<GeoMultiPropertyDataBase *>(&oFrom),
                   whichField, 
                   syncMode, 
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void GeoMultiPropertyDataBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<GeoMultiPropertyDataBase *>(&oFrom), 
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void GeoMultiPropertyDataBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr GeoMultiPropertyDataBase::createAspectCopy(void) const
{
    GeoMultiPropertyDataPtr returnValue; 

    newAspectCopy(returnValue, 
                  dynamic_cast<const GeoMultiPropertyData *>(this)); 

    return returnValue; 
}
#endif

void GeoMultiPropertyDataBase::resolveLinks(void)
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
DataType FieldTraits<GeoMultiPropertyDataPtr>::_type("GeoMultiPropertyDataPtr", "StateChunkPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(GeoMultiPropertyDataPtr)

OSG_FIELD_DLLEXPORT_DEF1(SField, GeoMultiPropertyDataPtr);
OSG_FIELD_DLLEXPORT_DEF1(MField, GeoMultiPropertyDataPtr);

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
    static Char8 cvsid_cpp       [] = "@(#)$Id: OSGGeoMultiPropertyDataBase.cpp,v 1.1.2.5 2006/08/01 08:48:57 vossg Exp $";
    static Char8 cvsid_hpp       [] = OSGGEOMULTIPROPERTYDATABASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGGEOMULTIPROPERTYDATABASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGGEOMULTIPROPERTYDATAFIELDS_HEADER_CVSID;
}
