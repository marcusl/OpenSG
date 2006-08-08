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
 **     class ShaderParameterReal!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ShaderParameterRealBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 ShaderParameterRealBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

inline
OSG::UInt16 ShaderParameterRealBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the ShaderParameterReal::_sfValue field.

inline
Real32 &ShaderParameterRealBase::editValue(void)
{
    editSField(ValueFieldMask);

    return _sfValue.getValue();
}

//! Get the value of the ShaderParameterReal::_sfValue field.
inline
const Real32 &ShaderParameterRealBase::getValue(void) const
{
    return _sfValue.getValue();
}

//! Set the value of the ShaderParameterReal::_sfValue field.
inline
void ShaderParameterRealBase::setValue(const Real32 &value)
{
    editSField(ValueFieldMask);

    _sfValue.setValue(value);
}

//! create a new instance of the class
inline
ShaderParameterRealPtr ShaderParameterRealBase::create(void) 
{
    ShaderParameterRealPtr fc; 

    if(getClassType().getPrototype() != NullFC) 
    {
        fc = OSG::cast_dynamic<ShaderParameterReal::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

#ifdef OSG_MT_FIELDCONTAINERPTR
inline
void ShaderParameterRealBase::execSync(      ShaderParameterRealBase *pOther,
                                       ConstFieldMaskArg  whichField,
                                       ConstFieldMaskArg  syncMode  ,
                                 const UInt32             uiSyncInfo,
                                       UInt32             uiCopyOffset)
{
    Inherited::execSync(pOther, whichField, syncMode, uiSyncInfo, uiCopyOffset);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
        _sfValue.syncWith(pOther->_sfValue);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
inline
void ShaderParameterRealBase::execSync (      ShaderParameterRealBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo)
{
}
#endif

#if 0
inline
void ShaderParameterRealBase::execBeginEdit(ConstFieldMaskArg whichField,
                                      UInt32            uiAspect,
                                      UInt32            uiContainerSize)
{
    Inherited::execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif


inline
Char8 *ShaderParameterRealBase::getClassname(void)
{
    return "ShaderParameterReal";
}

typedef PointerBuilder<ShaderParameterReal>::ObjPtr          ShaderParameterRealPtr;
typedef PointerBuilder<ShaderParameterReal>::ObjPtrConst     ShaderParameterRealPtrConst;
typedef PointerBuilder<ShaderParameterReal>::ObjConstPtr     ShaderParameterRealConstPtr;

typedef PointerBuilder<ShaderParameterReal>::ObjPtrArg       ShaderParameterRealPtrArg;
typedef PointerBuilder<ShaderParameterReal>::ObjConstPtrArg  ShaderParameterRealConstPtrArg;
typedef PointerBuilder<ShaderParameterReal>::ObjPtrConstArg  ShaderParameterRealPtrConstArg;

OSG_END_NAMESPACE

#define OSGSHADERPARAMETERREALBASE_INLINE_CVSID "@(#)$Id: $"

