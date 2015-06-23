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
 **     class FogChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"


#include "OSGGL.h"                        // Mode default header


#include "OSGFogChunkBase.h"
#include "OSGFogChunk.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::FogChunk
    This chunk wraps glFog() (OSG::FogChunk::_sfMode, OSG::FogChunk::_sfFogColor,
    OSG::FogChunk::_sfStart, OSG::FogChunk::_sfEnd, OSG::FogChunk::_sfDensity).
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var GLenum          FogChunkBase::_sfMode
    The fog type to use (GL_LINEAR, GL_EXP, GL_EXP2, default: GL_EXP).
*/

/*! \var Color4f         FogChunkBase::_sfColor
    The color of the fog (default: 0, 0, 0, 0).
*/

/*! \var Real32          FogChunkBase::_sfStart
    The near value for the fog, used in GL_LINEAR mode (default: 0.f)
*/

/*! \var Real32          FogChunkBase::_sfEnd
    The far value for the fog, used in GL_LINEAR mode (default: 1.f)
*/

/*! \var Real32          FogChunkBase::_sfDensity
    The denisty of the fog, used in GL_EXP, GL_EXP2 mode (default: 1.f)
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<FogChunk *, nsOSG>::_type(
    "FogChunkPtr", 
    "StateChunkPtr", 
    FogChunk::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(FogChunk *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           FogChunk *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           FogChunk *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void FogChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "mode",
        "The fog type to use (GL_LINEAR, GL_EXP, GL_EXP2, default: GL_EXP).\n",
        ModeFieldId, ModeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FogChunk::editHandleMode),
        static_cast<FieldGetMethodSig >(&FogChunk::getHandleMode));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "color",
        "The color of the fog (default: 0, 0, 0, 0).\n",
        ColorFieldId, ColorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FogChunk::editHandleColor),
        static_cast<FieldGetMethodSig >(&FogChunk::getHandleColor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "start",
        "The near value for the fog, used in GL_LINEAR mode (default: 0.f)\n",
        StartFieldId, StartFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FogChunk::editHandleStart),
        static_cast<FieldGetMethodSig >(&FogChunk::getHandleStart));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "end",
        "The far value for the fog, used in GL_LINEAR mode (default: 1.f)\n",
        EndFieldId, EndFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FogChunk::editHandleEnd),
        static_cast<FieldGetMethodSig >(&FogChunk::getHandleEnd));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "density",
        "The denisty of the fog, used in GL_EXP, GL_EXP2 mode (default: 1.f)\n",
        DensityFieldId, DensityFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FogChunk::editHandleDensity),
        static_cast<FieldGetMethodSig >(&FogChunk::getHandleDensity));

    oType.addInitialDesc(pDesc);
}


FogChunkBase::TypeObject FogChunkBase::_type(
    FogChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&FogChunkBase::createEmptyLocal),
    FogChunk::initMethod,
    FogChunk::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&FogChunk::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"FogChunk\"\n"
    "   parent=\"StateChunk\"\n"
    "   library=\"State\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   docGroupBase=\"GrpStateOpenGL\"\n"
    "   >\n"
    "  This chunk wraps glFog() (OSG::FogChunk::_sfMode, OSG::FogChunk::_sfFogColor,\n"
    "  OSG::FogChunk::_sfStart, OSG::FogChunk::_sfEnd, OSG::FogChunk::_sfDensity).\n"
    "\n"
    "  <Field\n"
    "     name=\"mode\"\n"
    "     type=\"GLenum\"\n"
    "     category=\"data\"\n"
    "     cardinality=\"single\"\n"
    "     defaultValue=\"GL_EXP\"\n"
    "     defaultHeader=\"&quot;OSGGL.h&quot;\"\n"
    "     visibility=\"external\"\n"
    "     access=\"public\"\n"
    "     >\n"
    "    The fog type to use (GL_LINEAR, GL_EXP, GL_EXP2, default: GL_EXP).\n"
    "  </Field>\n"
    "\n"
    "  <Field\n"
    "     name=\"color\"\n"
    "     type=\"Color4f\"\n"
    "     category=\"data\"\n"
    "     cardinality=\"single\"\n"
    "     defaultValue=\"0.f, 0.f, 0.f, 0.f\"\n"
    "     visibility=\"external\"\n"
    "     access=\"public\"\n"
    "     >\n"
    "    The color of the fog (default: 0, 0, 0, 0).\n"
    "  </Field>\n"
    "\n"
    "  <Field\n"
    "     name=\"start\"\n"
    "     type=\"Real32\"\n"
    "     category=\"data\"\n"
    "     cardinality=\"single\"\n"
    "     defaultValue=\"0.f\"\n"
    "     visibility=\"external\"\n"
    "     access=\"public\"\n"
    "     >\n"
    "    The near value for the fog, used in GL_LINEAR mode (default: 0.f)\n"
    "  </Field>\n"
    "\n"
    "  <Field\n"
    "     name=\"end\"\n"
    "     type=\"Real32\"\n"
    "     category=\"data\"\n"
    "     cardinality=\"single\"\n"
    "     defaultValue=\"1.f\"\n"
    "     visibility=\"external\"\n"
    "     access=\"public\"\n"
    "     >\n"
    "    The far value for the fog, used in GL_LINEAR mode (default: 1.f)\n"
    "  </Field>\n"
    "\n"
    "  <Field\n"
    "     name=\"density\"\n"
    "     type=\"Real32\"\n"
    "     category=\"data\"\n"
    "     cardinality=\"single\"\n"
    "     defaultValue=\"1.f\"\n"
    "     visibility=\"external\"\n"
    "     access=\"public\"\n"
    "     >\n"
    "    The denisty of the fog, used in GL_EXP, GL_EXP2 mode (default: 1.f)\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    "This chunk wraps glFog() (OSG::FogChunk::_sfMode, OSG::FogChunk::_sfFogColor,\n"
    "OSG::FogChunk::_sfStart, OSG::FogChunk::_sfEnd, OSG::FogChunk::_sfDensity).\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &FogChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &FogChunkBase::getType(void) const
{
    return _type;
}

UInt32 FogChunkBase::getContainerSize(void) const
{
    return sizeof(FogChunk);
}

/*------------------------- decorator get ------------------------------*/


SFGLenum *FogChunkBase::editSFMode(void)
{
    editSField(ModeFieldMask);

    return &_sfMode;
}

const SFGLenum *FogChunkBase::getSFMode(void) const
{
    return &_sfMode;
}


SFColor4f *FogChunkBase::editSFColor(void)
{
    editSField(ColorFieldMask);

    return &_sfColor;
}

const SFColor4f *FogChunkBase::getSFColor(void) const
{
    return &_sfColor;
}


SFReal32 *FogChunkBase::editSFStart(void)
{
    editSField(StartFieldMask);

    return &_sfStart;
}

const SFReal32 *FogChunkBase::getSFStart(void) const
{
    return &_sfStart;
}


SFReal32 *FogChunkBase::editSFEnd(void)
{
    editSField(EndFieldMask);

    return &_sfEnd;
}

const SFReal32 *FogChunkBase::getSFEnd(void) const
{
    return &_sfEnd;
}


SFReal32 *FogChunkBase::editSFDensity(void)
{
    editSField(DensityFieldMask);

    return &_sfDensity;
}

const SFReal32 *FogChunkBase::getSFDensity(void) const
{
    return &_sfDensity;
}






/*------------------------------ access -----------------------------------*/

SizeT FogChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ModeFieldMask & whichField))
    {
        returnValue += _sfMode.getBinSize();
    }
    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        returnValue += _sfColor.getBinSize();
    }
    if(FieldBits::NoField != (StartFieldMask & whichField))
    {
        returnValue += _sfStart.getBinSize();
    }
    if(FieldBits::NoField != (EndFieldMask & whichField))
    {
        returnValue += _sfEnd.getBinSize();
    }
    if(FieldBits::NoField != (DensityFieldMask & whichField))
    {
        returnValue += _sfDensity.getBinSize();
    }

    return returnValue;
}

void FogChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ModeFieldMask & whichField))
    {
        _sfMode.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        _sfColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (StartFieldMask & whichField))
    {
        _sfStart.copyToBin(pMem);
    }
    if(FieldBits::NoField != (EndFieldMask & whichField))
    {
        _sfEnd.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DensityFieldMask & whichField))
    {
        _sfDensity.copyToBin(pMem);
    }
}

void FogChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ModeFieldMask & whichField))
    {
        editSField(ModeFieldMask);
        _sfMode.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        editSField(ColorFieldMask);
        _sfColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (StartFieldMask & whichField))
    {
        editSField(StartFieldMask);
        _sfStart.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (EndFieldMask & whichField))
    {
        editSField(EndFieldMask);
        _sfEnd.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DensityFieldMask & whichField))
    {
        editSField(DensityFieldMask);
        _sfDensity.copyFromBin(pMem);
    }
}

//! create a new instance of the class
FogChunkTransitPtr FogChunkBase::createLocal(BitVector bFlags)
{
    FogChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<FogChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
FogChunkTransitPtr FogChunkBase::createDependent(BitVector bFlags)
{
    FogChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<FogChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
FogChunkTransitPtr FogChunkBase::create(void)
{
    FogChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<FogChunk>(tmpPtr);
    }

    return fc;
}

FogChunk *FogChunkBase::createEmptyLocal(BitVector bFlags)
{
    FogChunk *returnValue;

    newPtr<FogChunk>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
FogChunk *FogChunkBase::createEmpty(void)
{
    FogChunk *returnValue;

    newPtr<FogChunk>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr FogChunkBase::shallowCopyLocal(
    BitVector bFlags) const
{
    FogChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const FogChunk *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr FogChunkBase::shallowCopyDependent(
    BitVector bFlags) const
{
    FogChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const FogChunk *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr FogChunkBase::shallowCopy(void) const
{
    FogChunk *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const FogChunk *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

FogChunkBase::FogChunkBase(void) :
    Inherited(),
    _sfMode                   (GLenum(GL_EXP)),
    _sfColor                  (Color4f(0.f, 0.f, 0.f, 0.f)),
    _sfStart                  (Real32(0.f)),
    _sfEnd                    (Real32(1.f)),
    _sfDensity                (Real32(1.f))
{
}

FogChunkBase::FogChunkBase(const FogChunkBase &source) :
    Inherited(source),
    _sfMode                   (source._sfMode                   ),
    _sfColor                  (source._sfColor                  ),
    _sfStart                  (source._sfStart                  ),
    _sfEnd                    (source._sfEnd                    ),
    _sfDensity                (source._sfDensity                )
{
}


/*-------------------------- destructors ----------------------------------*/

FogChunkBase::~FogChunkBase(void)
{
}


GetFieldHandlePtr FogChunkBase::getHandleMode            (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfMode,
             this->getType().getFieldDesc(ModeFieldId),
             const_cast<FogChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FogChunkBase::editHandleMode           (void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfMode,
             this->getType().getFieldDesc(ModeFieldId),
             this));


    editSField(ModeFieldMask);

    return returnValue;
}

GetFieldHandlePtr FogChunkBase::getHandleColor           (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfColor,
             this->getType().getFieldDesc(ColorFieldId),
             const_cast<FogChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FogChunkBase::editHandleColor          (void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfColor,
             this->getType().getFieldDesc(ColorFieldId),
             this));


    editSField(ColorFieldMask);

    return returnValue;
}

GetFieldHandlePtr FogChunkBase::getHandleStart           (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfStart,
             this->getType().getFieldDesc(StartFieldId),
             const_cast<FogChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FogChunkBase::editHandleStart          (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfStart,
             this->getType().getFieldDesc(StartFieldId),
             this));


    editSField(StartFieldMask);

    return returnValue;
}

GetFieldHandlePtr FogChunkBase::getHandleEnd             (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfEnd,
             this->getType().getFieldDesc(EndFieldId),
             const_cast<FogChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FogChunkBase::editHandleEnd            (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfEnd,
             this->getType().getFieldDesc(EndFieldId),
             this));


    editSField(EndFieldMask);

    return returnValue;
}

GetFieldHandlePtr FogChunkBase::getHandleDensity         (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfDensity,
             this->getType().getFieldDesc(DensityFieldId),
             const_cast<FogChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FogChunkBase::editHandleDensity        (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfDensity,
             this->getType().getFieldDesc(DensityFieldId),
             this));


    editSField(DensityFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void FogChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    FogChunk *pThis = static_cast<FogChunk *>(this);

    pThis->execSync(static_cast<FogChunk *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *FogChunkBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    FogChunk *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const FogChunk *>(pRefAspect),
                  dynamic_cast<const FogChunk *>(this));

    return returnValue;
}
#endif

void FogChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
