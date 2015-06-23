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
 **     class ProgramChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGProgramChunkBase.h"
#include "OSGProgramChunk.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ProgramChunk
    The ProgramChunk is the base class for generic ASCII-based programs
    inside OpenGL. For actual use see the derived VertexProgramChunk and
    FragmentProgramChunk.

    See \ref PageSystemProgramChunk for a description.

    The ProgramChunk contains the source code of the program to use
    (OSG::ProgramChunk::_sfProgram) and the local program parameters
    (OSG::ProgramChunk::_mfParamValues). The parameters can have an associated
    name (OSG::ProgramChunk::_mfParamNames).
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var std::string     ProgramChunkBase::_sfProgram
    The program source code.
*/

/*! \var Vec4f           ProgramChunkBase::_mfParamValues
    Program Parameters
*/

/*! \var std::string     ProgramChunkBase::_mfParamNames
    Symbolic names for the program parameters.
*/

/*! \var UInt32          ProgramChunkBase::_sfGLId
    The OpenGL ID of the program.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<ProgramChunk *, nsOSG>::_type(
    "ProgramChunkPtr", 
    "StateChunkPtr", 
    ProgramChunk::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(ProgramChunk *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ProgramChunk *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ProgramChunk *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ProgramChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFString::Description(
        SFString::getClassType(),
        "program",
        "The program source code.\n",
        ProgramFieldId, ProgramFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ProgramChunk::editHandleProgram),
        static_cast<FieldGetMethodSig >(&ProgramChunk::getHandleProgram));

    oType.addInitialDesc(pDesc);

    pDesc = new MFVec4f::Description(
        MFVec4f::getClassType(),
        "paramValues",
        "Program Parameters\n",
        ParamValuesFieldId, ParamValuesFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ProgramChunk::editHandleParamValues),
        static_cast<FieldGetMethodSig >(&ProgramChunk::getHandleParamValues));

    oType.addInitialDesc(pDesc);

    pDesc = new MFString::Description(
        MFString::getClassType(),
        "paramNames",
        "Symbolic names for the program parameters.\n",
        ParamNamesFieldId, ParamNamesFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ProgramChunk::editHandleParamNames),
        static_cast<FieldGetMethodSig >(&ProgramChunk::getHandleParamNames));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "GLId",
        "The OpenGL ID of the program.\n",
        GLIdFieldId, GLIdFieldMask,
        true,
        (Field::FClusterLocal),
        static_cast<FieldEditMethodSig>(&ProgramChunk::editHandleGLId),
        static_cast<FieldGetMethodSig >(&ProgramChunk::getHandleGLId));

    oType.addInitialDesc(pDesc);
}


ProgramChunkBase::TypeObject ProgramChunkBase::_type(
    ProgramChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    NULL,
    ProgramChunk::initMethod,
    ProgramChunk::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ProgramChunk::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"ProgramChunk\"\n"
    "    parent=\"StateChunk\"\n"
    "    library=\"State\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"abstract\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    docGroupBase=\"GrpStateARBProgram\"\n"
    "    >\n"
    "    The ProgramChunk is the base class for generic ASCII-based programs\n"
    "    inside OpenGL. For actual use see the derived VertexProgramChunk and\n"
    "    FragmentProgramChunk.\n"
    "\n"
    "    See \\ref PageSystemProgramChunk for a description.\n"
    "\n"
    "    The ProgramChunk contains the source code of the program to use\n"
    "    (OSG::ProgramChunk::_sfProgram) and the local program parameters\n"
    "    (OSG::ProgramChunk::_mfParamValues). The parameters can have an associated\n"
    "    name (OSG::ProgramChunk::_mfParamNames).\n"
    "    <Field\n"
    "        name=\"program\"\n"
    "        type=\"std::string\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        access=\"public\"\n"
    "        >\n"
    "\tThe program source code.\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"paramValues\"\n"
    "        type=\"Vec4f\"\n"
    "        cardinality=\"multi\"\n"
    "        visibility=\"external\"\n"
    "        access=\"public\"\n"
    "        >\n"
    "\tProgram Parameters\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"paramNames\"\n"
    "        type=\"std::string\"\n"
    "        cardinality=\"multi\"\n"
    "        visibility=\"external\"\n"
    "        access=\"public\"\n"
    "        >\n"
    "\tSymbolic names for the program parameters.\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"GLId\"\n"
    "        type=\"UInt32\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"internal\"\n"
    "        access=\"protected\"\n"
    "        defaultValue=\"0\"\n"
    "        fieldFlags=\"FClusterLocal\"\n"
    "        >\n"
    "\tThe OpenGL ID of the program.\n"
    "    </Field>\n"
    "</FieldContainer>\n",
    "The ProgramChunk is the base class for generic ASCII-based programs\n"
    "inside OpenGL. For actual use see the derived VertexProgramChunk and\n"
    "FragmentProgramChunk.\n"
    "\n"
    "See \\ref PageSystemProgramChunk for a description.\n"
    "\n"
    "The ProgramChunk contains the source code of the program to use\n"
    "(OSG::ProgramChunk::_sfProgram) and the local program parameters\n"
    "(OSG::ProgramChunk::_mfParamValues). The parameters can have an associated\n"
    "name (OSG::ProgramChunk::_mfParamNames).\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ProgramChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &ProgramChunkBase::getType(void) const
{
    return _type;
}

UInt32 ProgramChunkBase::getContainerSize(void) const
{
    return sizeof(ProgramChunk);
}

/*------------------------- decorator get ------------------------------*/


SFString *ProgramChunkBase::editSFProgram(void)
{
    editSField(ProgramFieldMask);

    return &_sfProgram;
}

const SFString *ProgramChunkBase::getSFProgram(void) const
{
    return &_sfProgram;
}


MFVec4f *ProgramChunkBase::editMFParamValues(void)
{
    editMField(ParamValuesFieldMask, _mfParamValues);

    return &_mfParamValues;
}

const MFVec4f *ProgramChunkBase::getMFParamValues(void) const
{
    return &_mfParamValues;
}


MFString *ProgramChunkBase::editMFParamNames(void)
{
    editMField(ParamNamesFieldMask, _mfParamNames);

    return &_mfParamNames;
}

const MFString *ProgramChunkBase::getMFParamNames(void) const
{
    return &_mfParamNames;
}


SFUInt32 *ProgramChunkBase::editSFGLId(void)
{
    editSField(GLIdFieldMask);

    return &_sfGLId;
}

const SFUInt32 *ProgramChunkBase::getSFGLId(void) const
{
    return &_sfGLId;
}






/*------------------------------ access -----------------------------------*/

SizeT ProgramChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ProgramFieldMask & whichField))
    {
        returnValue += _sfProgram.getBinSize();
    }
    if(FieldBits::NoField != (ParamValuesFieldMask & whichField))
    {
        returnValue += _mfParamValues.getBinSize();
    }
    if(FieldBits::NoField != (ParamNamesFieldMask & whichField))
    {
        returnValue += _mfParamNames.getBinSize();
    }
    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        returnValue += _sfGLId.getBinSize();
    }

    return returnValue;
}

void ProgramChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ProgramFieldMask & whichField))
    {
        _sfProgram.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ParamValuesFieldMask & whichField))
    {
        _mfParamValues.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ParamNamesFieldMask & whichField))
    {
        _mfParamNames.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        _sfGLId.copyToBin(pMem);
    }
}

void ProgramChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ProgramFieldMask & whichField))
    {
        editSField(ProgramFieldMask);
        _sfProgram.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ParamValuesFieldMask & whichField))
    {
        editMField(ParamValuesFieldMask, _mfParamValues);
        _mfParamValues.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ParamNamesFieldMask & whichField))
    {
        editMField(ParamNamesFieldMask, _mfParamNames);
        _mfParamNames.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        editSField(GLIdFieldMask);
        _sfGLId.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

ProgramChunkBase::ProgramChunkBase(void) :
    Inherited(),
    _sfProgram                (),
    _mfParamValues            (),
    _mfParamNames             (),
    _sfGLId                   (UInt32(0))
{
}

ProgramChunkBase::ProgramChunkBase(const ProgramChunkBase &source) :
    Inherited(source),
    _sfProgram                (source._sfProgram                ),
    _mfParamValues            (source._mfParamValues            ),
    _mfParamNames             (source._mfParamNames             ),
    _sfGLId                   (source._sfGLId                   )
{
}


/*-------------------------- destructors ----------------------------------*/

ProgramChunkBase::~ProgramChunkBase(void)
{
}


GetFieldHandlePtr ProgramChunkBase::getHandleProgram         (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfProgram,
             this->getType().getFieldDesc(ProgramFieldId),
             const_cast<ProgramChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ProgramChunkBase::editHandleProgram        (void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfProgram,
             this->getType().getFieldDesc(ProgramFieldId),
             this));


    editSField(ProgramFieldMask);

    return returnValue;
}

GetFieldHandlePtr ProgramChunkBase::getHandleParamValues     (void) const
{
    MFVec4f::GetHandlePtr returnValue(
        new  MFVec4f::GetHandle(
             &_mfParamValues,
             this->getType().getFieldDesc(ParamValuesFieldId),
             const_cast<ProgramChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ProgramChunkBase::editHandleParamValues    (void)
{
    MFVec4f::EditHandlePtr returnValue(
        new  MFVec4f::EditHandle(
             &_mfParamValues,
             this->getType().getFieldDesc(ParamValuesFieldId),
             this));


    editMField(ParamValuesFieldMask, _mfParamValues);

    return returnValue;
}

GetFieldHandlePtr ProgramChunkBase::getHandleParamNames      (void) const
{
    MFString::GetHandlePtr returnValue(
        new  MFString::GetHandle(
             &_mfParamNames,
             this->getType().getFieldDesc(ParamNamesFieldId),
             const_cast<ProgramChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ProgramChunkBase::editHandleParamNames     (void)
{
    MFString::EditHandlePtr returnValue(
        new  MFString::EditHandle(
             &_mfParamNames,
             this->getType().getFieldDesc(ParamNamesFieldId),
             this));


    editMField(ParamNamesFieldMask, _mfParamNames);

    return returnValue;
}

GetFieldHandlePtr ProgramChunkBase::getHandleGLId            (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfGLId,
             this->getType().getFieldDesc(GLIdFieldId),
             const_cast<ProgramChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ProgramChunkBase::editHandleGLId           (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfGLId,
             this->getType().getFieldDesc(GLIdFieldId),
             this));


    editSField(GLIdFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ProgramChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ProgramChunk *pThis = static_cast<ProgramChunk *>(this);

    pThis->execSync(static_cast<ProgramChunk *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void ProgramChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfParamValues.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    _mfParamNames.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE
