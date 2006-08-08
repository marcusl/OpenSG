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
 **     class SimpleStatisticsForeground
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSIMPLESTATISTICSFOREGROUNDBASE_H_
#define _OSGSIMPLESTATISTICSFOREGROUNDBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGUtilDef.h"

#include "OSGBaseTypes.h"

#include "OSGStatisticsForeground.h" // Parent

#include "OSGStringFields.h" // Formats type
#include "OSGReal32Fields.h" // Size type
#include "OSGColor4fFields.h" // Color type

#include "OSGSimpleStatisticsForegroundFields.h"

OSG_BEGIN_NAMESPACE

class SimpleStatisticsForeground;

//! \brief SimpleStatisticsForeground Base Class.

class OSG_UTIL_DLLMAPPING SimpleStatisticsForegroundBase : public StatisticsForeground
{
  public:

    typedef StatisticsForeground Inherited;
    typedef StatisticsForeground ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    typedef PointerFwdBuilder<StatisticsForegroundPtr, 
                              StatisticsForegroundConstPtr, 
                              SimpleStatisticsForeground>::ObjPtr         ObjPtr;
    typedef PointerFwdBuilder<StatisticsForegroundPtr, 
                              StatisticsForegroundConstPtr, 
                              SimpleStatisticsForeground>::ObjPtrConst    ObjPtrConst;
    typedef PointerFwdBuilder<StatisticsForegroundPtr, 
                              StatisticsForegroundConstPtr,
                              SimpleStatisticsForeground>::ObjConstPtr    ObjConstPtr;
    typedef PointerFwdBuilder<StatisticsForegroundPtr, 
                              StatisticsForegroundConstPtr,
                              SimpleStatisticsForeground>::ObjPtrArg      ObjPtrArg;
    typedef PointerFwdBuilder<StatisticsForegroundPtr, 
                              StatisticsForegroundConstPtr,
                              SimpleStatisticsForeground>::ObjConstPtrArg ObjConstPtrArg;
    typedef PointerFwdBuilder<StatisticsForegroundPtr, 
                              StatisticsForegroundConstPtr,
                              SimpleStatisticsForeground>::ObjPtrConstArg ObjPtrConstArg;

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        FormatsFieldId = Inherited::NextFieldId,
        SizeFieldId = FormatsFieldId + 1,
        ColorFieldId = SizeFieldId + 1,
        NextFieldId = ColorFieldId + 1
    };

    static const OSG::BitVector FormatsFieldMask = 
        (TypeTraits<BitVector>::One << FormatsFieldId);
    static const OSG::BitVector SizeFieldMask = 
        (TypeTraits<BitVector>::One << SizeFieldId);
    static const OSG::BitVector ColorFieldMask = 
        (TypeTraits<BitVector>::One << ColorFieldId);
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
           MFString *getMFFormats(void);
#endif
           MFString *editMFFormats(void);
     const MFString *getMFFormats (void) const;

#ifdef OSG_1_COMPAT
           SFReal32 *getSFSize(void);
#endif
           SFReal32 *editSFSize(void);
     const SFReal32 *getSFSize (void) const;

#ifdef OSG_1_COMPAT
           SFColor4f *getSFColor(void);
#endif
           SFColor4f *editSFColor(void);
     const SFColor4f *getSFColor (void) const;


#ifdef OSG_1_COMPAT
           std::string &getFormats(const UInt32 index);
           MFString &getFormats(void);
#endif
           std::string &editFormats(const UInt32 index);
     const std::string &getFormats (const UInt32 index) const;
           MFString &editFormats(void);
     const MFString &getFormats(void) const;

#ifdef OSG_1_COMPAT
           Real32 &getSize(void);
#endif
           Real32 &editSize(void);
     const Real32 &getSize (void) const;

#ifdef OSG_1_COMPAT
           Color4f &getColor(void);
#endif
           Color4f &editColor(void);
     const Color4f &getColor (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setSize(const Real32 &value);
     void setColor(const Color4f &value);

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

    static  SimpleStatisticsForegroundPtr create     (void); 
    static  SimpleStatisticsForegroundPtr createEmpty(void); 

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

    MFString _mfFormats;
    SFReal32 _sfSize;
    SFColor4f _sfColor;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    SimpleStatisticsForegroundBase(void);
    SimpleStatisticsForegroundBase(const SimpleStatisticsForegroundBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~SimpleStatisticsForegroundBase(void); 

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

            void execSync (      SimpleStatisticsForegroundBase *pFrom,
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

            void execSync (      SimpleStatisticsForegroundBase *pFrom,
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
    void operator =(const SimpleStatisticsForegroundBase &source);
};

typedef SimpleStatisticsForegroundBase *SimpleStatisticsForegroundBaseP;

typedef RefPtr<SimpleStatisticsForeground> SimpleStatisticsForegroundRefPtr;

typedef osgIF<
    SimpleStatisticsForegroundBase::isNodeCore,

    CoredNodePtr<SimpleStatisticsForeground>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::_IRet

        SimpleStatisticsForegroundNodePtr;

OSG_END_NAMESPACE

#define OSGSIMPLESTATISTICSFOREGROUNDBASE_HEADER_CVSID "@(#)$Id: OSGSimpleStatisticsForegroundBase.h,v 1.1.2.3 2006/08/01 08:48:59 vossg Exp $"

#endif /* _OSGSIMPLESTATISTICSFOREGROUNDBASE_H_ */
