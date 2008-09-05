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
 **     class KeySensor!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &KeySensorBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 KeySensorBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 KeySensorBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the KeySensor::_sfKey field.

inline
std::string &KeySensorBase::editKey(void)
{
    editSField(KeyFieldMask);

    return _sfKey.getValue();
}

//! Get the value of the KeySensor::_sfKey field.
inline
const std::string &KeySensorBase::getKey(void) const
{
    return _sfKey.getValue();
}

//! Set the value of the KeySensor::_sfKey field.
inline
void KeySensorBase::setKey(const std::string &value)
{
    editSField(KeyFieldMask);

    _sfKey.setValue(value);
}
//! Get the value of the KeySensor::_sfStateRaw field.

inline
bool &KeySensorBase::editStateRaw(void)
{
    editSField(StateRawFieldMask);

    return _sfStateRaw.getValue();
}

//! Get the value of the KeySensor::_sfStateRaw field.
inline
      bool  KeySensorBase::getStateRaw(void) const
{
    return _sfStateRaw.getValue();
}

//! Set the value of the KeySensor::_sfStateRaw field.
inline
void KeySensorBase::setStateRaw(const bool value)
{
    editSField(StateRawFieldMask);

    _sfStateRaw.setValue(value);
}
//! Get the value of the KeySensor::_sfStateFlipFlop field.

inline
bool &KeySensorBase::editStateFlipFlop(void)
{
    editSField(StateFlipFlopFieldMask);

    return _sfStateFlipFlop.getValue();
}

//! Get the value of the KeySensor::_sfStateFlipFlop field.
inline
      bool  KeySensorBase::getStateFlipFlop(void) const
{
    return _sfStateFlipFlop.getValue();
}

//! Set the value of the KeySensor::_sfStateFlipFlop field.
inline
void KeySensorBase::setStateFlipFlop(const bool value)
{
    editSField(StateFlipFlopFieldMask);

    _sfStateFlipFlop.setValue(value);
}
//! Get the value of the KeySensor::_sfSignalPressed field.

inline
OSGAny &KeySensorBase::editSignalPressed(void)
{
    editSField(SignalPressedFieldMask);

    return _sfSignalPressed.getValue();
}

//! Get the value of the KeySensor::_sfSignalPressed field.
inline
const OSGAny &KeySensorBase::getSignalPressed(void) const
{
    return _sfSignalPressed.getValue();
}

//! Set the value of the KeySensor::_sfSignalPressed field.
inline
void KeySensorBase::setSignalPressed(const OSGAny &value)
{
    editSField(SignalPressedFieldMask);

    _sfSignalPressed.setValue(value);
}
//! Get the value of the KeySensor::_sfSignalReleased field.

inline
OSGAny &KeySensorBase::editSignalReleased(void)
{
    editSField(SignalReleasedFieldMask);

    return _sfSignalReleased.getValue();
}

//! Get the value of the KeySensor::_sfSignalReleased field.
inline
const OSGAny &KeySensorBase::getSignalReleased(void) const
{
    return _sfSignalReleased.getValue();
}

//! Set the value of the KeySensor::_sfSignalReleased field.
inline
void KeySensorBase::setSignalReleased(const OSGAny &value)
{
    editSField(SignalReleasedFieldMask);

    _sfSignalReleased.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void KeySensorBase::execSync (      KeySensorBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (KeyFieldMask & whichField))
        _sfKey.syncWith(pFrom->_sfKey);

    if(FieldBits::NoField != (StateRawFieldMask & whichField))
        _sfStateRaw.syncWith(pFrom->_sfStateRaw);

    if(FieldBits::NoField != (StateFlipFlopFieldMask & whichField))
        _sfStateFlipFlop.syncWith(pFrom->_sfStateFlipFlop);

    if(FieldBits::NoField != (SignalPressedFieldMask & whichField))
        _sfSignalPressed.syncWith(pFrom->_sfSignalPressed);

    if(FieldBits::NoField != (SignalReleasedFieldMask & whichField))
        _sfSignalReleased.syncWith(pFrom->_sfSignalReleased);
}
#endif


inline
const Char8 *KeySensorBase::getClassname(void)
{
    return "KeySensor";
}
OSG_GEN_CONTAINERPTR(KeySensor);

OSG_END_NAMESPACE
