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
 **     class CSMViewport!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &CSMViewportBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 CSMViewportBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 CSMViewportBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the CSMViewport::_sfLeftBottom field.

inline
Vec2f &CSMViewportBase::editLeftBottom(void)
{
    editSField(LeftBottomFieldMask);

    return _sfLeftBottom.getValue();
}

//! Get the value of the CSMViewport::_sfLeftBottom field.
inline
const Vec2f &CSMViewportBase::getLeftBottom(void) const
{
    return _sfLeftBottom.getValue();
}

//! Set the value of the CSMViewport::_sfLeftBottom field.
inline
void CSMViewportBase::setLeftBottom(const Vec2f &value)
{
    editSField(LeftBottomFieldMask);

    _sfLeftBottom.setValue(value);
}
//! Get the value of the CSMViewport::_sfRightTop field.

inline
Vec2f &CSMViewportBase::editRightTop(void)
{
    editSField(RightTopFieldMask);

    return _sfRightTop.getValue();
}

//! Get the value of the CSMViewport::_sfRightTop field.
inline
const Vec2f &CSMViewportBase::getRightTop(void) const
{
    return _sfRightTop.getValue();
}

//! Set the value of the CSMViewport::_sfRightTop field.
inline
void CSMViewportBase::setRightTop(const Vec2f &value)
{
    editSField(RightTopFieldMask);

    _sfRightTop.setValue(value);
}
//! Get the value of the CSMViewport::_sfTravMask field.

inline
UInt32 &CSMViewportBase::editTravMask(void)
{
    editSField(TravMaskFieldMask);

    return _sfTravMask.getValue();
}

//! Get the value of the CSMViewport::_sfTravMask field.
inline
      UInt32  CSMViewportBase::getTravMask(void) const
{
    return _sfTravMask.getValue();
}

//! Set the value of the CSMViewport::_sfTravMask field.
inline
void CSMViewportBase::setTravMask(const UInt32 value)
{
    editSField(TravMaskFieldMask);

    _sfTravMask.setValue(value);
}
//! Get the value of the CSMViewport::_sfStereoMode field.

inline
std::string &CSMViewportBase::editStereoMode(void)
{
    editSField(StereoModeFieldMask);

    return _sfStereoMode.getValue();
}

//! Get the value of the CSMViewport::_sfStereoMode field.
inline
const std::string &CSMViewportBase::getStereoMode(void) const
{
    return _sfStereoMode.getValue();
}

//! Set the value of the CSMViewport::_sfStereoMode field.
inline
void CSMViewportBase::setStereoMode(const std::string &value)
{
    editSField(StereoModeFieldMask);

    _sfStereoMode.setValue(value);
}
//! Get the value of the CSMViewport::_sfPassive field.

inline
bool &CSMViewportBase::editPassive(void)
{
    editSField(PassiveFieldMask);

    return _sfPassive.getValue();
}

//! Get the value of the CSMViewport::_sfPassive field.
inline
      bool  CSMViewportBase::getPassive(void) const
{
    return _sfPassive.getValue();
}

//! Set the value of the CSMViewport::_sfPassive field.
inline
void CSMViewportBase::setPassive(const bool value)
{
    editSField(PassiveFieldMask);

    _sfPassive.setValue(value);
}
//! Get the value of the CSMViewport::_sfServerId field.

inline
Int32 &CSMViewportBase::editServerId(void)
{
    editSField(ServerIdFieldMask);

    return _sfServerId.getValue();
}

//! Get the value of the CSMViewport::_sfServerId field.
inline
      Int32  CSMViewportBase::getServerId(void) const
{
    return _sfServerId.getValue();
}

//! Set the value of the CSMViewport::_sfServerId field.
inline
void CSMViewportBase::setServerId(const Int32 value)
{
    editSField(ServerIdFieldMask);

    _sfServerId.setValue(value);
}
//! Get the value of the CSMViewport::_sfMouseDataVC field.

inline
MouseData &CSMViewportBase::editMouseDataVC(void)
{
    editSField(MouseDataVCFieldMask);

    return _sfMouseDataVC.getValue();
}

//! Get the value of the CSMViewport::_sfMouseDataVC field.
inline
const MouseData &CSMViewportBase::getMouseDataVC(void) const
{
    return _sfMouseDataVC.getValue();
}

//! Set the value of the CSMViewport::_sfMouseDataVC field.
inline
void CSMViewportBase::setMouseDataVC(const MouseData &value)
{
    editSField(MouseDataVCFieldMask);

    _sfMouseDataVC.setValue(value);
}
//! Get the value of the CSMViewport::_sfMTouchDataVC field.

inline
MTouchData &CSMViewportBase::editMTouchDataVC(void)
{
    editSField(MTouchDataVCFieldMask);

    return _sfMTouchDataVC.getValue();
}

//! Get the value of the CSMViewport::_sfMTouchDataVC field.
inline
const MTouchData &CSMViewportBase::getMTouchDataVC(void) const
{
    return _sfMTouchDataVC.getValue();
}

//! Set the value of the CSMViewport::_sfMTouchDataVC field.
inline
void CSMViewportBase::setMTouchDataVC(const MTouchData &value)
{
    editSField(MTouchDataVCFieldMask);

    _sfMTouchDataVC.setValue(value);
}



#ifdef OSG_MT_CPTR_ASPECT
inline
void CSMViewportBase::execSync (      CSMViewportBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (RootFieldMask & whichField))
        _sfRoot.syncWith(pFrom->_sfRoot);

    if(FieldBits::NoField != (CameraFieldMask & whichField))
        _sfCamera.syncWith(pFrom->_sfCamera);

    if(FieldBits::NoField != (BackgroundFieldMask & whichField))
        _sfBackground.syncWith(pFrom->_sfBackground);

    if(FieldBits::NoField != (ForegroundsFieldMask & whichField))
        _mfForegrounds.syncWith(pFrom->_mfForegrounds,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (LeftBottomFieldMask & whichField))
        _sfLeftBottom.syncWith(pFrom->_sfLeftBottom);

    if(FieldBits::NoField != (RightTopFieldMask & whichField))
        _sfRightTop.syncWith(pFrom->_sfRightTop);

    if(FieldBits::NoField != (TravMaskFieldMask & whichField))
        _sfTravMask.syncWith(pFrom->_sfTravMask);

    if(FieldBits::NoField != (RenderOptionsFieldMask & whichField))
        _sfRenderOptions.syncWith(pFrom->_sfRenderOptions);

    if(FieldBits::NoField != (StereoModeFieldMask & whichField))
        _sfStereoMode.syncWith(pFrom->_sfStereoMode);

    if(FieldBits::NoField != (PassiveFieldMask & whichField))
        _sfPassive.syncWith(pFrom->_sfPassive);

    if(FieldBits::NoField != (ServerIdFieldMask & whichField))
        _sfServerId.syncWith(pFrom->_sfServerId);

    if(FieldBits::NoField != (MouseDataVCFieldMask & whichField))
        _sfMouseDataVC.syncWith(pFrom->_sfMouseDataVC);

    if(FieldBits::NoField != (MTouchDataVCFieldMask & whichField))
        _sfMTouchDataVC.syncWith(pFrom->_sfMTouchDataVC);
}
#endif


inline
const Char8 *CSMViewportBase::getClassname(void)
{
    return "CSMViewport";
}
OSG_GEN_CONTAINERPTR(CSMViewport);

OSG_END_NAMESPACE

