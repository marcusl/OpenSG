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
 **     class VertexProgramChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEVERTEXPROGRAMCHUNKINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>




#include "OSGVertexProgramChunkBase.h"
#include "OSGVertexProgramChunk.h"

OSG_USING_NAMESPACE


VertexProgramChunkBase::TypeObject VertexProgramChunkBase::_type(true,
    VertexProgramChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &VertexProgramChunkBase::createEmpty,
    VertexProgramChunk::initMethod,
    NULL,
    false);

/*------------------------------ get -----------------------------------*/

FieldContainerType &VertexProgramChunkBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &VertexProgramChunkBase::getType(void) const 
{
    return _type;
} 

UInt32 VertexProgramChunkBase::getContainerSize(void) const 
{ 
    return sizeof(VertexProgramChunk); 
}

/*------------------------- decorator get ------------------------------*/




/*------------------------------ access -----------------------------------*/

UInt32 VertexProgramChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void VertexProgramChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void VertexProgramChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create an empty new instance of the class, do not copy the prototype
VertexProgramChunkPtr VertexProgramChunkBase::createEmpty(void) 
{ 
    VertexProgramChunkPtr returnValue; 
    
    newPtr<VertexProgramChunk>(returnValue); 

    return returnValue; 
}

FieldContainerPtr VertexProgramChunkBase::shallowCopy(void) const 
{ 
    VertexProgramChunkPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const VertexProgramChunk *>(this)); 

    return returnValue; 
}



/*------------------------- constructors ----------------------------------*/

VertexProgramChunkBase::VertexProgramChunkBase(void) :
    Inherited()
{
}

VertexProgramChunkBase::VertexProgramChunkBase(const VertexProgramChunkBase &source) :
    Inherited(source)
{
}

/*-------------------------- destructors ----------------------------------*/

VertexProgramChunkBase::~VertexProgramChunkBase(void)
{
}


#ifdef OSG_MT_FIELDCONTAINERPTR
void VertexProgramChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<VertexProgramChunkBase *>(&oFrom),
                   whichField, 
                   syncMode, 
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void VertexProgramChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<VertexProgramChunkBase *>(&oFrom), 
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void VertexProgramChunkBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr VertexProgramChunkBase::createAspectCopy(void) const
{
    VertexProgramChunkPtr returnValue; 

    newAspectCopy(returnValue, 
                  dynamic_cast<const VertexProgramChunk *>(this)); 

    return returnValue; 
}
#endif

void VertexProgramChunkBase::resolveLinks(void)
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
DataType FieldTraits<VertexProgramChunkPtr>::_type("VertexProgramChunkPtr", "ProgramChunkPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(VertexProgramChunkPtr)

OSG_FIELD_DLLEXPORT_DEF1(SField, VertexProgramChunkPtr);
OSG_FIELD_DLLEXPORT_DEF1(MField, VertexProgramChunkPtr);

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
    static Char8 cvsid_hpp       [] = OSGVERTEXPROGRAMCHUNKBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGVERTEXPROGRAMCHUNKBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGVERTEXPROGRAMCHUNKFIELDS_HEADER_CVSID;
}
