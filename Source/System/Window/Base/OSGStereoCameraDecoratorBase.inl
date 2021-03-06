/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 * contact: dirk@opensg.org, gerrit.voss@vossg.org, carsten_neumann@gmx.net  *
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
 **     class StereoCameraDecorator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &StereoCameraDecoratorBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 StereoCameraDecoratorBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 StereoCameraDecoratorBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the StereoCameraDecorator::_sfLeftEye field.

inline
bool &StereoCameraDecoratorBase::editLeftEye(void)
{
    editSField(LeftEyeFieldMask);

    return _sfLeftEye.getValue();
}

//! Get the value of the StereoCameraDecorator::_sfLeftEye field.
inline
      bool  StereoCameraDecoratorBase::getLeftEye(void) const
{
    return _sfLeftEye.getValue();
}

//! Set the value of the StereoCameraDecorator::_sfLeftEye field.
inline
void StereoCameraDecoratorBase::setLeftEye(const bool value)
{
    editSField(LeftEyeFieldMask);

    _sfLeftEye.setValue(value);
}
//! Get the value of the StereoCameraDecorator::_sfEyeSeparation field.

inline
Real32 &StereoCameraDecoratorBase::editEyeSeparation(void)
{
    editSField(EyeSeparationFieldMask);

    return _sfEyeSeparation.getValue();
}

//! Get the value of the StereoCameraDecorator::_sfEyeSeparation field.
inline
      Real32  StereoCameraDecoratorBase::getEyeSeparation(void) const
{
    return _sfEyeSeparation.getValue();
}

//! Set the value of the StereoCameraDecorator::_sfEyeSeparation field.
inline
void StereoCameraDecoratorBase::setEyeSeparation(const Real32 value)
{
    editSField(EyeSeparationFieldMask);

    _sfEyeSeparation.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void StereoCameraDecoratorBase::execSync (      StereoCameraDecoratorBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (LeftEyeFieldMask & whichField))
        _sfLeftEye.syncWith(pFrom->_sfLeftEye);

    if(FieldBits::NoField != (EyeSeparationFieldMask & whichField))
        _sfEyeSeparation.syncWith(pFrom->_sfEyeSeparation);
}
#endif


inline
const Char8 *StereoCameraDecoratorBase::getClassname(void)
{
    return "StereoCameraDecorator";
}
OSG_GEN_CONTAINERPTR(StereoCameraDecorator);

OSG_END_NAMESPACE

