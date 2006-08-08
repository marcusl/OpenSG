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
 **     class ClipPlaneChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ClipPlaneChunkBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 ClipPlaneChunkBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

inline
OSG::UInt16 ClipPlaneChunkBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the ClipPlaneChunk::_sfEquation field.

inline
Vec4f &ClipPlaneChunkBase::editEquation(void)
{
    editSField(EquationFieldMask);

    return _sfEquation.getValue();
}

//! Get the value of the ClipPlaneChunk::_sfEquation field.
inline
const Vec4f &ClipPlaneChunkBase::getEquation(void) const
{
    return _sfEquation.getValue();
}

//! Set the value of the ClipPlaneChunk::_sfEquation field.
inline
void ClipPlaneChunkBase::setEquation(const Vec4f &value)
{
    editSField(EquationFieldMask);

    _sfEquation.setValue(value);
}
//! Get the value of the ClipPlaneChunk::_sfEnable field.

inline
bool &ClipPlaneChunkBase::editEnable(void)
{
    editSField(EnableFieldMask);

    return _sfEnable.getValue();
}

//! Get the value of the ClipPlaneChunk::_sfEnable field.
inline
const bool &ClipPlaneChunkBase::getEnable(void) const
{
    return _sfEnable.getValue();
}

//! Set the value of the ClipPlaneChunk::_sfEnable field.
inline
void ClipPlaneChunkBase::setEnable(const bool &value)
{
    editSField(EnableFieldMask);

    _sfEnable.setValue(value);
}

//! Get the value of the ClipPlaneChunk::_sfBeacon field.
inline
NodePtrConst ClipPlaneChunkBase::getBeacon(void) const
{
    return _sfBeacon.getValue();
}

//! Set the value of the ClipPlaneChunk::_sfBeacon field.
inline
void ClipPlaneChunkBase::setBeacon(NodePtrConstArg value)
{
    editSField(BeaconFieldMask);

    setRefd(_sfBeacon.getValue(), value);

}

//! create a new instance of the class
inline
ClipPlaneChunkPtr ClipPlaneChunkBase::create(void) 
{
    ClipPlaneChunkPtr fc; 

    if(getClassType().getPrototype() != NullFC) 
    {
        fc = OSG::cast_dynamic<ClipPlaneChunk::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

#ifdef OSG_MT_FIELDCONTAINERPTR
inline
void ClipPlaneChunkBase::execSync(      ClipPlaneChunkBase *pOther,
                                       ConstFieldMaskArg  whichField,
                                       ConstFieldMaskArg  syncMode  ,
                                 const UInt32             uiSyncInfo,
                                       UInt32             uiCopyOffset)
{
    Inherited::execSync(pOther, whichField, syncMode, uiSyncInfo, uiCopyOffset);

    if(FieldBits::NoField != (EquationFieldMask & whichField))
        _sfEquation.syncWith(pOther->_sfEquation);

    if(FieldBits::NoField != (EnableFieldMask & whichField))
        _sfEnable.syncWith(pOther->_sfEnable);

    if(FieldBits::NoField != (BeaconFieldMask & whichField))
        _sfBeacon.syncWith(pOther->_sfBeacon);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
inline
void ClipPlaneChunkBase::execSync (      ClipPlaneChunkBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo)
{
}
#endif

#if 0
inline
void ClipPlaneChunkBase::execBeginEdit(ConstFieldMaskArg whichField,
                                      UInt32            uiAspect,
                                      UInt32            uiContainerSize)
{
    Inherited::execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif


inline
Char8 *ClipPlaneChunkBase::getClassname(void)
{
    return "ClipPlaneChunk";
}

typedef PointerBuilder<ClipPlaneChunk>::ObjPtr          ClipPlaneChunkPtr;
typedef PointerBuilder<ClipPlaneChunk>::ObjPtrConst     ClipPlaneChunkPtrConst;
typedef PointerBuilder<ClipPlaneChunk>::ObjConstPtr     ClipPlaneChunkConstPtr;

typedef PointerBuilder<ClipPlaneChunk>::ObjPtrArg       ClipPlaneChunkPtrArg;
typedef PointerBuilder<ClipPlaneChunk>::ObjConstPtrArg  ClipPlaneChunkConstPtrArg;
typedef PointerBuilder<ClipPlaneChunk>::ObjPtrConstArg  ClipPlaneChunkPtrConstArg;

OSG_END_NAMESPACE

#define OSGCLIPPLANECHUNKBASE_INLINE_CVSID "@(#)$Id: $"

