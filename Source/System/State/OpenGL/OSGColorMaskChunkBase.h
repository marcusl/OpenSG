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
 **     class ColorMaskChunk
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGCOLORMASKCHUNKBASE_H_
#define _OSGCOLORMASKCHUNKBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGStateDef.h"

#include "OSGBaseTypes.h"

#include "OSGStateChunk.h" // Parent

#include "OSGBoolFields.h" // MaskR type
#include "OSGBoolFields.h" // MaskG type
#include "OSGBoolFields.h" // MaskB type
#include "OSGBoolFields.h" // MaskA type

#include "OSGColorMaskChunkFields.h"

OSG_BEGIN_NAMESPACE

class ColorMaskChunk;

//! \brief ColorMaskChunk Base Class.

class OSG_STATE_DLLMAPPING ColorMaskChunkBase : public StateChunk
{
  public:

    typedef StateChunk Inherited;
    typedef StateChunk ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    typedef PointerFwdBuilder<StateChunkPtr, 
                              StateChunkConstPtr, 
                              ColorMaskChunk>::ObjPtr         ObjPtr;
    typedef PointerFwdBuilder<StateChunkPtr, 
                              StateChunkConstPtr, 
                              ColorMaskChunk>::ObjPtrConst    ObjPtrConst;
    typedef PointerFwdBuilder<StateChunkPtr, 
                              StateChunkConstPtr,
                              ColorMaskChunk>::ObjConstPtr    ObjConstPtr;
    typedef PointerFwdBuilder<StateChunkPtr, 
                              StateChunkConstPtr,
                              ColorMaskChunk>::ObjPtrArg      ObjPtrArg;
    typedef PointerFwdBuilder<StateChunkPtr, 
                              StateChunkConstPtr,
                              ColorMaskChunk>::ObjConstPtrArg ObjConstPtrArg;
    typedef PointerFwdBuilder<StateChunkPtr, 
                              StateChunkConstPtr,
                              ColorMaskChunk>::ObjPtrConstArg ObjPtrConstArg;

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        MaskRFieldId = Inherited::NextFieldId,
        MaskGFieldId = MaskRFieldId + 1,
        MaskBFieldId = MaskGFieldId + 1,
        MaskAFieldId = MaskBFieldId + 1,
        NextFieldId = MaskAFieldId + 1
    };

    static const OSG::BitVector MaskRFieldMask = 
        (TypeTraits<BitVector>::One << MaskRFieldId);
    static const OSG::BitVector MaskGFieldMask = 
        (TypeTraits<BitVector>::One << MaskGFieldId);
    static const OSG::BitVector MaskBFieldMask = 
        (TypeTraits<BitVector>::One << MaskBFieldId);
    static const OSG::BitVector MaskAFieldMask = 
        (TypeTraits<BitVector>::One << MaskAFieldId);
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
           SFBool *getSFMaskR(void);
#endif
           SFBool *editSFMaskR(void);
     const SFBool *getSFMaskR (void) const;

#ifdef OSG_1_COMPAT
           SFBool *getSFMaskG(void);
#endif
           SFBool *editSFMaskG(void);
     const SFBool *getSFMaskG (void) const;

#ifdef OSG_1_COMPAT
           SFBool *getSFMaskB(void);
#endif
           SFBool *editSFMaskB(void);
     const SFBool *getSFMaskB (void) const;

#ifdef OSG_1_COMPAT
           SFBool *getSFMaskA(void);
#endif
           SFBool *editSFMaskA(void);
     const SFBool *getSFMaskA (void) const;


#ifdef OSG_1_COMPAT
           bool &getMaskR(void);
#endif
           bool &editMaskR(void);
     const bool &getMaskR (void) const;

#ifdef OSG_1_COMPAT
           bool &getMaskG(void);
#endif
           bool &editMaskG(void);
     const bool &getMaskG (void) const;

#ifdef OSG_1_COMPAT
           bool &getMaskB(void);
#endif
           bool &editMaskB(void);
     const bool &getMaskB (void) const;

#ifdef OSG_1_COMPAT
           bool &getMaskA(void);
#endif
           bool &editMaskA(void);
     const bool &getMaskA (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setMaskR(const bool &value);
     void setMaskG(const bool &value);
     void setMaskB(const bool &value);
     void setMaskA(const bool &value);

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

    static  ColorMaskChunkPtr create     (void); 
    static  ColorMaskChunkPtr createEmpty(void); 

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

    SFBool _sfMaskR;
    SFBool _sfMaskG;
    SFBool _sfMaskB;
    SFBool _sfMaskA;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ColorMaskChunkBase(void);
    ColorMaskChunkBase(const ColorMaskChunkBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ColorMaskChunkBase(void); 

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

            void execSync (      ColorMaskChunkBase *pFrom,
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

            void execSync (      ColorMaskChunkBase *pFrom,
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
    void operator =(const ColorMaskChunkBase &source);
};

typedef ColorMaskChunkBase *ColorMaskChunkBaseP;

typedef RefPtr<ColorMaskChunk> ColorMaskChunkRefPtr;

typedef osgIF<
    ColorMaskChunkBase::isNodeCore,

    CoredNodePtr<ColorMaskChunk>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::_IRet

        ColorMaskChunkNodePtr;

OSG_END_NAMESPACE

#define OSGCOLORMASKCHUNKBASE_HEADER_CVSID "@(#)$Id: $"

#endif /* _OSGCOLORMASKCHUNKBASE_H_ */
