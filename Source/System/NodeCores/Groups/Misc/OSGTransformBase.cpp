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
 **     class Transform!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILETRANSFORMINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>




#include "OSGTransformBase.h"
#include "OSGTransform.h"

OSG_USING_NAMESPACE

// Field descriptions

/*! \var Matrixr TransformBase::_sfMatrix
    	The transformation matrix.

*/

void TransformBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL; 


#ifdef OSG_1_COMPAT
    typedef const SFMatrixr *(TransformBase::*GetSFMatrixF)(void) const;

    GetSFMatrixF GetSFMatrix = &TransformBase::getSFMatrix;
#endif

    pDesc = new SFMatrixr::Description(
        SFMatrixr::getClassType(), 
        "matrix", 
        MatrixFieldId, MatrixFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&TransformBase::editSFMatrix),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFMatrix));
#else
        reinterpret_cast<FieldGetMethodSig >(&TransformBase::getSFMatrix));
#endif

    oType.addInitialDesc(pDesc);
}


TransformBase::TypeObject TransformBase::_type(true,
    TransformBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &TransformBase::createEmpty,
    Transform::initMethod,
    (InitalInsertDescFunc) &TransformBase::classDescInserter,
    false);

/*------------------------------ get -----------------------------------*/

FieldContainerType &TransformBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &TransformBase::getType(void) const 
{
    return _type;
} 

UInt32 TransformBase::getContainerSize(void) const 
{ 
    return sizeof(Transform); 
}

/*------------------------- decorator get ------------------------------*/


SFMatrixr *TransformBase::editSFMatrix(void)
{
    editSField(MatrixFieldMask);

    return &_sfMatrix;
}

const SFMatrixr *TransformBase::getSFMatrix(void) const
{
    return &_sfMatrix;
}



/*------------------------------ access -----------------------------------*/

UInt32 TransformBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (MatrixFieldMask & whichField))
    {
        returnValue += _sfMatrix.getBinSize();
    }

    return returnValue;
}

void TransformBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (MatrixFieldMask & whichField))
    {
        _sfMatrix.copyToBin(pMem);
    }
}

void TransformBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (MatrixFieldMask & whichField))
    {
        _sfMatrix.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
TransformPtr TransformBase::createEmpty(void) 
{ 
    TransformPtr returnValue; 
    
    newPtr<Transform>(returnValue); 

    return returnValue; 
}

FieldContainerPtr TransformBase::shallowCopy(void) const 
{ 
    TransformPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const Transform *>(this)); 

    return returnValue; 
}



/*------------------------- constructors ----------------------------------*/

TransformBase::TransformBase(void) :
    Inherited(),
    _sfMatrix()
{
}

TransformBase::TransformBase(const TransformBase &source) :
    Inherited(source),
    _sfMatrix(source._sfMatrix)
{
}

/*-------------------------- destructors ----------------------------------*/

TransformBase::~TransformBase(void)
{
}


#ifdef OSG_MT_FIELDCONTAINERPTR
void TransformBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<TransformBase *>(&oFrom),
                   whichField, 
                   syncMode, 
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void TransformBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<TransformBase *>(&oFrom), 
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void TransformBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr TransformBase::createAspectCopy(void) const
{
    TransformPtr returnValue; 

    newAspectCopy(returnValue, 
                  dynamic_cast<const Transform *>(this)); 

    return returnValue; 
}
#endif

void TransformBase::resolveLinks(void)
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
DataType FieldTraits<TransformPtr>::_type("TransformPtr", "GroupPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(TransformPtr)

OSG_FIELD_DLLEXPORT_DEF1(SField, TransformPtr);
OSG_FIELD_DLLEXPORT_DEF1(MField, TransformPtr);

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
    static Char8 cvsid_hpp       [] = OSGTRANSFORMBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGTRANSFORMBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGTRANSFORMFIELDS_HEADER_CVSID;
}
