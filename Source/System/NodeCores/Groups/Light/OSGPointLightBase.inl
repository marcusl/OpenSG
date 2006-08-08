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
 **     class PointLight!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &PointLightBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 PointLightBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

inline
OSG::UInt16 PointLightBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the PointLight::_sfPosition field.

inline
Pnt3r &PointLightBase::editPosition(void)
{
    editSField(PositionFieldMask);

    return _sfPosition.getValue();
}

//! Get the value of the PointLight::_sfPosition field.
inline
const Pnt3r &PointLightBase::getPosition(void) const
{
    return _sfPosition.getValue();
}

//! Set the value of the PointLight::_sfPosition field.
inline
void PointLightBase::setPosition(const Pnt3r &value)
{
    editSField(PositionFieldMask);

    _sfPosition.setValue(value);
}

//! create a new instance of the class
inline
PointLightPtr PointLightBase::create(void) 
{
    PointLightPtr fc; 

    if(getClassType().getPrototype() != NullFC) 
    {
        fc = OSG::cast_dynamic<PointLight::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

#ifdef OSG_MT_FIELDCONTAINERPTR
inline
void PointLightBase::execSync(      PointLightBase *pOther,
                                       ConstFieldMaskArg  whichField,
                                       ConstFieldMaskArg  syncMode  ,
                                 const UInt32             uiSyncInfo,
                                       UInt32             uiCopyOffset)
{
    Inherited::execSync(pOther, whichField, syncMode, uiSyncInfo, uiCopyOffset);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
        _sfPosition.syncWith(pOther->_sfPosition);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
inline
void PointLightBase::execSync (      PointLightBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo)
{
}
#endif

#if 0
inline
void PointLightBase::execBeginEdit(ConstFieldMaskArg whichField,
                                      UInt32            uiAspect,
                                      UInt32            uiContainerSize)
{
    Inherited::execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif


inline
Char8 *PointLightBase::getClassname(void)
{
    return "PointLight";
}

typedef PointerBuilder<PointLight>::ObjPtr          PointLightPtr;
typedef PointerBuilder<PointLight>::ObjPtrConst     PointLightPtrConst;
typedef PointerBuilder<PointLight>::ObjConstPtr     PointLightConstPtr;

typedef PointerBuilder<PointLight>::ObjPtrArg       PointLightPtrArg;
typedef PointerBuilder<PointLight>::ObjConstPtrArg  PointLightConstPtrArg;
typedef PointerBuilder<PointLight>::ObjPtrConstArg  PointLightPtrConstArg;

OSG_END_NAMESPACE

#define OSGPOINTLIGHTBASE_INLINE_CVSID "@(#)$Id: $"

