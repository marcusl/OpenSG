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
 **     class SwitchMaterial!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &SwitchMaterialBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 SwitchMaterialBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

inline
OSG::UInt16 SwitchMaterialBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the SwitchMaterial::_sfChoice field.

inline
UInt32 &SwitchMaterialBase::editChoice(void)
{
    editSField(ChoiceFieldMask);

    return _sfChoice.getValue();
}

//! Get the value of the SwitchMaterial::_sfChoice field.
inline
const UInt32 &SwitchMaterialBase::getChoice(void) const
{
    return _sfChoice.getValue();
}

//! Set the value of the SwitchMaterial::_sfChoice field.
inline
void SwitchMaterialBase::setChoice(const UInt32 &value)
{
    editSField(ChoiceFieldMask);

    _sfChoice.setValue(value);
}

//! Get the value of the \a index element the SwitchMaterial::_mfMaterials field.
inline
MaterialPtrConst SwitchMaterialBase::getMaterials(const UInt32 index) const
{
    return _mfMaterials[index];
}

//! Get the SwitchMaterial::_mfMaterials field.
inline
const MFMaterialPtr &SwitchMaterialBase::getMaterials(void) const
{
    return _mfMaterials;
}

//! create a new instance of the class
inline
SwitchMaterialPtr SwitchMaterialBase::create(void) 
{
    SwitchMaterialPtr fc; 

    if(getClassType().getPrototype() != NullFC) 
    {
        fc = OSG::cast_dynamic<SwitchMaterial::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

#ifdef OSG_MT_FIELDCONTAINERPTR
inline
void SwitchMaterialBase::execSync(      SwitchMaterialBase *pOther,
                                       ConstFieldMaskArg  whichField,
                                       ConstFieldMaskArg  syncMode  ,
                                 const UInt32             uiSyncInfo,
                                       UInt32             uiCopyOffset)
{
    Inherited::execSync(pOther, whichField, syncMode, uiSyncInfo, uiCopyOffset);

    if(FieldBits::NoField != (MaterialsFieldMask & whichField))
        _mfMaterials.syncWith(pOther->_mfMaterials, 
                                syncMode,
                                uiSyncInfo,
                                uiCopyOffset);

    if(FieldBits::NoField != (ChoiceFieldMask & whichField))
        _sfChoice.syncWith(pOther->_sfChoice);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
inline
void SwitchMaterialBase::execSync (      SwitchMaterialBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo)
{
}
#endif

#if 0
inline
void SwitchMaterialBase::execBeginEdit(ConstFieldMaskArg whichField,
                                      UInt32            uiAspect,
                                      UInt32            uiContainerSize)
{
    Inherited::execBeginEdit(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (MaterialsFieldMask & whichField))
    {
        _mfMaterials.beginEdit(uiAspect, uiContainerSize);
    }
}
#endif


inline
Char8 *SwitchMaterialBase::getClassname(void)
{
    return "SwitchMaterial";
}

typedef PointerBuilder<SwitchMaterial>::ObjPtr          SwitchMaterialPtr;
typedef PointerBuilder<SwitchMaterial>::ObjPtrConst     SwitchMaterialPtrConst;
typedef PointerBuilder<SwitchMaterial>::ObjConstPtr     SwitchMaterialConstPtr;

typedef PointerBuilder<SwitchMaterial>::ObjPtrArg       SwitchMaterialPtrArg;
typedef PointerBuilder<SwitchMaterial>::ObjConstPtrArg  SwitchMaterialConstPtrArg;
typedef PointerBuilder<SwitchMaterial>::ObjPtrConstArg  SwitchMaterialPtrConstArg;

OSG_END_NAMESPACE

#define OSGSWITCHMATERIALBASE_INLINE_CVSID "@(#)$Id: OSGSwitchMaterialBase.inl,v 1.1.2.3 2006/08/01 08:48:56 vossg Exp $"

