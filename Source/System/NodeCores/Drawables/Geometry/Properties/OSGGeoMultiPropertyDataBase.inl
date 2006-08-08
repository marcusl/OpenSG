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
 **     class GeoMultiPropertyData!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &GeoMultiPropertyDataBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 GeoMultiPropertyDataBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

inline
OSG::UInt16 GeoMultiPropertyDataBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the GeoMultiPropertyData::_sfGLId field.

inline
UInt32 &GeoMultiPropertyDataBase::editGLId(void)
{
    editSField(GLIdFieldMask);

    return _sfGLId.getValue();
}

//! Get the value of the GeoMultiPropertyData::_sfGLId field.
inline
const UInt32 &GeoMultiPropertyDataBase::getGLId(void) const
{
    return _sfGLId.getValue();
}

//! Set the value of the GeoMultiPropertyData::_sfGLId field.
inline
void GeoMultiPropertyDataBase::setGLId(const UInt32 &value)
{
    editSField(GLIdFieldMask);

    _sfGLId.setValue(value);
}

//! Get the value of the \a index element the GeoMultiPropertyData::_mfIData field.
inline
const UInt8 &GeoMultiPropertyDataBase::getIData(const UInt32 index) const
{
    return _mfIData[index];
}

inline
UInt8 &GeoMultiPropertyDataBase::editIData(const UInt32 index)
{
    editMField(IDataFieldMask, _mfIData);

    return _mfIData[index];
}

//! Get the GeoMultiPropertyData::_mfIData field.
inline
MFUInt8 &GeoMultiPropertyDataBase::editIData(void)
{
    editMField(IDataFieldMask, _mfIData);

    return _mfIData;
}

//! Get the GeoMultiPropertyData::_mfIData field.
inline
const MFUInt8 &GeoMultiPropertyDataBase::getIData(void) const
{
    return _mfIData;
}

//! create a new instance of the class
inline
GeoMultiPropertyDataPtr GeoMultiPropertyDataBase::create(void) 
{
    GeoMultiPropertyDataPtr fc; 

    if(getClassType().getPrototype() != NullFC) 
    {
        fc = OSG::cast_dynamic<GeoMultiPropertyData::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

#ifdef OSG_MT_FIELDCONTAINERPTR
inline
void GeoMultiPropertyDataBase::execSync(      GeoMultiPropertyDataBase *pOther,
                                       ConstFieldMaskArg  whichField,
                                       ConstFieldMaskArg  syncMode  ,
                                 const UInt32             uiSyncInfo,
                                       UInt32             uiCopyOffset)
{
    Inherited::execSync(pOther, whichField, syncMode, uiSyncInfo, uiCopyOffset);

    if(FieldBits::NoField != (IDataFieldMask & whichField))
        _mfIData.syncWith(pOther->_mfIData, 
                                syncMode,
                                uiSyncInfo,
                                uiCopyOffset);

    if(FieldBits::NoField != (GLIdFieldMask & whichField))
        _sfGLId.syncWith(pOther->_sfGLId);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
inline
void GeoMultiPropertyDataBase::execSync (      GeoMultiPropertyDataBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo)
{
}
#endif

#if 0
inline
void GeoMultiPropertyDataBase::execBeginEdit(ConstFieldMaskArg whichField,
                                      UInt32            uiAspect,
                                      UInt32            uiContainerSize)
{
    Inherited::execBeginEdit(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (IDataFieldMask & whichField))
    {
        _mfIData.beginEdit(uiAspect, uiContainerSize);
    }
}
#endif


inline
Char8 *GeoMultiPropertyDataBase::getClassname(void)
{
    return "GeoMultiPropertyData";
}

typedef PointerBuilder<GeoMultiPropertyData>::ObjPtr          GeoMultiPropertyDataPtr;
typedef PointerBuilder<GeoMultiPropertyData>::ObjPtrConst     GeoMultiPropertyDataPtrConst;
typedef PointerBuilder<GeoMultiPropertyData>::ObjConstPtr     GeoMultiPropertyDataConstPtr;

typedef PointerBuilder<GeoMultiPropertyData>::ObjPtrArg       GeoMultiPropertyDataPtrArg;
typedef PointerBuilder<GeoMultiPropertyData>::ObjConstPtrArg  GeoMultiPropertyDataConstPtrArg;
typedef PointerBuilder<GeoMultiPropertyData>::ObjPtrConstArg  GeoMultiPropertyDataPtrConstArg;

OSG_END_NAMESPACE

#define OSGGEOMULTIPROPERTYDATABASE_INLINE_CVSID "@(#)$Id: OSGGeoMultiPropertyDataBase.inl,v 1.1.2.5 2006/08/01 08:48:57 vossg Exp $"

