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
 **     class TexGenChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &TexGenChunkBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 TexGenChunkBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

inline
OSG::UInt16 TexGenChunkBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the TexGenChunk::_sfGenFuncS field.

inline
GLenum &TexGenChunkBase::editGenFuncS(void)
{
    editSField(GenFuncSFieldMask);

    return _sfGenFuncS.getValue();
}

//! Get the value of the TexGenChunk::_sfGenFuncS field.
inline
const GLenum &TexGenChunkBase::getGenFuncS(void) const
{
    return _sfGenFuncS.getValue();
}

//! Set the value of the TexGenChunk::_sfGenFuncS field.
inline
void TexGenChunkBase::setGenFuncS(const GLenum &value)
{
    editSField(GenFuncSFieldMask);

    _sfGenFuncS.setValue(value);
}
//! Get the value of the TexGenChunk::_sfGenFuncT field.

inline
GLenum &TexGenChunkBase::editGenFuncT(void)
{
    editSField(GenFuncTFieldMask);

    return _sfGenFuncT.getValue();
}

//! Get the value of the TexGenChunk::_sfGenFuncT field.
inline
const GLenum &TexGenChunkBase::getGenFuncT(void) const
{
    return _sfGenFuncT.getValue();
}

//! Set the value of the TexGenChunk::_sfGenFuncT field.
inline
void TexGenChunkBase::setGenFuncT(const GLenum &value)
{
    editSField(GenFuncTFieldMask);

    _sfGenFuncT.setValue(value);
}
//! Get the value of the TexGenChunk::_sfGenFuncR field.

inline
GLenum &TexGenChunkBase::editGenFuncR(void)
{
    editSField(GenFuncRFieldMask);

    return _sfGenFuncR.getValue();
}

//! Get the value of the TexGenChunk::_sfGenFuncR field.
inline
const GLenum &TexGenChunkBase::getGenFuncR(void) const
{
    return _sfGenFuncR.getValue();
}

//! Set the value of the TexGenChunk::_sfGenFuncR field.
inline
void TexGenChunkBase::setGenFuncR(const GLenum &value)
{
    editSField(GenFuncRFieldMask);

    _sfGenFuncR.setValue(value);
}
//! Get the value of the TexGenChunk::_sfGenFuncQ field.

inline
GLenum &TexGenChunkBase::editGenFuncQ(void)
{
    editSField(GenFuncQFieldMask);

    return _sfGenFuncQ.getValue();
}

//! Get the value of the TexGenChunk::_sfGenFuncQ field.
inline
const GLenum &TexGenChunkBase::getGenFuncQ(void) const
{
    return _sfGenFuncQ.getValue();
}

//! Set the value of the TexGenChunk::_sfGenFuncQ field.
inline
void TexGenChunkBase::setGenFuncQ(const GLenum &value)
{
    editSField(GenFuncQFieldMask);

    _sfGenFuncQ.setValue(value);
}
//! Get the value of the TexGenChunk::_sfGenFuncSPlane field.

inline
Vec4f &TexGenChunkBase::editGenFuncSPlane(void)
{
    editSField(GenFuncSPlaneFieldMask);

    return _sfGenFuncSPlane.getValue();
}

//! Get the value of the TexGenChunk::_sfGenFuncSPlane field.
inline
const Vec4f &TexGenChunkBase::getGenFuncSPlane(void) const
{
    return _sfGenFuncSPlane.getValue();
}

//! Set the value of the TexGenChunk::_sfGenFuncSPlane field.
inline
void TexGenChunkBase::setGenFuncSPlane(const Vec4f &value)
{
    editSField(GenFuncSPlaneFieldMask);

    _sfGenFuncSPlane.setValue(value);
}
//! Get the value of the TexGenChunk::_sfGenFuncTPlane field.

inline
Vec4f &TexGenChunkBase::editGenFuncTPlane(void)
{
    editSField(GenFuncTPlaneFieldMask);

    return _sfGenFuncTPlane.getValue();
}

//! Get the value of the TexGenChunk::_sfGenFuncTPlane field.
inline
const Vec4f &TexGenChunkBase::getGenFuncTPlane(void) const
{
    return _sfGenFuncTPlane.getValue();
}

//! Set the value of the TexGenChunk::_sfGenFuncTPlane field.
inline
void TexGenChunkBase::setGenFuncTPlane(const Vec4f &value)
{
    editSField(GenFuncTPlaneFieldMask);

    _sfGenFuncTPlane.setValue(value);
}
//! Get the value of the TexGenChunk::_sfGenFuncRPlane field.

inline
Vec4f &TexGenChunkBase::editGenFuncRPlane(void)
{
    editSField(GenFuncRPlaneFieldMask);

    return _sfGenFuncRPlane.getValue();
}

//! Get the value of the TexGenChunk::_sfGenFuncRPlane field.
inline
const Vec4f &TexGenChunkBase::getGenFuncRPlane(void) const
{
    return _sfGenFuncRPlane.getValue();
}

//! Set the value of the TexGenChunk::_sfGenFuncRPlane field.
inline
void TexGenChunkBase::setGenFuncRPlane(const Vec4f &value)
{
    editSField(GenFuncRPlaneFieldMask);

    _sfGenFuncRPlane.setValue(value);
}
//! Get the value of the TexGenChunk::_sfGenFuncQPlane field.

inline
Vec4f &TexGenChunkBase::editGenFuncQPlane(void)
{
    editSField(GenFuncQPlaneFieldMask);

    return _sfGenFuncQPlane.getValue();
}

//! Get the value of the TexGenChunk::_sfGenFuncQPlane field.
inline
const Vec4f &TexGenChunkBase::getGenFuncQPlane(void) const
{
    return _sfGenFuncQPlane.getValue();
}

//! Set the value of the TexGenChunk::_sfGenFuncQPlane field.
inline
void TexGenChunkBase::setGenFuncQPlane(const Vec4f &value)
{
    editSField(GenFuncQPlaneFieldMask);

    _sfGenFuncQPlane.setValue(value);
}

//! Get the value of the TexGenChunk::_sfSBeacon field.
inline
NodePtrConst TexGenChunkBase::getSBeacon(void) const
{
    return _sfSBeacon.getValue();
}

//! Set the value of the TexGenChunk::_sfSBeacon field.
inline
void TexGenChunkBase::setSBeacon(NodePtrConstArg value)
{
    editSField(SBeaconFieldMask);

    setRefd(_sfSBeacon.getValue(), value);

}

//! Get the value of the TexGenChunk::_sfTBeacon field.
inline
NodePtrConst TexGenChunkBase::getTBeacon(void) const
{
    return _sfTBeacon.getValue();
}

//! Set the value of the TexGenChunk::_sfTBeacon field.
inline
void TexGenChunkBase::setTBeacon(NodePtrConstArg value)
{
    editSField(TBeaconFieldMask);

    setRefd(_sfTBeacon.getValue(), value);

}

//! Get the value of the TexGenChunk::_sfRBeacon field.
inline
NodePtrConst TexGenChunkBase::getRBeacon(void) const
{
    return _sfRBeacon.getValue();
}

//! Set the value of the TexGenChunk::_sfRBeacon field.
inline
void TexGenChunkBase::setRBeacon(NodePtrConstArg value)
{
    editSField(RBeaconFieldMask);

    setRefd(_sfRBeacon.getValue(), value);

}

//! Get the value of the TexGenChunk::_sfQBeacon field.
inline
NodePtrConst TexGenChunkBase::getQBeacon(void) const
{
    return _sfQBeacon.getValue();
}

//! Set the value of the TexGenChunk::_sfQBeacon field.
inline
void TexGenChunkBase::setQBeacon(NodePtrConstArg value)
{
    editSField(QBeaconFieldMask);

    setRefd(_sfQBeacon.getValue(), value);

}

//! create a new instance of the class
inline
TexGenChunkPtr TexGenChunkBase::create(void) 
{
    TexGenChunkPtr fc; 

    if(getClassType().getPrototype() != NullFC) 
    {
        fc = OSG::cast_dynamic<TexGenChunk::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

#ifdef OSG_MT_FIELDCONTAINERPTR
inline
void TexGenChunkBase::execSync(      TexGenChunkBase *pOther,
                                       ConstFieldMaskArg  whichField,
                                       ConstFieldMaskArg  syncMode  ,
                                 const UInt32             uiSyncInfo,
                                       UInt32             uiCopyOffset)
{
    Inherited::execSync(pOther, whichField, syncMode, uiSyncInfo, uiCopyOffset);

    if(FieldBits::NoField != (GenFuncSFieldMask & whichField))
        _sfGenFuncS.syncWith(pOther->_sfGenFuncS);

    if(FieldBits::NoField != (GenFuncTFieldMask & whichField))
        _sfGenFuncT.syncWith(pOther->_sfGenFuncT);

    if(FieldBits::NoField != (GenFuncRFieldMask & whichField))
        _sfGenFuncR.syncWith(pOther->_sfGenFuncR);

    if(FieldBits::NoField != (GenFuncQFieldMask & whichField))
        _sfGenFuncQ.syncWith(pOther->_sfGenFuncQ);

    if(FieldBits::NoField != (GenFuncSPlaneFieldMask & whichField))
        _sfGenFuncSPlane.syncWith(pOther->_sfGenFuncSPlane);

    if(FieldBits::NoField != (GenFuncTPlaneFieldMask & whichField))
        _sfGenFuncTPlane.syncWith(pOther->_sfGenFuncTPlane);

    if(FieldBits::NoField != (GenFuncRPlaneFieldMask & whichField))
        _sfGenFuncRPlane.syncWith(pOther->_sfGenFuncRPlane);

    if(FieldBits::NoField != (GenFuncQPlaneFieldMask & whichField))
        _sfGenFuncQPlane.syncWith(pOther->_sfGenFuncQPlane);

    if(FieldBits::NoField != (SBeaconFieldMask & whichField))
        _sfSBeacon.syncWith(pOther->_sfSBeacon);

    if(FieldBits::NoField != (TBeaconFieldMask & whichField))
        _sfTBeacon.syncWith(pOther->_sfTBeacon);

    if(FieldBits::NoField != (RBeaconFieldMask & whichField))
        _sfRBeacon.syncWith(pOther->_sfRBeacon);

    if(FieldBits::NoField != (QBeaconFieldMask & whichField))
        _sfQBeacon.syncWith(pOther->_sfQBeacon);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
inline
void TexGenChunkBase::execSync (      TexGenChunkBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo)
{
}
#endif

#if 0
inline
void TexGenChunkBase::execBeginEdit(ConstFieldMaskArg whichField,
                                      UInt32            uiAspect,
                                      UInt32            uiContainerSize)
{
    Inherited::execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif


inline
Char8 *TexGenChunkBase::getClassname(void)
{
    return "TexGenChunk";
}

typedef PointerBuilder<TexGenChunk>::ObjPtr          TexGenChunkPtr;
typedef PointerBuilder<TexGenChunk>::ObjPtrConst     TexGenChunkPtrConst;
typedef PointerBuilder<TexGenChunk>::ObjConstPtr     TexGenChunkConstPtr;

typedef PointerBuilder<TexGenChunk>::ObjPtrArg       TexGenChunkPtrArg;
typedef PointerBuilder<TexGenChunk>::ObjConstPtrArg  TexGenChunkConstPtrArg;
typedef PointerBuilder<TexGenChunk>::ObjPtrConstArg  TexGenChunkPtrConstArg;

OSG_END_NAMESPACE

#define OSGTEXGENCHUNKBASE_INLINE_CVSID "@(#)$Id: $"

