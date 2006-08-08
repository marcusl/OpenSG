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
 **     class DistanceLOD!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &DistanceLODBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 DistanceLODBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

inline
OSG::UInt16 DistanceLODBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the DistanceLOD::_sfCenter field.

inline
Pnt3f &DistanceLODBase::editCenter(void)
{
    editSField(CenterFieldMask);

    return _sfCenter.getValue();
}

//! Get the value of the DistanceLOD::_sfCenter field.
inline
const Pnt3f &DistanceLODBase::getCenter(void) const
{
    return _sfCenter.getValue();
}

//! Set the value of the DistanceLOD::_sfCenter field.
inline
void DistanceLODBase::setCenter(const Pnt3f &value)
{
    editSField(CenterFieldMask);

    _sfCenter.setValue(value);
}

//! Get the value of the \a index element the DistanceLOD::_mfRange field.
inline
const Real32 &DistanceLODBase::getRange(const UInt32 index) const
{
    return _mfRange[index];
}

inline
Real32 &DistanceLODBase::editRange(const UInt32 index)
{
    editMField(RangeFieldMask, _mfRange);

    return _mfRange[index];
}

//! Get the DistanceLOD::_mfRange field.
inline
MFReal32 &DistanceLODBase::editRange(void)
{
    editMField(RangeFieldMask, _mfRange);

    return _mfRange;
}

//! Get the DistanceLOD::_mfRange field.
inline
const MFReal32 &DistanceLODBase::getRange(void) const
{
    return _mfRange;
}

//! create a new instance of the class
inline
DistanceLODPtr DistanceLODBase::create(void) 
{
    DistanceLODPtr fc; 

    if(getClassType().getPrototype() != NullFC) 
    {
        fc = OSG::cast_dynamic<DistanceLOD::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

#ifdef OSG_MT_FIELDCONTAINERPTR
inline
void DistanceLODBase::execSync(      DistanceLODBase *pOther,
                                       ConstFieldMaskArg  whichField,
                                       ConstFieldMaskArg  syncMode  ,
                                 const UInt32             uiSyncInfo,
                                       UInt32             uiCopyOffset)
{
    Inherited::execSync(pOther, whichField, syncMode, uiSyncInfo, uiCopyOffset);

    if(FieldBits::NoField != (CenterFieldMask & whichField))
        _sfCenter.syncWith(pOther->_sfCenter);

    if(FieldBits::NoField != (RangeFieldMask & whichField))
        _mfRange.syncWith(pOther->_mfRange, 
                                syncMode,
                                uiSyncInfo,
                                uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
inline
void DistanceLODBase::execSync (      DistanceLODBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo)
{
}
#endif

#if 0
inline
void DistanceLODBase::execBeginEdit(ConstFieldMaskArg whichField,
                                      UInt32            uiAspect,
                                      UInt32            uiContainerSize)
{
    Inherited::execBeginEdit(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (RangeFieldMask & whichField))
    {
        _mfRange.beginEdit(uiAspect, uiContainerSize);
    }
}
#endif


inline
Char8 *DistanceLODBase::getClassname(void)
{
    return "DistanceLOD";
}

typedef PointerBuilder<DistanceLOD>::ObjPtr          DistanceLODPtr;
typedef PointerBuilder<DistanceLOD>::ObjPtrConst     DistanceLODPtrConst;
typedef PointerBuilder<DistanceLOD>::ObjConstPtr     DistanceLODConstPtr;

typedef PointerBuilder<DistanceLOD>::ObjPtrArg       DistanceLODPtrArg;
typedef PointerBuilder<DistanceLOD>::ObjConstPtrArg  DistanceLODConstPtrArg;
typedef PointerBuilder<DistanceLOD>::ObjPtrConstArg  DistanceLODPtrConstArg;

OSG_END_NAMESPACE

#define OSGDISTANCELODBASE_INLINE_CVSID "@(#)$Id: $"

