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
 **     class ShaderValueVariable!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"



#include "OSGFieldContainer.h"          // Parents Class

#include "OSGShaderValueVariableBase.h"
#include "OSGShaderValueVariable.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ShaderValueVariable
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var UInt16          ShaderValueVariableBase::_mfVariableIdx
    
*/

/*! \var FieldContainer * ShaderValueVariableBase::_mfParents
    
*/

/*! \var UInt16          ShaderValueVariableBase::_mfExeVariableIdx
    
*/

/*! \var FieldContainer * ShaderValueVariableBase::_mfExeParents
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<ShaderValueVariable *, nsOSG>::_type(
    "ShaderValueVariablePtr", 
    "ShaderVariablePtr", 
    ShaderValueVariable::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(ShaderValueVariable *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ShaderValueVariable *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ShaderValueVariable *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ShaderValueVariableBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFUInt16::Description(
        MFUInt16::getClassType(),
        "variableIdx",
        "",
        VariableIdxFieldId, VariableIdxFieldMask,
        true,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast     <FieldEditMethodSig>(&ShaderValueVariable::invalidEditField),
        static_cast     <FieldGetMethodSig >(&ShaderValueVariable::invalidGetField));

    oType.addInitialDesc(pDesc);

    pDesc = new MFParentFieldContainerPtr::Description(
        MFParentFieldContainerPtr::getClassType(),
        "parents",
        "",
        ParentsFieldId, ParentsFieldMask,
        true,
        (Field::FStdAccess),
        static_cast     <FieldEditMethodSig>(&ShaderValueVariable::invalidEditField),
        static_cast     <FieldGetMethodSig >(&ShaderValueVariable::invalidGetField));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUInt16::Description(
        MFUInt16::getClassType(),
        "exeVariableIdx",
        "",
        ExeVariableIdxFieldId, ExeVariableIdxFieldMask,
        true,
        (Field::FClusterLocal),
        static_cast     <FieldEditMethodSig>(&ShaderValueVariable::invalidEditField),
        static_cast     <FieldGetMethodSig >(&ShaderValueVariable::invalidGetField));

    oType.addInitialDesc(pDesc);

    pDesc = new MFParentFieldContainerPtr::Description(
        MFParentFieldContainerPtr::getClassType(),
        "exeParents",
        "",
        ExeParentsFieldId, ExeParentsFieldMask,
        true,
        (Field::FStdAccess | Field::FClusterLocal),
        static_cast     <FieldEditMethodSig>(&ShaderValueVariable::invalidEditField),
        static_cast     <FieldGetMethodSig >(&ShaderValueVariable::invalidGetField));

    oType.addInitialDesc(pDesc);
}


ShaderValueVariableBase::TypeObject ShaderValueVariableBase::_type(
    ShaderValueVariableBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    NULL,
    ShaderValueVariable::initMethod,
    ShaderValueVariable::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ShaderValueVariable::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"ShaderValueVariable\"\n"
    "    parent=\"ShaderVariable\"\n"
    "    library=\"System\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"abstract\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    docGroupBase=\"GrpSystemShader\"\n"
    "    >\n"
    "    <Field\n"
    "        name=\"variableIdx\"\n"
    "        type=\"UInt16\"\n"
    "        cardinality=\"multi\"\n"
    "        visibility=\"internal\"\n"
    "        access=\"none\"\n"
    "        >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"parents\"\n"
    "        type=\"FieldContainer\"\n"
    "        cardinality=\"multi\"\n"
    "        visibility=\"internal\"\n"
    "        access=\"none\"\n"
    "        category=\"parentpointer\"\n"
    "        fieldFlags=\"FStdAccess\"\n"
    "        >\n"
    "    </Field>\n"
    "\n"
    "\n"
    "    <Field\n"
    "        name=\"exeVariableIdx\"\n"
    "        type=\"UInt16\"\n"
    "        cardinality=\"multi\"\n"
    "        visibility=\"internal\"\n"
    "        access=\"none\"\n"
    "        fieldFlags=\"FClusterLocal\"\n"
    "        >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"exeParents\"\n"
    "        type=\"FieldContainer\"\n"
    "        cardinality=\"multi\"\n"
    "        visibility=\"internal\"\n"
    "        access=\"none\"\n"
    "        category=\"parentpointer\"\n"
    "        fieldFlags=\"FStdAccess, FClusterLocal\"\n"
    "        >\n"
    "    </Field>\n"
    "<!---        fieldFlags=\"FStdAccess, FClusterLocal\" -->\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShaderValueVariableBase::getType(void)
{
    return _type;
}

const FieldContainerType &ShaderValueVariableBase::getType(void) const
{
    return _type;
}

UInt32 ShaderValueVariableBase::getContainerSize(void) const
{
    return sizeof(ShaderValueVariable);
}

/*------------------------- decorator get ------------------------------*/










/*------------------------------ access -----------------------------------*/

SizeT ShaderValueVariableBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (VariableIdxFieldMask & whichField))
    {
        returnValue += _mfVariableIdx.getBinSize();
    }
    if(FieldBits::NoField != (ParentsFieldMask & whichField))
    {
        returnValue += _mfParents.getBinSize();
    }
    if(FieldBits::NoField != (ExeVariableIdxFieldMask & whichField))
    {
        returnValue += _mfExeVariableIdx.getBinSize();
    }
    if(FieldBits::NoField != (ExeParentsFieldMask & whichField))
    {
        returnValue += _mfExeParents.getBinSize();
    }

    return returnValue;
}

void ShaderValueVariableBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (VariableIdxFieldMask & whichField))
    {
        _mfVariableIdx.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ParentsFieldMask & whichField))
    {
        _mfParents.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ExeVariableIdxFieldMask & whichField))
    {
        _mfExeVariableIdx.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ExeParentsFieldMask & whichField))
    {
        _mfExeParents.copyToBin(pMem);
    }
}

void ShaderValueVariableBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (VariableIdxFieldMask & whichField))
    {
        editMField(VariableIdxFieldMask, _mfVariableIdx);
        _mfVariableIdx.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ParentsFieldMask & whichField))
    {
        editMField(ParentsFieldMask, _mfParents);
        _mfParents.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ExeVariableIdxFieldMask & whichField))
    {
        editMField(ExeVariableIdxFieldMask, _mfExeVariableIdx);
        _mfExeVariableIdx.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ExeParentsFieldMask & whichField))
    {
        editMField(ExeParentsFieldMask, _mfExeParents);
        _mfExeParents.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

ShaderValueVariableBase::ShaderValueVariableBase(void) :
    Inherited(),
    _mfVariableIdx            (),
    _mfParents                (),
    _mfExeVariableIdx         (),
    _mfExeParents             ()
{
}

ShaderValueVariableBase::ShaderValueVariableBase(const ShaderValueVariableBase &source) :
    Inherited(source),
    _mfVariableIdx            (source._mfVariableIdx            ),
    _mfParents                (),
    _mfExeVariableIdx         (source._mfExeVariableIdx         ),
    _mfExeParents             ()
{
}


/*-------------------------- destructors ----------------------------------*/

ShaderValueVariableBase::~ShaderValueVariableBase(void)
{
}
/*-------------------------------------------------------------------------*/
/* Parent linking                                                          */

bool ShaderValueVariableBase::linkParent(
    FieldContainer * const pParent,
    UInt16           const childFieldId,
    UInt16           const parentFieldId )
{
    if(parentFieldId == ParentsFieldId)
    {
        FieldContainer * pTypedParent =
            dynamic_cast< FieldContainer * >(pParent);

        if(pTypedParent != NULL)
        {
            editMField(ParentsFieldMask, _mfParents);

            _mfParents.push_back(pTypedParent, childFieldId);

            return true;
        }

        return false;
    }

    if(parentFieldId == ExeParentsFieldId)
    {
        FieldContainer * pTypedParent =
            dynamic_cast< FieldContainer * >(pParent);

        if(pTypedParent != NULL)
        {
            editMField(ExeParentsFieldMask, _mfExeParents);

            _mfExeParents.push_back(pTypedParent, childFieldId);

            return true;
        }

        return false;
    }

    return Inherited::linkParent(pParent, childFieldId, parentFieldId);
}

bool ShaderValueVariableBase::unlinkParent(
    FieldContainer * const pParent,
    UInt16           const parentFieldId)
{
    if(parentFieldId == ParentsFieldId)
    {
        FieldContainer * pTypedParent =
            dynamic_cast< FieldContainer * >(pParent);

        if(pTypedParent != NULL)
        {
            Int32 iParentIdx = _mfParents.findIndex(pTypedParent);

            if(iParentIdx != -1)
            {
                editMField(ParentsFieldMask, _mfParents);

                _mfParents.erase(iParentIdx);

                return true;
            }

            SWARNING << "Child (["          << this
                     << "] id ["            << this->getId()
                     << "] type ["          << this->getType().getCName()
                     << "] parentFieldId [" << parentFieldId
                     << "]) - Parent (["    << pParent
                     << "] id ["            << pParent->getId()
                     << "] type ["          << pParent->getType().getCName()
                     << "]): link inconsistent!"
                     << std::endl;

            return false;
        }

        return false;
    }

    if(parentFieldId == ExeParentsFieldId)
    {
        FieldContainer * pTypedParent =
            dynamic_cast< FieldContainer * >(pParent);

        if(pTypedParent != NULL)
        {
            Int32 iParentIdx = _mfExeParents.findIndex(pTypedParent);

            if(iParentIdx != -1)
            {
                editMField(ExeParentsFieldMask, _mfExeParents);

                _mfExeParents.erase(iParentIdx);

                return true;
            }

            SWARNING << "Child (["          << this
                     << "] id ["            << this->getId()
                     << "] type ["          << this->getType().getCName()
                     << "] parentFieldId [" << parentFieldId
                     << "]) - Parent (["    << pParent
                     << "] id ["            << pParent->getId()
                     << "] type ["          << pParent->getType().getCName()
                     << "]): link inconsistent!"
                     << std::endl;

            return false;
        }

        return false;
    }

    return Inherited::unlinkParent(pParent, parentFieldId);
}



GetFieldHandlePtr ShaderValueVariableBase::getHandleVariableIdx     (void) const
{
    MFUInt16::GetHandlePtr returnValue;

    return returnValue;
}

EditFieldHandlePtr ShaderValueVariableBase::editHandleVariableIdx    (void)
{
    EditFieldHandlePtr returnValue;

    return returnValue;
}

GetFieldHandlePtr ShaderValueVariableBase::getHandleParents         (void) const
{
    MFParentFieldContainerPtr::GetHandlePtr returnValue;

    return returnValue;
}

EditFieldHandlePtr ShaderValueVariableBase::editHandleParents        (void)
{
    EditFieldHandlePtr returnValue;

    return returnValue;
}

GetFieldHandlePtr ShaderValueVariableBase::getHandleExeVariableIdx  (void) const
{
    MFUInt16::GetHandlePtr returnValue;

    return returnValue;
}

EditFieldHandlePtr ShaderValueVariableBase::editHandleExeVariableIdx (void)
{
    EditFieldHandlePtr returnValue;

    return returnValue;
}

GetFieldHandlePtr ShaderValueVariableBase::getHandleExeParents      (void) const
{
    MFParentFieldContainerPtr::GetHandlePtr returnValue;

    return returnValue;
}

EditFieldHandlePtr ShaderValueVariableBase::editHandleExeParents     (void)
{
    EditFieldHandlePtr returnValue;

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ShaderValueVariableBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ShaderValueVariable *pThis = static_cast<ShaderValueVariable *>(this);

    pThis->execSync(static_cast<ShaderValueVariable *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void ShaderValueVariableBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfVariableIdx.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    _mfExeVariableIdx.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE
