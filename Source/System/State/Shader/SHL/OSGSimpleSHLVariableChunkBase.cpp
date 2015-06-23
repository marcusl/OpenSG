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
 **     class SimpleSHLVariableChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"



#include "OSGShaderProgramVariables.h"  // Variables Class

#include "OSGSimpleSHLVariableChunkBase.h"
#include "OSGSimpleSHLVariableChunk.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::SimpleSHLVariableChunk
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var ShaderProgramVariables * SimpleSHLVariableChunkBase::_sfVariables
    fragment program object
*/

/*! \var Int32           SimpleSHLVariableChunkBase::_mfVariableLocations
    fragment program object
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<SimpleSHLVariableChunk *, nsOSG>::_type(
    "SimpleSHLVariableChunkPtr", 
    "StateChunkPtr", 
    SimpleSHLVariableChunk::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(SimpleSHLVariableChunk *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           SimpleSHLVariableChunk *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           SimpleSHLVariableChunk *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void SimpleSHLVariableChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecChildShaderProgramVariablesPtr::Description(
        SFUnrecChildShaderProgramVariablesPtr::getClassType(),
        "variables",
        "fragment program object\n",
        VariablesFieldId, VariablesFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SimpleSHLVariableChunk::editHandleVariables),
        static_cast<FieldGetMethodSig >(&SimpleSHLVariableChunk::getHandleVariables));

    oType.addInitialDesc(pDesc);

    pDesc = new MFInt32::Description(
        MFInt32::getClassType(),
        "variableLocations",
        "fragment program object\n",
        VariableLocationsFieldId, VariableLocationsFieldMask,
        true,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SimpleSHLVariableChunk::editHandleVariableLocations),
        static_cast<FieldGetMethodSig >(&SimpleSHLVariableChunk::getHandleVariableLocations));

    oType.addInitialDesc(pDesc);
}


SimpleSHLVariableChunkBase::TypeObject SimpleSHLVariableChunkBase::_type(
    SimpleSHLVariableChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&SimpleSHLVariableChunkBase::createEmptyLocal),
    SimpleSHLVariableChunk::initMethod,
    SimpleSHLVariableChunk::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&SimpleSHLVariableChunk::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"SimpleSHLVariableChunk\"\n"
    "   parent=\"StateChunk\"\n"
    "   library=\"System\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   useLocalIncludes=\"false\"\n"
    "   docGroupBase=\"GrpSystemShader\"\n"
    ">\n"
    "<!--  <Field\n"
    "\t name=\"SHLChunk\"\n"
    "\t type=\"SHLChunk\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"NULL\"\n"
    "\t access=\"public\"\n"
    "     category=\"pointer\"\n"
    "\t >\n"
    "  </Field> -->\n"
    "  <Field\n"
    "\t name=\"variables\"\n"
    "\t type=\"ShaderProgramVariables\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "     category=\"childpointer\"\n"
    "     childParentType=\"FieldContainer\"\n"
    "     linkParentField=\"Parents\"\n"
    "\t >\n"
    "\tfragment program object\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"variableLocations\"\n"
    "\t type=\"Int32\"\n"
    "\t cardinality=\"multi\"\n"
    "\t visibility=\"internal\"\n"
    "\t access=\"protected\"\n"
    "\t >\n"
    "\tfragment program object\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &SimpleSHLVariableChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &SimpleSHLVariableChunkBase::getType(void) const
{
    return _type;
}

UInt32 SimpleSHLVariableChunkBase::getContainerSize(void) const
{
    return sizeof(SimpleSHLVariableChunk);
}

/*------------------------- decorator get ------------------------------*/


//! Get the SimpleSHLVariableChunk::_sfVariables field.
const SFUnrecChildShaderProgramVariablesPtr *SimpleSHLVariableChunkBase::getSFVariables(void) const
{
    return &_sfVariables;
}

SFUnrecChildShaderProgramVariablesPtr *SimpleSHLVariableChunkBase::editSFVariables      (void)
{
    editSField(VariablesFieldMask);

    return &_sfVariables;
}

//! Get the value of the SimpleSHLVariableChunk::_sfVariables field.
ShaderProgramVariables * SimpleSHLVariableChunkBase::getVariables(void) const
{
    return _sfVariables.getValue();
}

//! Set the value of the SimpleSHLVariableChunk::_sfVariables field.
void SimpleSHLVariableChunkBase::setVariables(ShaderProgramVariables * const value)
{
    editSField(VariablesFieldMask);

    _sfVariables.setValue(value);
}


MFInt32 *SimpleSHLVariableChunkBase::editMFVariableLocations(void)
{
    editMField(VariableLocationsFieldMask, _mfVariableLocations);

    return &_mfVariableLocations;
}

const MFInt32 *SimpleSHLVariableChunkBase::getMFVariableLocations(void) const
{
    return &_mfVariableLocations;
}






/*------------------------------ access -----------------------------------*/

SizeT SimpleSHLVariableChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (VariablesFieldMask & whichField))
    {
        returnValue += _sfVariables.getBinSize();
    }
    if(FieldBits::NoField != (VariableLocationsFieldMask & whichField))
    {
        returnValue += _mfVariableLocations.getBinSize();
    }

    return returnValue;
}

void SimpleSHLVariableChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (VariablesFieldMask & whichField))
    {
        _sfVariables.copyToBin(pMem);
    }
    if(FieldBits::NoField != (VariableLocationsFieldMask & whichField))
    {
        _mfVariableLocations.copyToBin(pMem);
    }
}

void SimpleSHLVariableChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (VariablesFieldMask & whichField))
    {
        editSField(VariablesFieldMask);
        _sfVariables.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (VariableLocationsFieldMask & whichField))
    {
        editMField(VariableLocationsFieldMask, _mfVariableLocations);
        _mfVariableLocations.copyFromBin(pMem);
    }
}

//! create a new instance of the class
SimpleSHLVariableChunkTransitPtr SimpleSHLVariableChunkBase::createLocal(BitVector bFlags)
{
    SimpleSHLVariableChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<SimpleSHLVariableChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
SimpleSHLVariableChunkTransitPtr SimpleSHLVariableChunkBase::createDependent(BitVector bFlags)
{
    SimpleSHLVariableChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<SimpleSHLVariableChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
SimpleSHLVariableChunkTransitPtr SimpleSHLVariableChunkBase::create(void)
{
    SimpleSHLVariableChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<SimpleSHLVariableChunk>(tmpPtr);
    }

    return fc;
}

SimpleSHLVariableChunk *SimpleSHLVariableChunkBase::createEmptyLocal(BitVector bFlags)
{
    SimpleSHLVariableChunk *returnValue;

    newPtr<SimpleSHLVariableChunk>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
SimpleSHLVariableChunk *SimpleSHLVariableChunkBase::createEmpty(void)
{
    SimpleSHLVariableChunk *returnValue;

    newPtr<SimpleSHLVariableChunk>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr SimpleSHLVariableChunkBase::shallowCopyLocal(
    BitVector bFlags) const
{
    SimpleSHLVariableChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SimpleSHLVariableChunk *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr SimpleSHLVariableChunkBase::shallowCopyDependent(
    BitVector bFlags) const
{
    SimpleSHLVariableChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SimpleSHLVariableChunk *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr SimpleSHLVariableChunkBase::shallowCopy(void) const
{
    SimpleSHLVariableChunk *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const SimpleSHLVariableChunk *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

SimpleSHLVariableChunkBase::SimpleSHLVariableChunkBase(void) :
    Inherited(),
    _sfVariables              (this,
                          VariablesFieldId,
                          ShaderProgramVariables::ParentsFieldId),
    _mfVariableLocations      ()
{
}

SimpleSHLVariableChunkBase::SimpleSHLVariableChunkBase(const SimpleSHLVariableChunkBase &source) :
    Inherited(source),
    _sfVariables              (this,
                          VariablesFieldId,
                          ShaderProgramVariables::ParentsFieldId),
    _mfVariableLocations      (source._mfVariableLocations      )
{
}


/*-------------------------- destructors ----------------------------------*/

SimpleSHLVariableChunkBase::~SimpleSHLVariableChunkBase(void)
{
}

/*-------------------------------------------------------------------------*/
/* Child linking                                                           */

bool SimpleSHLVariableChunkBase::unlinkChild(
    FieldContainer * const pChild,
    UInt16           const childFieldId)
{
    if(childFieldId == VariablesFieldId)
    {
        ShaderProgramVariables * pTypedChild =
            dynamic_cast<ShaderProgramVariables *>(pChild);

        if(pTypedChild != NULL)
        {
            if(_sfVariables.getValue() == pTypedChild)
            {
                editSField(VariablesFieldMask);

                _sfVariables.setValue(NULL);

                return true;
            }

            SWARNING << "Parent (["        << this
                     << "] id ["           << this->getId()
                     << "] type ["         << this->getType().getCName()
                     << "] childFieldId [" << childFieldId
                     << "]) - Child (["    << pChild
                     << "] id ["           << pChild->getId()
                     << "] type ["         << pChild->getType().getCName()
                     << "]): link inconsistent!"
                     << std::endl;

            return false;
        }

        return false;
    }


    return Inherited::unlinkChild(pChild, childFieldId);
}

void SimpleSHLVariableChunkBase::onCreate(const SimpleSHLVariableChunk *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        SimpleSHLVariableChunk *pThis = static_cast<SimpleSHLVariableChunk *>(this);

        pThis->setVariables(source->getVariables());
    }
}

GetFieldHandlePtr SimpleSHLVariableChunkBase::getHandleVariables       (void) const
{
    SFUnrecChildShaderProgramVariablesPtr::GetHandlePtr returnValue(
        new  SFUnrecChildShaderProgramVariablesPtr::GetHandle(
             &_sfVariables,
             this->getType().getFieldDesc(VariablesFieldId),
             const_cast<SimpleSHLVariableChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SimpleSHLVariableChunkBase::editHandleVariables      (void)
{
    SFUnrecChildShaderProgramVariablesPtr::EditHandlePtr returnValue(
        new  SFUnrecChildShaderProgramVariablesPtr::EditHandle(
             &_sfVariables,
             this->getType().getFieldDesc(VariablesFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&SimpleSHLVariableChunk::setVariables,
                    static_cast<SimpleSHLVariableChunk *>(this), _1));

    editSField(VariablesFieldMask);

    return returnValue;
}

GetFieldHandlePtr SimpleSHLVariableChunkBase::getHandleVariableLocations (void) const
{
    MFInt32::GetHandlePtr returnValue(
        new  MFInt32::GetHandle(
             &_mfVariableLocations,
             this->getType().getFieldDesc(VariableLocationsFieldId),
             const_cast<SimpleSHLVariableChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SimpleSHLVariableChunkBase::editHandleVariableLocations(void)
{
    MFInt32::EditHandlePtr returnValue(
        new  MFInt32::EditHandle(
             &_mfVariableLocations,
             this->getType().getFieldDesc(VariableLocationsFieldId),
             this));


    editMField(VariableLocationsFieldMask, _mfVariableLocations);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void SimpleSHLVariableChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    SimpleSHLVariableChunk *pThis = static_cast<SimpleSHLVariableChunk *>(this);

    pThis->execSync(static_cast<SimpleSHLVariableChunk *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *SimpleSHLVariableChunkBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    SimpleSHLVariableChunk *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const SimpleSHLVariableChunk *>(pRefAspect),
                  dynamic_cast<const SimpleSHLVariableChunk *>(this));

    return returnValue;
}
#endif

void SimpleSHLVariableChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<SimpleSHLVariableChunk *>(this)->setVariables(NULL);

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfVariableLocations.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE
