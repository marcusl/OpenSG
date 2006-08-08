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
 **     class ComponentTransform
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGCOMPONENTTRANSFORMBASE_H_
#define _OSGCOMPONENTTRANSFORMBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGGroupDef.h"

#include "OSGBaseTypes.h"

#include "OSGTransform.h" // Parent

#include "OSGVec3rFields.h" // Center type
#include "OSGQuaternionrFields.h" // Rotation type
#include "OSGVec3rFields.h" // Scale type
#include "OSGQuaternionrFields.h" // ScaleOrientation type
#include "OSGVec3rFields.h" // Translation type

#include "OSGComponentTransformFields.h"

OSG_BEGIN_NAMESPACE

class ComponentTransform;

//! \brief ComponentTransform Base Class.

class OSG_GROUP_DLLMAPPING ComponentTransformBase : public Transform
{
  public:

    typedef Transform Inherited;
    typedef Transform ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    typedef PointerFwdBuilder<TransformPtr, 
                              TransformConstPtr, 
                              ComponentTransform>::ObjPtr         ObjPtr;
    typedef PointerFwdBuilder<TransformPtr, 
                              TransformConstPtr, 
                              ComponentTransform>::ObjPtrConst    ObjPtrConst;
    typedef PointerFwdBuilder<TransformPtr, 
                              TransformConstPtr,
                              ComponentTransform>::ObjConstPtr    ObjConstPtr;
    typedef PointerFwdBuilder<TransformPtr, 
                              TransformConstPtr,
                              ComponentTransform>::ObjPtrArg      ObjPtrArg;
    typedef PointerFwdBuilder<TransformPtr, 
                              TransformConstPtr,
                              ComponentTransform>::ObjConstPtrArg ObjConstPtrArg;
    typedef PointerFwdBuilder<TransformPtr, 
                              TransformConstPtr,
                              ComponentTransform>::ObjPtrConstArg ObjPtrConstArg;

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        CenterFieldId = Inherited::NextFieldId,
        RotationFieldId = CenterFieldId + 1,
        ScaleFieldId = RotationFieldId + 1,
        ScaleOrientationFieldId = ScaleFieldId + 1,
        TranslationFieldId = ScaleOrientationFieldId + 1,
        NextFieldId = TranslationFieldId + 1
    };

    static const OSG::BitVector CenterFieldMask = 
        (TypeTraits<BitVector>::One << CenterFieldId);
    static const OSG::BitVector RotationFieldMask = 
        (TypeTraits<BitVector>::One << RotationFieldId);
    static const OSG::BitVector ScaleFieldMask = 
        (TypeTraits<BitVector>::One << ScaleFieldId);
    static const OSG::BitVector ScaleOrientationFieldMask = 
        (TypeTraits<BitVector>::One << ScaleOrientationFieldId);
    static const OSG::BitVector TranslationFieldMask = 
        (TypeTraits<BitVector>::One << TranslationFieldId);
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
           SFVec3r *getSFCenter(void);
#endif
           SFVec3r *editSFCenter(void);
     const SFVec3r *getSFCenter (void) const;

#ifdef OSG_1_COMPAT
           SFQuaternionr *getSFRotation(void);
#endif
           SFQuaternionr *editSFRotation(void);
     const SFQuaternionr *getSFRotation (void) const;

#ifdef OSG_1_COMPAT
           SFVec3r *getSFScale(void);
#endif
           SFVec3r *editSFScale(void);
     const SFVec3r *getSFScale (void) const;

#ifdef OSG_1_COMPAT
           SFQuaternionr *getSFScaleOrientation(void);
#endif
           SFQuaternionr *editSFScaleOrientation(void);
     const SFQuaternionr *getSFScaleOrientation (void) const;

#ifdef OSG_1_COMPAT
           SFVec3r *getSFTranslation(void);
#endif
           SFVec3r *editSFTranslation(void);
     const SFVec3r *getSFTranslation (void) const;


#ifdef OSG_1_COMPAT
           Vec3r &getCenter(void);
#endif
           Vec3r &editCenter(void);
     const Vec3r &getCenter (void) const;

#ifdef OSG_1_COMPAT
           Quaternionr &getRotation(void);
#endif
           Quaternionr &editRotation(void);
     const Quaternionr &getRotation (void) const;

#ifdef OSG_1_COMPAT
           Vec3r &getScale(void);
#endif
           Vec3r &editScale(void);
     const Vec3r &getScale (void) const;

#ifdef OSG_1_COMPAT
           Quaternionr &getScaleOrientation(void);
#endif
           Quaternionr &editScaleOrientation(void);
     const Quaternionr &getScaleOrientation (void) const;

#ifdef OSG_1_COMPAT
           Vec3r &getTranslation(void);
#endif
           Vec3r &editTranslation(void);
     const Vec3r &getTranslation (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setCenter(const Vec3r &value);
     void setRotation(const Quaternionr &value);
     void setScale(const Vec3r &value);
     void setScaleOrientation(const Quaternionr &value);
     void setTranslation(const Vec3r &value);

    /*! \}                                                                 */
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

    static  ComponentTransformPtr create     (void); 
    static  ComponentTransformPtr createEmpty(void); 

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

    SFVec3r _sfCenter;
    SFQuaternionr _sfRotation;
    SFVec3r _sfScale;
    SFQuaternionr _sfScaleOrientation;
    SFVec3r _sfTranslation;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ComponentTransformBase(void);
    ComponentTransformBase(const ComponentTransformBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ComponentTransformBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


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

            void execSync (      ComponentTransformBase *pFrom,
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

            void execSync (      ComponentTransformBase *pFrom,
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
    void operator =(const ComponentTransformBase &source);
};

typedef ComponentTransformBase *ComponentTransformBaseP;

typedef RefPtr<ComponentTransform> ComponentTransformRefPtr;

typedef osgIF<
    ComponentTransformBase::isNodeCore,

    CoredNodePtr<ComponentTransform>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::_IRet

        ComponentTransformNodePtr;

OSG_END_NAMESPACE

#define OSGCOMPONENTTRANSFORMBASE_HEADER_CVSID "@(#)$Id: $"

#endif /* _OSGCOMPONENTTRANSFORMBASE_H_ */
