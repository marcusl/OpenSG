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
 **     class FileGrabForeground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEFILEGRABFOREGROUNDINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>




#include "OSGFileGrabForegroundBase.h"
#include "OSGFileGrabForeground.h"

OSG_USING_NAMESPACE

// Field descriptions

/*! \var std::string FileGrabForegroundBase::_sfName
    	The filename template. 0 is replaced by the frame number.

*/
/*! \var UInt32 FileGrabForegroundBase::_sfFrame
    	The frame number to use.

*/
/*! \var bool FileGrabForegroundBase::_sfIncrement
    	Flag to start/stop automatic frame increments after each grab.

*/

void FileGrabForegroundBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL; 


#ifdef OSG_1_COMPAT
    typedef const SFString *(FileGrabForegroundBase::*GetSFNameF)(void) const;

    GetSFNameF GetSFName = &FileGrabForegroundBase::getSFName;
#endif

    pDesc = new SFString::Description(
        SFString::getClassType(), 
        "name", 
        NameFieldId, NameFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&FileGrabForegroundBase::editSFName),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFName));
#else
        reinterpret_cast<FieldGetMethodSig >(&FileGrabForegroundBase::getSFName));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFUInt32 *(FileGrabForegroundBase::*GetSFFrameF)(void) const;

    GetSFFrameF GetSFFrame = &FileGrabForegroundBase::getSFFrame;
#endif

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(), 
        "frame", 
        FrameFieldId, FrameFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&FileGrabForegroundBase::editSFFrame),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFFrame));
#else
        reinterpret_cast<FieldGetMethodSig >(&FileGrabForegroundBase::getSFFrame));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFBool *(FileGrabForegroundBase::*GetSFIncrementF)(void) const;

    GetSFIncrementF GetSFIncrement = &FileGrabForegroundBase::getSFIncrement;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(), 
        "increment", 
        IncrementFieldId, IncrementFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&FileGrabForegroundBase::editSFIncrement),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFIncrement));
#else
        reinterpret_cast<FieldGetMethodSig >(&FileGrabForegroundBase::getSFIncrement));
#endif

    oType.addInitialDesc(pDesc);
}


FileGrabForegroundBase::TypeObject FileGrabForegroundBase::_type(true,
    FileGrabForegroundBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &FileGrabForegroundBase::createEmpty,
    FileGrabForeground::initMethod,
    (InitalInsertDescFunc) &FileGrabForegroundBase::classDescInserter,
    false);

/*------------------------------ get -----------------------------------*/

FieldContainerType &FileGrabForegroundBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &FileGrabForegroundBase::getType(void) const 
{
    return _type;
} 

UInt32 FileGrabForegroundBase::getContainerSize(void) const 
{ 
    return sizeof(FileGrabForeground); 
}

/*------------------------- decorator get ------------------------------*/


SFString *FileGrabForegroundBase::editSFName(void)
{
    editSField(NameFieldMask);

    return &_sfName;
}

const SFString *FileGrabForegroundBase::getSFName(void) const
{
    return &_sfName;
}

SFUInt32 *FileGrabForegroundBase::editSFFrame(void)
{
    editSField(FrameFieldMask);

    return &_sfFrame;
}

const SFUInt32 *FileGrabForegroundBase::getSFFrame(void) const
{
    return &_sfFrame;
}

SFBool *FileGrabForegroundBase::editSFIncrement(void)
{
    editSField(IncrementFieldMask);

    return &_sfIncrement;
}

const SFBool *FileGrabForegroundBase::getSFIncrement(void) const
{
    return &_sfIncrement;
}



/*------------------------------ access -----------------------------------*/

UInt32 FileGrabForegroundBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (NameFieldMask & whichField))
    {
        returnValue += _sfName.getBinSize();
    }
    if(FieldBits::NoField != (FrameFieldMask & whichField))
    {
        returnValue += _sfFrame.getBinSize();
    }
    if(FieldBits::NoField != (IncrementFieldMask & whichField))
    {
        returnValue += _sfIncrement.getBinSize();
    }

    return returnValue;
}

void FileGrabForegroundBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (NameFieldMask & whichField))
    {
        _sfName.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FrameFieldMask & whichField))
    {
        _sfFrame.copyToBin(pMem);
    }
    if(FieldBits::NoField != (IncrementFieldMask & whichField))
    {
        _sfIncrement.copyToBin(pMem);
    }
}

void FileGrabForegroundBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (NameFieldMask & whichField))
    {
        _sfName.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FrameFieldMask & whichField))
    {
        _sfFrame.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (IncrementFieldMask & whichField))
    {
        _sfIncrement.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
FileGrabForegroundPtr FileGrabForegroundBase::createEmpty(void) 
{ 
    FileGrabForegroundPtr returnValue; 
    
    newPtr<FileGrabForeground>(returnValue); 

    return returnValue; 
}

FieldContainerPtr FileGrabForegroundBase::shallowCopy(void) const 
{ 
    FileGrabForegroundPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const FileGrabForeground *>(this)); 

    return returnValue; 
}



/*------------------------- constructors ----------------------------------*/

FileGrabForegroundBase::FileGrabForegroundBase(void) :
    Inherited(),
    _sfName(),
    _sfFrame(UInt32(0)),
    _sfIncrement(bool(true))
{
}

FileGrabForegroundBase::FileGrabForegroundBase(const FileGrabForegroundBase &source) :
    Inherited(source),
    _sfName(source._sfName),
    _sfFrame(source._sfFrame),
    _sfIncrement(source._sfIncrement)
{
}

/*-------------------------- destructors ----------------------------------*/

FileGrabForegroundBase::~FileGrabForegroundBase(void)
{
}


#ifdef OSG_MT_FIELDCONTAINERPTR
void FileGrabForegroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<FileGrabForegroundBase *>(&oFrom),
                   whichField, 
                   syncMode, 
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void FileGrabForegroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<FileGrabForegroundBase *>(&oFrom), 
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void FileGrabForegroundBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr FileGrabForegroundBase::createAspectCopy(void) const
{
    FileGrabForegroundPtr returnValue; 

    newAspectCopy(returnValue, 
                  dynamic_cast<const FileGrabForeground *>(this)); 

    return returnValue; 
}
#endif

void FileGrabForegroundBase::resolveLinks(void)
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
DataType FieldTraits<FileGrabForegroundPtr>::_type("FileGrabForegroundPtr", "GrabForegroundPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(FileGrabForegroundPtr)

OSG_FIELD_DLLEXPORT_DEF1(SField, FileGrabForegroundPtr);
OSG_FIELD_DLLEXPORT_DEF1(MField, FileGrabForegroundPtr);

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
    static Char8 cvsid_hpp       [] = OSGFILEGRABFOREGROUNDBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGFILEGRABFOREGROUNDBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGFILEGRABFOREGROUNDFIELDS_HEADER_CVSID;
}
