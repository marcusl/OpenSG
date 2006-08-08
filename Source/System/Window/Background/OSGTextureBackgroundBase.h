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
 **     class TextureBackground
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTEXTUREBACKGROUNDBASE_H_
#define _OSGTEXTUREBACKGROUNDBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGWindowDef.h"

#include "OSGBaseTypes.h"

#include "OSGBackground.h" // Parent

#include "OSGColor4fFields.h" // Color type
#include "OSGTextureChunkFields.h" // Texture type
#include "OSGPnt2fFields.h" // TexCoords type
#include "OSGReal32Fields.h" // RadialDistortion type
#include "OSGVec2fFields.h" // CenterOfDistortion type
#include "OSGUInt16Fields.h" // Hor type
#include "OSGUInt16Fields.h" // Vert type

#include "OSGTextureBackgroundFields.h"

OSG_BEGIN_NAMESPACE

class TextureBackground;

//! \brief TextureBackground Base Class.

class OSG_WINDOW_DLLMAPPING TextureBackgroundBase : public Background
{
  public:

    typedef Background Inherited;
    typedef Background ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    typedef PointerFwdBuilder<BackgroundPtr, 
                              BackgroundConstPtr, 
                              TextureBackground>::ObjPtr         ObjPtr;
    typedef PointerFwdBuilder<BackgroundPtr, 
                              BackgroundConstPtr, 
                              TextureBackground>::ObjPtrConst    ObjPtrConst;
    typedef PointerFwdBuilder<BackgroundPtr, 
                              BackgroundConstPtr,
                              TextureBackground>::ObjConstPtr    ObjConstPtr;
    typedef PointerFwdBuilder<BackgroundPtr, 
                              BackgroundConstPtr,
                              TextureBackground>::ObjPtrArg      ObjPtrArg;
    typedef PointerFwdBuilder<BackgroundPtr, 
                              BackgroundConstPtr,
                              TextureBackground>::ObjConstPtrArg ObjConstPtrArg;
    typedef PointerFwdBuilder<BackgroundPtr, 
                              BackgroundConstPtr,
                              TextureBackground>::ObjPtrConstArg ObjPtrConstArg;

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ColorFieldId = Inherited::NextFieldId,
        TextureFieldId = ColorFieldId + 1,
        TexCoordsFieldId = TextureFieldId + 1,
        RadialDistortionFieldId = TexCoordsFieldId + 1,
        CenterOfDistortionFieldId = RadialDistortionFieldId + 1,
        HorFieldId = CenterOfDistortionFieldId + 1,
        VertFieldId = HorFieldId + 1,
        NextFieldId = VertFieldId + 1
    };

    static const OSG::BitVector ColorFieldMask = 
        (TypeTraits<BitVector>::One << ColorFieldId);
    static const OSG::BitVector TextureFieldMask = 
        (TypeTraits<BitVector>::One << TextureFieldId);
    static const OSG::BitVector TexCoordsFieldMask = 
        (TypeTraits<BitVector>::One << TexCoordsFieldId);
    static const OSG::BitVector RadialDistortionFieldMask = 
        (TypeTraits<BitVector>::One << RadialDistortionFieldId);
    static const OSG::BitVector CenterOfDistortionFieldMask = 
        (TypeTraits<BitVector>::One << CenterOfDistortionFieldId);
    static const OSG::BitVector HorFieldMask = 
        (TypeTraits<BitVector>::One << HorFieldId);
    static const OSG::BitVector VertFieldMask = 
        (TypeTraits<BitVector>::One << VertFieldId);
    static const OSG::BitVector NextFieldMask = 
        (TypeTraits<BitVector>::One << NextFieldId);


    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void); 
    static UInt32              getClassTypeId (void); 
    static UInt16              getClassGroupId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void); 
    virtual const FieldContainerType &getType         (void) const; 

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


#ifdef OSG_1_COMPAT
           SFColor4f *getSFColor(void);
#endif
           SFColor4f *editSFColor(void);
     const SFColor4f *getSFColor (void) const;
     const SFTextureChunkPtr *getSFTexture (void) const;

#ifdef OSG_1_COMPAT
           MFPnt2f *getMFTexCoords(void);
#endif
           MFPnt2f *editMFTexCoords(void);
     const MFPnt2f *getMFTexCoords (void) const;

#ifdef OSG_1_COMPAT
           SFReal32 *getSFRadialDistortion(void);
#endif
           SFReal32 *editSFRadialDistortion(void);
     const SFReal32 *getSFRadialDistortion (void) const;

#ifdef OSG_1_COMPAT
           SFVec2f *getSFCenterOfDistortion(void);
#endif
           SFVec2f *editSFCenterOfDistortion(void);
     const SFVec2f *getSFCenterOfDistortion (void) const;

#ifdef OSG_1_COMPAT
           SFUInt16 *getSFHor(void);
#endif
           SFUInt16 *editSFHor(void);
     const SFUInt16 *getSFHor (void) const;

#ifdef OSG_1_COMPAT
           SFUInt16 *getSFVert(void);
#endif
           SFUInt16 *editSFVert(void);
     const SFUInt16 *getSFVert (void) const;


#ifdef OSG_1_COMPAT
           Color4f &getColor(void);
#endif
           Color4f &editColor(void);
     const Color4f &getColor (void) const;

           TextureChunkPtrConst getTexture(void) const;

#ifdef OSG_1_COMPAT
           Pnt2f &getTexCoords(const UInt32 index);
           MFPnt2f &getTexCoords(void);
#endif
           Pnt2f &editTexCoords(const UInt32 index);
     const Pnt2f &getTexCoords (const UInt32 index) const;
           MFPnt2f &editTexCoords(void);
     const MFPnt2f &getTexCoords(void) const;

#ifdef OSG_1_COMPAT
           Real32 &getRadialDistortion(void);
#endif
           Real32 &editRadialDistortion(void);
     const Real32 &getRadialDistortion (void) const;

#ifdef OSG_1_COMPAT
           Vec2f &getCenterOfDistortion(void);
#endif
           Vec2f &editCenterOfDistortion(void);
     const Vec2f &getCenterOfDistortion (void) const;

#ifdef OSG_1_COMPAT
           UInt16 &getHor(void);
#endif
           UInt16 &editHor(void);
     const UInt16 &getHor (void) const;

#ifdef OSG_1_COMPAT
           UInt16 &getVert(void);
#endif
           UInt16 &editVert(void);
     const UInt16 &getVert (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setColor(const Color4f &value);
     void setTexture(TextureChunkPtrConstArg value);
     void setRadialDistortion(const Real32 &value);
     void setCenterOfDistortion(const Vec2f &value);
     void setHor(const UInt16 &value);
     void setVert(const UInt16 &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    virtual void pushToField     (      FieldContainerPtrConstArg pNewElement, 
                                  const UInt32                    uiFieldId  );

    virtual void insertIntoMField(const UInt32                    uiIndex, 
                                        FieldContainerPtrConstArg pNewElement, 
                                  const UInt32                    uiFieldId  );

    virtual void replaceInMField (const UInt32                    uiIndex,
                                        FieldContainerPtrConstArg pNewElement, 
                                  const UInt32                    uiFieldId  );

    virtual void replaceInMField (      FieldContainerPtrConstArg pOldElement,
                                        FieldContainerPtrConstArg pNewElement, 
                                  const UInt32                    uiFieldId  );

    virtual void removeFromMField(const UInt32                    uiIndex, 
                                  const UInt32                    uiFieldId  );
    
    virtual void removeFromMField(      FieldContainerPtrConstArg pElement, 
                                  const UInt32                    uiFieldId  );

    virtual void clearField      (const UInt32                    uiFieldId  );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  TextureBackgroundPtr create     (void); 
    static  TextureBackgroundPtr createEmpty(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerPtr shallowCopy(void) const; 

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static void   classDescInserter(TypeObject &oType);
    static Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFColor4f _sfColor;
    SFTextureChunkPtr _sfTexture;
    MFPnt2f _mfTexCoords;
    SFReal32 _sfRadialDistortion;
    SFVec2f _sfCenterOfDistortion;
    SFUInt16 _sfHor;
    SFUInt16 _sfVert;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    TextureBackgroundBase(void);
    TextureBackgroundBase(const TextureBackgroundBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TextureBackgroundBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const TextureBackground *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_FIELDCONTAINERPTR
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo,
                                 UInt32             uiCopyOffset);

            void execSync (      TextureBackgroundBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo,
                                 UInt32             uiCopyOffset);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      TextureBackgroundBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

#if 0
    virtual void execBeginEditV(ConstFieldMaskArg whichField, 
                                UInt32            uiAspect,
                                UInt32            uiContainerSize);

            void execBeginEdit (ConstFieldMaskArg whichField, 
                                UInt32            uiAspect,
                                UInt32            uiContainerSize);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainerPtr createAspectCopy(void) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const TextureBackgroundBase &source);
};

typedef TextureBackgroundBase *TextureBackgroundBaseP;

typedef RefPtr<TextureBackground> TextureBackgroundRefPtr;

typedef osgIF<
    TextureBackgroundBase::isNodeCore,

    CoredNodePtr<TextureBackground>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::_IRet

        TextureBackgroundNodePtr;

OSG_END_NAMESPACE

#define OSGTEXTUREBACKGROUNDBASE_HEADER_CVSID "@(#)$Id: OSGTextureBackgroundBase.h,v 1.1.2.3 2006/08/01 08:49:00 vossg Exp $"

#endif /* _OSGTEXTUREBACKGROUNDBASE_H_ */
