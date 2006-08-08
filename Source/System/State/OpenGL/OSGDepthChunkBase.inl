/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     class DepthChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &DepthChunkBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 DepthChunkBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

inline
OSG::UInt16 DepthChunkBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the DepthChunk::_sfEnable field.

inline
bool &DepthChunkBase::editEnable(void)
{
    editSField(EnableFieldMask);

    return _sfEnable.getValue();
}

//! Get the value of the DepthChunk::_sfEnable field.
inline
const bool &DepthChunkBase::getEnable(void) const
{
    return _sfEnable.getValue();
}

//! Set the value of the DepthChunk::_sfEnable field.
inline
void DepthChunkBase::setEnable(const bool &value)
{
    editSField(EnableFieldMask);

    _sfEnable.setValue(value);
}
//! Get the value of the DepthChunk::_sfFunc field.

inline
GLenum &DepthChunkBase::editFunc(void)
{
    editSField(FuncFieldMask);

    return _sfFunc.getValue();
}

//! Get the value of the DepthChunk::_sfFunc field.
inline
const GLenum &DepthChunkBase::getFunc(void) const
{
    return _sfFunc.getValue();
}

//! Set the value of the DepthChunk::_sfFunc field.
inline
void DepthChunkBase::setFunc(const GLenum &value)
{
    editSField(FuncFieldMask);

    _sfFunc.setValue(value);
}
//! Get the value of the DepthChunk::_sfNear field.

inline
Real32 &DepthChunkBase::editNear(void)
{
    editSField(NearFieldMask);

    return _sfNear.getValue();
}

//! Get the value of the DepthChunk::_sfNear field.
inline
const Real32 &DepthChunkBase::getNear(void) const
{
    return _sfNear.getValue();
}

//! Set the value of the DepthChunk::_sfNear field.
inline
void DepthChunkBase::setNear(const Real32 &value)
{
    editSField(NearFieldMask);

    _sfNear.setValue(value);
}
//! Get the value of the DepthChunk::_sfFar field.

inline
Real32 &DepthChunkBase::editFar(void)
{
    editSField(FarFieldMask);

    return _sfFar.getValue();
}

//! Get the value of the DepthChunk::_sfFar field.
inline
const Real32 &DepthChunkBase::getFar(void) const
{
    return _sfFar.getValue();
}

//! Set the value of the DepthChunk::_sfFar field.
inline
void DepthChunkBase::setFar(const Real32 &value)
{
    editSField(FarFieldMask);

    _sfFar.setValue(value);
}
//! Get the value of the DepthChunk::_sfReadOnly field.

inline
bool &DepthChunkBase::editReadOnly(void)
{
    editSField(ReadOnlyFieldMask);

    return _sfReadOnly.getValue();
}

//! Get the value of the DepthChunk::_sfReadOnly field.
inline
const bool &DepthChunkBase::getReadOnly(void) const
{
    return _sfReadOnly.getValue();
}

//! Set the value of the DepthChunk::_sfReadOnly field.
inline
void DepthChunkBase::setReadOnly(const bool &value)
{
    editSField(ReadOnlyFieldMask);

    _sfReadOnly.setValue(value);
}

//! create a new instance of the class
inline
DepthChunkPtr DepthChunkBase::create(void) 
{
    DepthChunkPtr fc; 

    if(getClassType().getPrototype() != NullFC) 
    {
        fc = OSG::cast_dynamic<DepthChunk::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

#ifdef OSG_MT_FIELDCONTAINERPTR
inline
void DepthChunkBase::execSync(      DepthChunkBase *pOther,
                                       ConstFieldMaskArg  whichField,
                                       ConstFieldMaskArg  syncMode  ,
                                 const UInt32             uiSyncInfo,
                                       UInt32             uiCopyOffset)
{
    Inherited::execSync(pOther, whichField, syncMode, uiSyncInfo, uiCopyOffset);

    if(FieldBits::NoField != (EnableFieldMask & whichField))
        _sfEnable.syncWith(pOther->_sfEnable);

    if(FieldBits::NoField != (FuncFieldMask & whichField))
        _sfFunc.syncWith(pOther->_sfFunc);

    if(FieldBits::NoField != (NearFieldMask & whichField))
        _sfNear.syncWith(pOther->_sfNear);

    if(FieldBits::NoField != (FarFieldMask & whichField))
        _sfFar.syncWith(pOther->_sfFar);

    if(FieldBits::NoField != (ReadOnlyFieldMask & whichField))
        _sfReadOnly.syncWith(pOther->_sfReadOnly);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
inline
void DepthChunkBase::execSync (      DepthChunkBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo)
{
}
#endif

#if 0
inline
void DepthChunkBase::execBeginEdit(ConstFieldMaskArg whichField,
                                      UInt32            uiAspect,
                                      UInt32            uiContainerSize)
{
    Inherited::execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif


inline
Char8 *DepthChunkBase::getClassname(void)
{
    return "DepthChunk";
}

typedef PointerBuilder<DepthChunk>::ObjPtr          DepthChunkPtr;
typedef PointerBuilder<DepthChunk>::ObjPtrConst     DepthChunkPtrConst;
typedef PointerBuilder<DepthChunk>::ObjConstPtr     DepthChunkConstPtr;

typedef PointerBuilder<DepthChunk>::ObjPtrArg       DepthChunkPtrArg;
typedef PointerBuilder<DepthChunk>::ObjConstPtrArg  DepthChunkConstPtrArg;
typedef PointerBuilder<DepthChunk>::ObjPtrConstArg  DepthChunkPtrConstArg;

OSG_END_NAMESPACE

#define OSGDEPTHCHUNKBASE_INLINE_CVSID "@(#)$Id: $"

