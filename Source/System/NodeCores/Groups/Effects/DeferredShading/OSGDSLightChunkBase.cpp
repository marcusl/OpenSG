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
 **     class DSLightChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGDSLightChunkBase.h"
#include "OSGDSLightChunk.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::DSLightChunk
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Real32          DSLightChunkBase::_sfEffectiveRange
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<DSLightChunk *, nsOSG>::_type(
    "DSLightChunkPtr", 
    "LightChunkPtr", 
    DSLightChunk::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(DSLightChunk *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           DSLightChunk *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           DSLightChunk *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void DSLightChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "effectiveRange",
        "",
        EffectiveRangeFieldId, EffectiveRangeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DSLightChunk::editHandleEffectiveRange),
        static_cast<FieldGetMethodSig >(&DSLightChunk::getHandleEffectiveRange));

    oType.addInitialDesc(pDesc);
}


DSLightChunkBase::TypeObject DSLightChunkBase::_type(
    DSLightChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&DSLightChunkBase::createEmptyLocal),
    DSLightChunk::initMethod,
    DSLightChunk::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&DSLightChunk::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"DSLightChunk\"\n"
    "   parent=\"LightChunk\"\n"
    "   library=\"EffectGroups\"\n"
    "   structure=\"concrete\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   docGroupBase=\"GrpEffectsGroupsDeferredShading\"\n"
    "   >\n"
    "  <Field\n"
    "     name=\"effectiveRange\"\n"
    "     category=\"data\"\n"
    "     type=\"Real32\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"external\"\n"
    "     defaultValue=\"0.f\"\n"
    "     access=\"public\"\n"
    "     >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &DSLightChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &DSLightChunkBase::getType(void) const
{
    return _type;
}

UInt32 DSLightChunkBase::getContainerSize(void) const
{
    return sizeof(DSLightChunk);
}

/*------------------------- decorator get ------------------------------*/


SFReal32 *DSLightChunkBase::editSFEffectiveRange(void)
{
    editSField(EffectiveRangeFieldMask);

    return &_sfEffectiveRange;
}

const SFReal32 *DSLightChunkBase::getSFEffectiveRange(void) const
{
    return &_sfEffectiveRange;
}






/*------------------------------ access -----------------------------------*/

SizeT DSLightChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (EffectiveRangeFieldMask & whichField))
    {
        returnValue += _sfEffectiveRange.getBinSize();
    }

    return returnValue;
}

void DSLightChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (EffectiveRangeFieldMask & whichField))
    {
        _sfEffectiveRange.copyToBin(pMem);
    }
}

void DSLightChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (EffectiveRangeFieldMask & whichField))
    {
        editSField(EffectiveRangeFieldMask);
        _sfEffectiveRange.copyFromBin(pMem);
    }
}

//! create a new instance of the class
DSLightChunkTransitPtr DSLightChunkBase::createLocal(BitVector bFlags)
{
    DSLightChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<DSLightChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
DSLightChunkTransitPtr DSLightChunkBase::createDependent(BitVector bFlags)
{
    DSLightChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<DSLightChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
DSLightChunkTransitPtr DSLightChunkBase::create(void)
{
    DSLightChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<DSLightChunk>(tmpPtr);
    }

    return fc;
}

DSLightChunk *DSLightChunkBase::createEmptyLocal(BitVector bFlags)
{
    DSLightChunk *returnValue;

    newPtr<DSLightChunk>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
DSLightChunk *DSLightChunkBase::createEmpty(void)
{
    DSLightChunk *returnValue;

    newPtr<DSLightChunk>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr DSLightChunkBase::shallowCopyLocal(
    BitVector bFlags) const
{
    DSLightChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const DSLightChunk *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr DSLightChunkBase::shallowCopyDependent(
    BitVector bFlags) const
{
    DSLightChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const DSLightChunk *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr DSLightChunkBase::shallowCopy(void) const
{
    DSLightChunk *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const DSLightChunk *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

DSLightChunkBase::DSLightChunkBase(void) :
    Inherited(),
    _sfEffectiveRange         (Real32(0.f))
{
}

DSLightChunkBase::DSLightChunkBase(const DSLightChunkBase &source) :
    Inherited(source),
    _sfEffectiveRange         (source._sfEffectiveRange         )
{
}


/*-------------------------- destructors ----------------------------------*/

DSLightChunkBase::~DSLightChunkBase(void)
{
}


GetFieldHandlePtr DSLightChunkBase::getHandleEffectiveRange  (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfEffectiveRange,
             this->getType().getFieldDesc(EffectiveRangeFieldId),
             const_cast<DSLightChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DSLightChunkBase::editHandleEffectiveRange (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfEffectiveRange,
             this->getType().getFieldDesc(EffectiveRangeFieldId),
             this));


    editSField(EffectiveRangeFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void DSLightChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    DSLightChunk *pThis = static_cast<DSLightChunk *>(this);

    pThis->execSync(static_cast<DSLightChunk *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *DSLightChunkBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    DSLightChunk *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const DSLightChunk *>(pRefAspect),
                  dynamic_cast<const DSLightChunk *>(this));

    return returnValue;
}
#endif

void DSLightChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
