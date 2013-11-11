/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
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
 **     class ComputeShaderAlgorithm
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGCOMPUTESHADERALGORITHMBASE_H_
#define _OSGCOMPUTESHADERALGORITHMBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribComputeBaseDef.h"

//#include "OSGBaseTypes.h"

#include "OSGComputeAlgorithm.h" // Parent

#include "OSGTextureImageChunkFields.h" // TextureImages type
#include "OSGComputeShaderChunkFields.h" // ComputeShader type
#include "OSGVecFields.h"               // DispatchConfig type

#include "OSGComputeShaderAlgorithmFields.h"

OSG_BEGIN_NAMESPACE


class ComputeShaderAlgorithm;

//! \brief ComputeShaderAlgorithm Base Class.

class OSG_CONTRIBCOMPUTEBASE_DLLMAPPING ComputeShaderAlgorithmBase : public ComputeAlgorithm
{
  public:

    typedef ComputeAlgorithm Inherited;
    typedef ComputeAlgorithm ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(ComputeShaderAlgorithm);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        TextureImagesFieldId = Inherited::NextFieldId,
        ComputeShaderFieldId = TextureImagesFieldId + 1,
        DispatchConfigFieldId = ComputeShaderFieldId + 1,
        NextFieldId = DispatchConfigFieldId + 1
    };

    static const OSG::BitVector TextureImagesFieldMask =
        (TypeTraits<BitVector>::One << TextureImagesFieldId);
    static const OSG::BitVector ComputeShaderFieldMask =
        (TypeTraits<BitVector>::One << ComputeShaderFieldId);
    static const OSG::BitVector DispatchConfigFieldMask =
        (TypeTraits<BitVector>::One << DispatchConfigFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef MFUnrecTextureImageChunkPtr MFTextureImagesType;
    typedef SFUnrecComputeShaderChunkPtr SFComputeShaderType;
    typedef SFVec3i           SFDispatchConfigType;

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

            const MFUnrecTextureImageChunkPtr *getMFTextureImages  (void) const;
                  MFUnrecTextureImageChunkPtr *editMFTextureImages  (void);
            const SFUnrecComputeShaderChunkPtr *getSFComputeShader  (void) const;
                  SFUnrecComputeShaderChunkPtr *editSFComputeShader  (void);

                  SFVec3i             *editSFDispatchConfig (void);
            const SFVec3i             *getSFDispatchConfig  (void) const;


                  TextureImageChunk * getTextureImages  (const UInt32 index) const;

                  ComputeShaderChunk * getComputeShader  (void) const;

                  Vec3i               &editDispatchConfig (void);
            const Vec3i               &getDispatchConfig  (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setComputeShader  (ComputeShaderChunk * const value);
            void setDispatchConfig (const Vec3i &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    void pushToTextureImages           (TextureImageChunk * const value   );
    void assignTextureImages          (const MFUnrecTextureImageChunkPtr &value);
    void removeFromTextureImages (UInt32               uiIndex );
    void removeObjFromTextureImages(TextureImageChunk * const value   );
    void clearTextureImages            (void                         );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual SizeT  getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  ComputeShaderAlgorithmTransitPtr  create          (void);
    static  ComputeShaderAlgorithm           *createEmpty     (void);

    static  ComputeShaderAlgorithmTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  ComputeShaderAlgorithm            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  ComputeShaderAlgorithmTransitPtr  createDependent  (BitVector bFlags);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;
    virtual FieldContainerTransitPtr shallowCopyDependent(
                                                      BitVector bFlags) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    MFUnrecTextureImageChunkPtr _mfTextureImages;
    SFUnrecComputeShaderChunkPtr _sfComputeShader;
    SFVec3i           _sfDispatchConfig;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ComputeShaderAlgorithmBase(void);
    ComputeShaderAlgorithmBase(const ComputeShaderAlgorithmBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ComputeShaderAlgorithmBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const ComputeShaderAlgorithm *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleTextureImages   (void) const;
    EditFieldHandlePtr editHandleTextureImages  (void);
    GetFieldHandlePtr  getHandleComputeShader   (void) const;
    EditFieldHandlePtr editHandleComputeShader  (void);
    GetFieldHandlePtr  getHandleDispatchConfig  (void) const;
    EditFieldHandlePtr editHandleDispatchConfig (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      ComputeShaderAlgorithmBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainer *createAspectCopy(
                                    const FieldContainer *pRefAspect) const;
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
    /*---------------------------------------------------------------------*/

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const ComputeShaderAlgorithmBase &source);
};

typedef ComputeShaderAlgorithmBase *ComputeShaderAlgorithmBaseP;

OSG_END_NAMESPACE

#endif /* _OSGCOMPUTESHADERALGORITHMBASE_H_ */
