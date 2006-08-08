/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
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
 **     class SkyBackground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESKYBACKGROUNDINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>



#include <OSGTextureChunk.h> // BackTexture Class
#include <OSGTextureChunk.h> // BottomTexture Class
#include <OSGTextureChunk.h> // FrontTexture Class
#include <OSGTextureChunk.h> // LeftTexture Class
#include <OSGTextureChunk.h> // RightTexture Class
#include <OSGTextureChunk.h> // TopTexture Class
#include <OSGNode.h> // Beacon Class

#include "OSGSkyBackgroundBase.h"
#include "OSGSkyBackground.h"

OSG_USING_NAMESPACE

// Field descriptions

/*! \var Color4f SkyBackgroundBase::_mfSkyColor
    	The colors for the sky gradient bands. Corresponds to the skyAngle         angles.  The first value is for the apex (i.e. straight up), which         doesn't need an angle, thus there  should be one more color than         angles. If no angles are given color[0] is used, or black if none are         given.

*/
/*! \var Real32 SkyBackgroundBase::_mfSkyAngle
    	The angles for the sky gradient bands. Corresponds to the skyColor colors,          with the exception of the apex. Values should be between 0 and PI.

*/
/*! \var Color4f SkyBackgroundBase::_mfGroundColor
    	The colors of the ground sphere-part. Interpretation is similar to the sky.

*/
/*! \var Real32 SkyBackgroundBase::_mfGroundAngle
    	The angles of the ground sphere-part. Interpretation is similar to the sky, with          0 being straight down.

*/
/*! \var UInt32 SkyBackgroundBase::_sfSphereRes
    	The polygonal resolution of the sky/ground sphere.

*/
/*! \var TextureChunkPtr SkyBackgroundBase::_sfBackTexture
    	Texture for the back (+Z) side of the sky cube.

*/
/*! \var TextureChunkPtr SkyBackgroundBase::_sfBottomTexture
    	Texture for the bottom (-Y) side of the sky cube.

*/
/*! \var TextureChunkPtr SkyBackgroundBase::_sfFrontTexture
    	Texture for the front (-Z) side of the sky cube.

*/
/*! \var TextureChunkPtr SkyBackgroundBase::_sfLeftTexture
    	Texture for the left (-X) side of the sky cube.

*/
/*! \var TextureChunkPtr SkyBackgroundBase::_sfRightTexture
    	Texture for the right (+X) side of the sky cube.

*/
/*! \var TextureChunkPtr SkyBackgroundBase::_sfTopTexture
    	Texture for the top (+Y) side of the sky cube.

*/
/*! \var bool SkyBackgroundBase::_sfBoxInside
    	flag to draw the box inside or outside of the sphere

*/
/*! \var Vec3f SkyBackgroundBase::_mfTopTexCoord
    	Texture coordinates for the top face

*/
/*! \var Vec3f SkyBackgroundBase::_mfBottomTexCoord
    	Bottom texture coordinates

*/
/*! \var Vec3f SkyBackgroundBase::_mfRightTexCoord
    	right texture coordinates

*/
/*! \var Vec3f SkyBackgroundBase::_mfLeftTexCoord
    	left texture coordinates

*/
/*! \var Vec3f SkyBackgroundBase::_mfFrontTexCoord
    	front texture coordinates

*/
/*! \var Vec3f SkyBackgroundBase::_mfBackTexCoord
    	back texture coordinates

*/
/*! \var NodePtr SkyBackgroundBase::_sfBeacon
    	The object that defines the orientation of the background.

*/

void SkyBackgroundBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL; 


#ifdef OSG_1_COMPAT
    typedef const MFColor4f *(SkyBackgroundBase::*GetMFSkyColorF)(void) const;

    GetMFSkyColorF GetMFSkyColor = &SkyBackgroundBase::getMFSkyColor;
#endif

    pDesc = new MFColor4f::Description(
        MFColor4f::getClassType(), 
        "skyColor", 
        SkyColorFieldId, SkyColorFieldMask,
        false,
        Field::MFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&SkyBackgroundBase::editMFSkyColor),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetMFSkyColor));
#else
        reinterpret_cast<FieldGetMethodSig >(&SkyBackgroundBase::getMFSkyColor));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const MFReal32 *(SkyBackgroundBase::*GetMFSkyAngleF)(void) const;

    GetMFSkyAngleF GetMFSkyAngle = &SkyBackgroundBase::getMFSkyAngle;
#endif

    pDesc = new MFReal32::Description(
        MFReal32::getClassType(), 
        "skyAngle", 
        SkyAngleFieldId, SkyAngleFieldMask,
        false,
        Field::MFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&SkyBackgroundBase::editMFSkyAngle),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetMFSkyAngle));
#else
        reinterpret_cast<FieldGetMethodSig >(&SkyBackgroundBase::getMFSkyAngle));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const MFColor4f *(SkyBackgroundBase::*GetMFGroundColorF)(void) const;

    GetMFGroundColorF GetMFGroundColor = &SkyBackgroundBase::getMFGroundColor;
#endif

    pDesc = new MFColor4f::Description(
        MFColor4f::getClassType(), 
        "groundColor", 
        GroundColorFieldId, GroundColorFieldMask,
        false,
        Field::MFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&SkyBackgroundBase::editMFGroundColor),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetMFGroundColor));
#else
        reinterpret_cast<FieldGetMethodSig >(&SkyBackgroundBase::getMFGroundColor));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const MFReal32 *(SkyBackgroundBase::*GetMFGroundAngleF)(void) const;

    GetMFGroundAngleF GetMFGroundAngle = &SkyBackgroundBase::getMFGroundAngle;
#endif

    pDesc = new MFReal32::Description(
        MFReal32::getClassType(), 
        "groundAngle", 
        GroundAngleFieldId, GroundAngleFieldMask,
        false,
        Field::MFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&SkyBackgroundBase::editMFGroundAngle),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetMFGroundAngle));
#else
        reinterpret_cast<FieldGetMethodSig >(&SkyBackgroundBase::getMFGroundAngle));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFUInt32 *(SkyBackgroundBase::*GetSFSphereResF)(void) const;

    GetSFSphereResF GetSFSphereRes = &SkyBackgroundBase::getSFSphereRes;
#endif

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(), 
        "sphereRes", 
        SphereResFieldId, SphereResFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&SkyBackgroundBase::editSFSphereRes),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFSphereRes));
#else
        reinterpret_cast<FieldGetMethodSig >(&SkyBackgroundBase::getSFSphereRes));
#endif

    oType.addInitialDesc(pDesc);

    pDesc = new SFTextureChunkPtr::Description(
        SFTextureChunkPtr::getClassType(), 
        "backTexture", 
        BackTextureFieldId, BackTextureFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&SkyBackgroundBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&SkyBackgroundBase::getSFBackTexture));

    oType.addInitialDesc(pDesc);

    pDesc = new SFTextureChunkPtr::Description(
        SFTextureChunkPtr::getClassType(), 
        "bottomTexture", 
        BottomTextureFieldId, BottomTextureFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&SkyBackgroundBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&SkyBackgroundBase::getSFBottomTexture));

    oType.addInitialDesc(pDesc);

    pDesc = new SFTextureChunkPtr::Description(
        SFTextureChunkPtr::getClassType(), 
        "frontTexture", 
        FrontTextureFieldId, FrontTextureFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&SkyBackgroundBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&SkyBackgroundBase::getSFFrontTexture));

    oType.addInitialDesc(pDesc);

    pDesc = new SFTextureChunkPtr::Description(
        SFTextureChunkPtr::getClassType(), 
        "leftTexture", 
        LeftTextureFieldId, LeftTextureFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&SkyBackgroundBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&SkyBackgroundBase::getSFLeftTexture));

    oType.addInitialDesc(pDesc);

    pDesc = new SFTextureChunkPtr::Description(
        SFTextureChunkPtr::getClassType(), 
        "rightTexture", 
        RightTextureFieldId, RightTextureFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&SkyBackgroundBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&SkyBackgroundBase::getSFRightTexture));

    oType.addInitialDesc(pDesc);

    pDesc = new SFTextureChunkPtr::Description(
        SFTextureChunkPtr::getClassType(), 
        "topTexture", 
        TopTextureFieldId, TopTextureFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&SkyBackgroundBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&SkyBackgroundBase::getSFTopTexture));

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFBool *(SkyBackgroundBase::*GetSFBoxInsideF)(void) const;

    GetSFBoxInsideF GetSFBoxInside = &SkyBackgroundBase::getSFBoxInside;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(), 
        "boxInside", 
        BoxInsideFieldId, BoxInsideFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&SkyBackgroundBase::editSFBoxInside),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFBoxInside));
#else
        reinterpret_cast<FieldGetMethodSig >(&SkyBackgroundBase::getSFBoxInside));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const MFVec3f *(SkyBackgroundBase::*GetMFTopTexCoordF)(void) const;

    GetMFTopTexCoordF GetMFTopTexCoord = &SkyBackgroundBase::getMFTopTexCoord;
#endif

    pDesc = new MFVec3f::Description(
        MFVec3f::getClassType(), 
        "topTexCoord", 
        TopTexCoordFieldId, TopTexCoordFieldMask,
        false,
        Field::MFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&SkyBackgroundBase::editMFTopTexCoord),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetMFTopTexCoord));
#else
        reinterpret_cast<FieldGetMethodSig >(&SkyBackgroundBase::getMFTopTexCoord));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const MFVec3f *(SkyBackgroundBase::*GetMFBottomTexCoordF)(void) const;

    GetMFBottomTexCoordF GetMFBottomTexCoord = &SkyBackgroundBase::getMFBottomTexCoord;
#endif

    pDesc = new MFVec3f::Description(
        MFVec3f::getClassType(), 
        "bottomTexCoord", 
        BottomTexCoordFieldId, BottomTexCoordFieldMask,
        false,
        Field::MFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&SkyBackgroundBase::editMFBottomTexCoord),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetMFBottomTexCoord));
#else
        reinterpret_cast<FieldGetMethodSig >(&SkyBackgroundBase::getMFBottomTexCoord));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const MFVec3f *(SkyBackgroundBase::*GetMFRightTexCoordF)(void) const;

    GetMFRightTexCoordF GetMFRightTexCoord = &SkyBackgroundBase::getMFRightTexCoord;
#endif

    pDesc = new MFVec3f::Description(
        MFVec3f::getClassType(), 
        "rightTexCoord", 
        RightTexCoordFieldId, RightTexCoordFieldMask,
        false,
        Field::MFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&SkyBackgroundBase::editMFRightTexCoord),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetMFRightTexCoord));
#else
        reinterpret_cast<FieldGetMethodSig >(&SkyBackgroundBase::getMFRightTexCoord));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const MFVec3f *(SkyBackgroundBase::*GetMFLeftTexCoordF)(void) const;

    GetMFLeftTexCoordF GetMFLeftTexCoord = &SkyBackgroundBase::getMFLeftTexCoord;
#endif

    pDesc = new MFVec3f::Description(
        MFVec3f::getClassType(), 
        "leftTexCoord", 
        LeftTexCoordFieldId, LeftTexCoordFieldMask,
        false,
        Field::MFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&SkyBackgroundBase::editMFLeftTexCoord),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetMFLeftTexCoord));
#else
        reinterpret_cast<FieldGetMethodSig >(&SkyBackgroundBase::getMFLeftTexCoord));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const MFVec3f *(SkyBackgroundBase::*GetMFFrontTexCoordF)(void) const;

    GetMFFrontTexCoordF GetMFFrontTexCoord = &SkyBackgroundBase::getMFFrontTexCoord;
#endif

    pDesc = new MFVec3f::Description(
        MFVec3f::getClassType(), 
        "frontTexCoord", 
        FrontTexCoordFieldId, FrontTexCoordFieldMask,
        false,
        Field::MFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&SkyBackgroundBase::editMFFrontTexCoord),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetMFFrontTexCoord));
#else
        reinterpret_cast<FieldGetMethodSig >(&SkyBackgroundBase::getMFFrontTexCoord));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const MFVec3f *(SkyBackgroundBase::*GetMFBackTexCoordF)(void) const;

    GetMFBackTexCoordF GetMFBackTexCoord = &SkyBackgroundBase::getMFBackTexCoord;
#endif

    pDesc = new MFVec3f::Description(
        MFVec3f::getClassType(), 
        "backTexCoord", 
        BackTexCoordFieldId, BackTexCoordFieldMask,
        false,
        Field::MFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&SkyBackgroundBase::editMFBackTexCoord),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetMFBackTexCoord));
#else
        reinterpret_cast<FieldGetMethodSig >(&SkyBackgroundBase::getMFBackTexCoord));
#endif

    oType.addInitialDesc(pDesc);

    pDesc = new SFNodePtr::Description(
        SFNodePtr::getClassType(), 
        "beacon", 
        BeaconFieldId, BeaconFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&SkyBackgroundBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&SkyBackgroundBase::getSFBeacon));

    oType.addInitialDesc(pDesc);
}


SkyBackgroundBase::TypeObject SkyBackgroundBase::_type(true,
    SkyBackgroundBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &SkyBackgroundBase::createEmpty,
    SkyBackground::initMethod,
    (InitalInsertDescFunc) &SkyBackgroundBase::classDescInserter,
    false);

/*------------------------------ get -----------------------------------*/

FieldContainerType &SkyBackgroundBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &SkyBackgroundBase::getType(void) const 
{
    return _type;
} 

UInt32 SkyBackgroundBase::getContainerSize(void) const 
{ 
    return sizeof(SkyBackground); 
}

/*------------------------- decorator get ------------------------------*/


MFColor4f *SkyBackgroundBase::editMFSkyColor(void)
{
    editMField(SkyColorFieldMask, _mfSkyColor);

    return &_mfSkyColor;
}

const MFColor4f *SkyBackgroundBase::getMFSkyColor(void) const
{
    return &_mfSkyColor;
}

MFReal32 *SkyBackgroundBase::editMFSkyAngle(void)
{
    editMField(SkyAngleFieldMask, _mfSkyAngle);

    return &_mfSkyAngle;
}

const MFReal32 *SkyBackgroundBase::getMFSkyAngle(void) const
{
    return &_mfSkyAngle;
}

MFColor4f *SkyBackgroundBase::editMFGroundColor(void)
{
    editMField(GroundColorFieldMask, _mfGroundColor);

    return &_mfGroundColor;
}

const MFColor4f *SkyBackgroundBase::getMFGroundColor(void) const
{
    return &_mfGroundColor;
}

MFReal32 *SkyBackgroundBase::editMFGroundAngle(void)
{
    editMField(GroundAngleFieldMask, _mfGroundAngle);

    return &_mfGroundAngle;
}

const MFReal32 *SkyBackgroundBase::getMFGroundAngle(void) const
{
    return &_mfGroundAngle;
}

SFUInt32 *SkyBackgroundBase::editSFSphereRes(void)
{
    editSField(SphereResFieldMask);

    return &_sfSphereRes;
}

const SFUInt32 *SkyBackgroundBase::getSFSphereRes(void) const
{
    return &_sfSphereRes;
}

//! Get the SkyBackground::_sfBackTexture field.
const SFTextureChunkPtr *SkyBackgroundBase::getSFBackTexture(void) const
{
    return &_sfBackTexture;
}

//! Get the SkyBackground::_sfBottomTexture field.
const SFTextureChunkPtr *SkyBackgroundBase::getSFBottomTexture(void) const
{
    return &_sfBottomTexture;
}

//! Get the SkyBackground::_sfFrontTexture field.
const SFTextureChunkPtr *SkyBackgroundBase::getSFFrontTexture(void) const
{
    return &_sfFrontTexture;
}

//! Get the SkyBackground::_sfLeftTexture field.
const SFTextureChunkPtr *SkyBackgroundBase::getSFLeftTexture(void) const
{
    return &_sfLeftTexture;
}

//! Get the SkyBackground::_sfRightTexture field.
const SFTextureChunkPtr *SkyBackgroundBase::getSFRightTexture(void) const
{
    return &_sfRightTexture;
}

//! Get the SkyBackground::_sfTopTexture field.
const SFTextureChunkPtr *SkyBackgroundBase::getSFTopTexture(void) const
{
    return &_sfTopTexture;
}

SFBool *SkyBackgroundBase::editSFBoxInside(void)
{
    editSField(BoxInsideFieldMask);

    return &_sfBoxInside;
}

const SFBool *SkyBackgroundBase::getSFBoxInside(void) const
{
    return &_sfBoxInside;
}

MFVec3f *SkyBackgroundBase::editMFTopTexCoord(void)
{
    editMField(TopTexCoordFieldMask, _mfTopTexCoord);

    return &_mfTopTexCoord;
}

const MFVec3f *SkyBackgroundBase::getMFTopTexCoord(void) const
{
    return &_mfTopTexCoord;
}

MFVec3f *SkyBackgroundBase::editMFBottomTexCoord(void)
{
    editMField(BottomTexCoordFieldMask, _mfBottomTexCoord);

    return &_mfBottomTexCoord;
}

const MFVec3f *SkyBackgroundBase::getMFBottomTexCoord(void) const
{
    return &_mfBottomTexCoord;
}

MFVec3f *SkyBackgroundBase::editMFRightTexCoord(void)
{
    editMField(RightTexCoordFieldMask, _mfRightTexCoord);

    return &_mfRightTexCoord;
}

const MFVec3f *SkyBackgroundBase::getMFRightTexCoord(void) const
{
    return &_mfRightTexCoord;
}

MFVec3f *SkyBackgroundBase::editMFLeftTexCoord(void)
{
    editMField(LeftTexCoordFieldMask, _mfLeftTexCoord);

    return &_mfLeftTexCoord;
}

const MFVec3f *SkyBackgroundBase::getMFLeftTexCoord(void) const
{
    return &_mfLeftTexCoord;
}

MFVec3f *SkyBackgroundBase::editMFFrontTexCoord(void)
{
    editMField(FrontTexCoordFieldMask, _mfFrontTexCoord);

    return &_mfFrontTexCoord;
}

const MFVec3f *SkyBackgroundBase::getMFFrontTexCoord(void) const
{
    return &_mfFrontTexCoord;
}

MFVec3f *SkyBackgroundBase::editMFBackTexCoord(void)
{
    editMField(BackTexCoordFieldMask, _mfBackTexCoord);

    return &_mfBackTexCoord;
}

const MFVec3f *SkyBackgroundBase::getMFBackTexCoord(void) const
{
    return &_mfBackTexCoord;
}

//! Get the SkyBackground::_sfBeacon field.
const SFNodePtr *SkyBackgroundBase::getSFBeacon(void) const
{
    return &_sfBeacon;
}


void SkyBackgroundBase::pushToField(      FieldContainerPtrConstArg pNewElement,
                                    const UInt32                    uiFieldId  )
{
    Inherited::pushToField(pNewElement, uiFieldId);

    if(uiFieldId == BackTextureFieldId)
    {
        static_cast<SkyBackground *>(this)->setBackTexture(
            cast_dynamic<TextureChunkPtr>(pNewElement));
    }
    if(uiFieldId == BottomTextureFieldId)
    {
        static_cast<SkyBackground *>(this)->setBottomTexture(
            cast_dynamic<TextureChunkPtr>(pNewElement));
    }
    if(uiFieldId == FrontTextureFieldId)
    {
        static_cast<SkyBackground *>(this)->setFrontTexture(
            cast_dynamic<TextureChunkPtr>(pNewElement));
    }
    if(uiFieldId == LeftTextureFieldId)
    {
        static_cast<SkyBackground *>(this)->setLeftTexture(
            cast_dynamic<TextureChunkPtr>(pNewElement));
    }
    if(uiFieldId == RightTextureFieldId)
    {
        static_cast<SkyBackground *>(this)->setRightTexture(
            cast_dynamic<TextureChunkPtr>(pNewElement));
    }
    if(uiFieldId == TopTextureFieldId)
    {
        static_cast<SkyBackground *>(this)->setTopTexture(
            cast_dynamic<TextureChunkPtr>(pNewElement));
    }
    if(uiFieldId == BeaconFieldId)
    {
        static_cast<SkyBackground *>(this)->setBeacon(
            cast_dynamic<NodePtr>(pNewElement));
    }
}

void SkyBackgroundBase::insertIntoMField(const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::insertIntoMField(uiIndex, pNewElement, uiFieldId);

}

void SkyBackgroundBase::replaceInMField (const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::replaceInMField(uiIndex, pNewElement, uiFieldId);

}

void SkyBackgroundBase::replaceInMField (      FieldContainerPtrConstArg pOldElement,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::replaceInMField(pOldElement, pNewElement, uiFieldId);

}

void SkyBackgroundBase::removeFromMField(const UInt32 uiIndex,
                                         const UInt32 uiFieldId)
{
    Inherited::removeFromMField(uiIndex, uiFieldId);

}

void SkyBackgroundBase::removeFromMField(      FieldContainerPtrConstArg pElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::removeFromMField(pElement, uiFieldId);

}

void SkyBackgroundBase::clearField(const UInt32 uiFieldId)
{
    Inherited::clearField(uiFieldId);

    if(uiFieldId == BackTextureFieldId)
    {
        static_cast<SkyBackground *>(this)->setBackTexture(NullFC);
    }
    if(uiFieldId == BottomTextureFieldId)
    {
        static_cast<SkyBackground *>(this)->setBottomTexture(NullFC);
    }
    if(uiFieldId == FrontTextureFieldId)
    {
        static_cast<SkyBackground *>(this)->setFrontTexture(NullFC);
    }
    if(uiFieldId == LeftTextureFieldId)
    {
        static_cast<SkyBackground *>(this)->setLeftTexture(NullFC);
    }
    if(uiFieldId == RightTextureFieldId)
    {
        static_cast<SkyBackground *>(this)->setRightTexture(NullFC);
    }
    if(uiFieldId == TopTextureFieldId)
    {
        static_cast<SkyBackground *>(this)->setTopTexture(NullFC);
    }
    if(uiFieldId == BeaconFieldId)
    {
        static_cast<SkyBackground *>(this)->setBeacon(NullFC);
    }
}













/*------------------------------ access -----------------------------------*/

UInt32 SkyBackgroundBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (SkyColorFieldMask & whichField))
    {
        returnValue += _mfSkyColor.getBinSize();
    }
    if(FieldBits::NoField != (SkyAngleFieldMask & whichField))
    {
        returnValue += _mfSkyAngle.getBinSize();
    }
    if(FieldBits::NoField != (GroundColorFieldMask & whichField))
    {
        returnValue += _mfGroundColor.getBinSize();
    }
    if(FieldBits::NoField != (GroundAngleFieldMask & whichField))
    {
        returnValue += _mfGroundAngle.getBinSize();
    }
    if(FieldBits::NoField != (SphereResFieldMask & whichField))
    {
        returnValue += _sfSphereRes.getBinSize();
    }
    if(FieldBits::NoField != (BackTextureFieldMask & whichField))
    {
        returnValue += _sfBackTexture.getBinSize();
    }
    if(FieldBits::NoField != (BottomTextureFieldMask & whichField))
    {
        returnValue += _sfBottomTexture.getBinSize();
    }
    if(FieldBits::NoField != (FrontTextureFieldMask & whichField))
    {
        returnValue += _sfFrontTexture.getBinSize();
    }
    if(FieldBits::NoField != (LeftTextureFieldMask & whichField))
    {
        returnValue += _sfLeftTexture.getBinSize();
    }
    if(FieldBits::NoField != (RightTextureFieldMask & whichField))
    {
        returnValue += _sfRightTexture.getBinSize();
    }
    if(FieldBits::NoField != (TopTextureFieldMask & whichField))
    {
        returnValue += _sfTopTexture.getBinSize();
    }
    if(FieldBits::NoField != (BoxInsideFieldMask & whichField))
    {
        returnValue += _sfBoxInside.getBinSize();
    }
    if(FieldBits::NoField != (TopTexCoordFieldMask & whichField))
    {
        returnValue += _mfTopTexCoord.getBinSize();
    }
    if(FieldBits::NoField != (BottomTexCoordFieldMask & whichField))
    {
        returnValue += _mfBottomTexCoord.getBinSize();
    }
    if(FieldBits::NoField != (RightTexCoordFieldMask & whichField))
    {
        returnValue += _mfRightTexCoord.getBinSize();
    }
    if(FieldBits::NoField != (LeftTexCoordFieldMask & whichField))
    {
        returnValue += _mfLeftTexCoord.getBinSize();
    }
    if(FieldBits::NoField != (FrontTexCoordFieldMask & whichField))
    {
        returnValue += _mfFrontTexCoord.getBinSize();
    }
    if(FieldBits::NoField != (BackTexCoordFieldMask & whichField))
    {
        returnValue += _mfBackTexCoord.getBinSize();
    }
    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        returnValue += _sfBeacon.getBinSize();
    }

    return returnValue;
}

void SkyBackgroundBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (SkyColorFieldMask & whichField))
    {
        _mfSkyColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SkyAngleFieldMask & whichField))
    {
        _mfSkyAngle.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GroundColorFieldMask & whichField))
    {
        _mfGroundColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GroundAngleFieldMask & whichField))
    {
        _mfGroundAngle.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SphereResFieldMask & whichField))
    {
        _sfSphereRes.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BackTextureFieldMask & whichField))
    {
        _sfBackTexture.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BottomTextureFieldMask & whichField))
    {
        _sfBottomTexture.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FrontTextureFieldMask & whichField))
    {
        _sfFrontTexture.copyToBin(pMem);
    }
    if(FieldBits::NoField != (LeftTextureFieldMask & whichField))
    {
        _sfLeftTexture.copyToBin(pMem);
    }
    if(FieldBits::NoField != (RightTextureFieldMask & whichField))
    {
        _sfRightTexture.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TopTextureFieldMask & whichField))
    {
        _sfTopTexture.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BoxInsideFieldMask & whichField))
    {
        _sfBoxInside.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TopTexCoordFieldMask & whichField))
    {
        _mfTopTexCoord.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BottomTexCoordFieldMask & whichField))
    {
        _mfBottomTexCoord.copyToBin(pMem);
    }
    if(FieldBits::NoField != (RightTexCoordFieldMask & whichField))
    {
        _mfRightTexCoord.copyToBin(pMem);
    }
    if(FieldBits::NoField != (LeftTexCoordFieldMask & whichField))
    {
        _mfLeftTexCoord.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FrontTexCoordFieldMask & whichField))
    {
        _mfFrontTexCoord.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BackTexCoordFieldMask & whichField))
    {
        _mfBackTexCoord.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        _sfBeacon.copyToBin(pMem);
    }
}

void SkyBackgroundBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (SkyColorFieldMask & whichField))
    {
        _mfSkyColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SkyAngleFieldMask & whichField))
    {
        _mfSkyAngle.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GroundColorFieldMask & whichField))
    {
        _mfGroundColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GroundAngleFieldMask & whichField))
    {
        _mfGroundAngle.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SphereResFieldMask & whichField))
    {
        _sfSphereRes.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BackTextureFieldMask & whichField))
    {
        _sfBackTexture.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BottomTextureFieldMask & whichField))
    {
        _sfBottomTexture.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FrontTextureFieldMask & whichField))
    {
        _sfFrontTexture.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (LeftTextureFieldMask & whichField))
    {
        _sfLeftTexture.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (RightTextureFieldMask & whichField))
    {
        _sfRightTexture.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TopTextureFieldMask & whichField))
    {
        _sfTopTexture.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BoxInsideFieldMask & whichField))
    {
        _sfBoxInside.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TopTexCoordFieldMask & whichField))
    {
        _mfTopTexCoord.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BottomTexCoordFieldMask & whichField))
    {
        _mfBottomTexCoord.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (RightTexCoordFieldMask & whichField))
    {
        _mfRightTexCoord.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (LeftTexCoordFieldMask & whichField))
    {
        _mfLeftTexCoord.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FrontTexCoordFieldMask & whichField))
    {
        _mfFrontTexCoord.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BackTexCoordFieldMask & whichField))
    {
        _mfBackTexCoord.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        _sfBeacon.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
SkyBackgroundPtr SkyBackgroundBase::createEmpty(void) 
{ 
    SkyBackgroundPtr returnValue; 
    
    newPtr<SkyBackground>(returnValue); 

    return returnValue; 
}

FieldContainerPtr SkyBackgroundBase::shallowCopy(void) const 
{ 
    SkyBackgroundPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const SkyBackground *>(this)); 

    return returnValue; 
}



/*------------------------- constructors ----------------------------------*/

SkyBackgroundBase::SkyBackgroundBase(void) :
    Inherited(),
    _mfSkyColor(),
    _mfSkyAngle(),
    _mfGroundColor(),
    _mfGroundAngle(),
    _sfSphereRes(UInt32(8)),
    _sfBackTexture(TextureChunkPtr(NullFC)),
    _sfBottomTexture(TextureChunkPtr(NullFC)),
    _sfFrontTexture(TextureChunkPtr(NullFC)),
    _sfLeftTexture(TextureChunkPtr(NullFC)),
    _sfRightTexture(TextureChunkPtr(NullFC)),
    _sfTopTexture(TextureChunkPtr(NullFC)),
    _sfBoxInside(bool(true)),
    _mfTopTexCoord(),
    _mfBottomTexCoord(),
    _mfRightTexCoord(),
    _mfLeftTexCoord(),
    _mfFrontTexCoord(),
    _mfBackTexCoord(),
    _sfBeacon()
{
}

SkyBackgroundBase::SkyBackgroundBase(const SkyBackgroundBase &source) :
    Inherited(source),
    _mfSkyColor(source._mfSkyColor),
    _mfSkyAngle(source._mfSkyAngle),
    _mfGroundColor(source._mfGroundColor),
    _mfGroundAngle(source._mfGroundAngle),
    _sfSphereRes(source._sfSphereRes),
    _sfBackTexture(),
    _sfBottomTexture(),
    _sfFrontTexture(),
    _sfLeftTexture(),
    _sfRightTexture(),
    _sfTopTexture(),
    _sfBoxInside(source._sfBoxInside),
    _mfTopTexCoord(source._mfTopTexCoord),
    _mfBottomTexCoord(source._mfBottomTexCoord),
    _mfRightTexCoord(source._mfRightTexCoord),
    _mfLeftTexCoord(source._mfLeftTexCoord),
    _mfFrontTexCoord(source._mfFrontTexCoord),
    _mfBackTexCoord(source._mfBackTexCoord),
    _sfBeacon()
{
}

/*-------------------------- destructors ----------------------------------*/

SkyBackgroundBase::~SkyBackgroundBase(void)
{
}

void SkyBackgroundBase::onCreate(const SkyBackground *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        this->setBackTexture(source->getBackTexture());

        this->setBottomTexture(source->getBottomTexture());

        this->setFrontTexture(source->getFrontTexture());

        this->setLeftTexture(source->getLeftTexture());

        this->setRightTexture(source->getRightTexture());

        this->setTopTexture(source->getTopTexture());

        this->setBeacon(source->getBeacon());
    }
}

#ifdef OSG_MT_FIELDCONTAINERPTR
void SkyBackgroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<SkyBackgroundBase *>(&oFrom),
                   whichField, 
                   syncMode, 
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void SkyBackgroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<SkyBackgroundBase *>(&oFrom), 
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void SkyBackgroundBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr SkyBackgroundBase::createAspectCopy(void) const
{
    SkyBackgroundPtr returnValue; 

    newAspectCopy(returnValue, 
                  dynamic_cast<const SkyBackground *>(this)); 

    return returnValue; 
}
#endif

void SkyBackgroundBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<SkyBackground *>(this)->setBackTexture(NullFC);

    static_cast<SkyBackground *>(this)->setBottomTexture(NullFC);

    static_cast<SkyBackground *>(this)->setFrontTexture(NullFC);

    static_cast<SkyBackground *>(this)->setLeftTexture(NullFC);

    static_cast<SkyBackground *>(this)->setRightTexture(NullFC);

    static_cast<SkyBackground *>(this)->setTopTexture(NullFC);

    static_cast<SkyBackground *>(this)->setBeacon(NullFC);
}


#include "OSGMField.ins"

#if defined(OSG_TMPL_STATIC_MEMBER_NEEDS_FUNCTION_INSTANTIATION) || \
    defined(OSG_TMPL_STATIC_MEMBER_NEEDS_CLASS_INSTANTIATION   )

#include "OSGMFieldFuncs.ins"
#endif

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<SkyBackgroundPtr>::_type("SkyBackgroundPtr", "BackgroundPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(SkyBackgroundPtr)

OSG_FIELD_DLLEXPORT_DEF1(MField, SkyBackgroundPtr);

OSG_END_NAMESPACE


/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: OSGSkyBackgroundBase.cpp,v 1.1.2.4 2006/08/01 08:49:00 vossg Exp $";
    static Char8 cvsid_hpp       [] = OSGSKYBACKGROUNDBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGSKYBACKGROUNDBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGSKYBACKGROUNDFIELDS_HEADER_CVSID;
}
