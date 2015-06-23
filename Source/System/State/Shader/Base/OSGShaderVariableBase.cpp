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
 **     class ShaderVariable!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGShaderVariableBase.h"
#include "OSGShaderVariable.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ShaderVariable
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var std::string     ShaderVariableBase::_sfName
    Uniform name.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<ShaderVariable *, nsOSG>::_type(
    "ShaderVariablePtr", 
    "FieldContainerPtr", 
    ShaderVariable::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(ShaderVariable *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ShaderVariable *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ShaderVariable *,
                           nsOSG)

DataType &FieldTraits< ShaderVariable *, nsOSG + 1 >::getType(void)
{
    return FieldTraits<ShaderVariable *, nsOSG>::getType();
}


OSG_EXPORT_PTR_MFIELD(ChildPointerMField,
                      ShaderVariable *,
                      UnrecordedRefCountPolicy,
                      nsOSG + 1)


/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ShaderVariableBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFString::Description(
        SFString::getClassType(),
        "name",
        "Uniform name.\n",
        NameFieldId, NameFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderVariable::editHandleName),
        static_cast<FieldGetMethodSig >(&ShaderVariable::getHandleName));

    oType.addInitialDesc(pDesc);
}


ShaderVariableBase::TypeObject ShaderVariableBase::_type(
    ShaderVariableBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    NULL,
    ShaderVariable::initMethod,
    ShaderVariable::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ShaderVariable::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"ShaderVariable\"\n"
    "    parent=\"FieldContainer\"\n"
    "    library=\"System\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"abstract\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    childFields=\"multi\"\n"
    "    docGroupBase=\"GrpSystemShader\"\n"
    "    >\n"
    "    <Field\n"
    "        name=\"name\"\n"
    "        type=\"std::string\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        access=\"protected\"\n"
    "        >\n"
    "        Uniform name.\n"
    "    </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShaderVariableBase::getType(void)
{
    return _type;
}

const FieldContainerType &ShaderVariableBase::getType(void) const
{
    return _type;
}

UInt32 ShaderVariableBase::getContainerSize(void) const
{
    return sizeof(ShaderVariable);
}

/*------------------------- decorator get ------------------------------*/


SFString *ShaderVariableBase::editSFName(void)
{
    editSField(NameFieldMask);

    return &_sfName;
}

const SFString *ShaderVariableBase::getSFName(void) const
{
    return &_sfName;
}






/*------------------------------ access -----------------------------------*/

SizeT ShaderVariableBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (NameFieldMask & whichField))
    {
        returnValue += _sfName.getBinSize();
    }

    return returnValue;
}

void ShaderVariableBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (NameFieldMask & whichField))
    {
        _sfName.copyToBin(pMem);
    }
}

void ShaderVariableBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (NameFieldMask & whichField))
    {
        editSField(NameFieldMask);
        _sfName.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

ShaderVariableBase::ShaderVariableBase(void) :
    Inherited(),
    _sfName                   ()
{
}

ShaderVariableBase::ShaderVariableBase(const ShaderVariableBase &source) :
    Inherited(source),
    _sfName                   (source._sfName                   )
{
}


/*-------------------------- destructors ----------------------------------*/

ShaderVariableBase::~ShaderVariableBase(void)
{
}


GetFieldHandlePtr ShaderVariableBase::getHandleName            (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfName,
             this->getType().getFieldDesc(NameFieldId),
             const_cast<ShaderVariableBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ShaderVariableBase::editHandleName           (void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfName,
             this->getType().getFieldDesc(NameFieldId),
             this));


    editSField(NameFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ShaderVariableBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ShaderVariable *pThis = static_cast<ShaderVariable *>(this);

    pThis->execSync(static_cast<ShaderVariable *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void ShaderVariableBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
