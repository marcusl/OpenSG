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
 **     class Window
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGWINDOWBASE_H_
#define _OSGWINDOWBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGBaseTypes.h"

#include "OSGAttachmentContainer.h" // Parent

#include "OSGUInt16Fields.h" // Width type
#include "OSGUInt16Fields.h" // Height type
#include "OSGViewportFields.h" // Port type
#include "OSGBoolFields.h" // ResizePending type
#include "OSGUInt32Fields.h" // GlObjectEventCounter type
#include "OSGUInt32Fields.h" // GlObjectLastRefresh type
#include "OSGUInt32Fields.h" // GlObjectLastReinitialize type

#include "OSGWindowFields.h"

OSG_BEGIN_NAMESPACE

class Window;

//! \brief Window Base Class.

class OSG_SYSTEM_DLLMAPPING WindowBase : public AttachmentContainer
{
  public:

    typedef AttachmentContainer Inherited;
    typedef AttachmentContainer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    typedef PointerFwdBuilder<AttachmentContainerPtr, 
                              AttachmentContainerConstPtr, 
                              Window>::ObjPtr         ObjPtr;
    typedef PointerFwdBuilder<AttachmentContainerPtr, 
                              AttachmentContainerConstPtr, 
                              Window>::ObjPtrConst    ObjPtrConst;
    typedef PointerFwdBuilder<AttachmentContainerPtr, 
                              AttachmentContainerConstPtr,
                              Window>::ObjConstPtr    ObjConstPtr;
    typedef PointerFwdBuilder<AttachmentContainerPtr, 
                              AttachmentContainerConstPtr,
                              Window>::ObjPtrArg      ObjPtrArg;
    typedef PointerFwdBuilder<AttachmentContainerPtr, 
                              AttachmentContainerConstPtr,
                              Window>::ObjConstPtrArg ObjConstPtrArg;
    typedef PointerFwdBuilder<AttachmentContainerPtr, 
                              AttachmentContainerConstPtr,
                              Window>::ObjPtrConstArg ObjPtrConstArg;

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        WidthFieldId = Inherited::NextFieldId,
        HeightFieldId = WidthFieldId + 1,
        PortFieldId = HeightFieldId + 1,
        ResizePendingFieldId = PortFieldId + 1,
        GlObjectEventCounterFieldId = ResizePendingFieldId + 1,
        GlObjectLastRefreshFieldId = GlObjectEventCounterFieldId + 1,
        GlObjectLastReinitializeFieldId = GlObjectLastRefreshFieldId + 1,
        NextFieldId = GlObjectLastReinitializeFieldId + 1
    };

    static const OSG::BitVector WidthFieldMask = 
        (TypeTraits<BitVector>::One << WidthFieldId);
    static const OSG::BitVector HeightFieldMask = 
        (TypeTraits<BitVector>::One << HeightFieldId);
    static const OSG::BitVector PortFieldMask = 
        (TypeTraits<BitVector>::One << PortFieldId);
    static const OSG::BitVector ResizePendingFieldMask = 
        (TypeTraits<BitVector>::One << ResizePendingFieldId);
    static const OSG::BitVector GlObjectEventCounterFieldMask = 
        (TypeTraits<BitVector>::One << GlObjectEventCounterFieldId);
    static const OSG::BitVector GlObjectLastRefreshFieldMask = 
        (TypeTraits<BitVector>::One << GlObjectLastRefreshFieldId);
    static const OSG::BitVector GlObjectLastReinitializeFieldMask = 
        (TypeTraits<BitVector>::One << GlObjectLastReinitializeFieldId);
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
           SFUInt16 *getSFWidth(void);
#endif
           SFUInt16 *editSFWidth(void);
     const SFUInt16 *getSFWidth (void) const;

#ifdef OSG_1_COMPAT
           SFUInt16 *getSFHeight(void);
#endif
           SFUInt16 *editSFHeight(void);
     const SFUInt16 *getSFHeight (void) const;
     const MFViewportPtr *getMFPort (void) const;

#ifdef OSG_1_COMPAT
           SFBool *getSFResizePending(void);
#endif
           SFBool *editSFResizePending(void);
     const SFBool *getSFResizePending (void) const;


#ifdef OSG_1_COMPAT
           UInt16 &getWidth(void);
#endif
           UInt16 &editWidth(void);
     const UInt16 &getWidth (void) const;

#ifdef OSG_1_COMPAT
           UInt16 &getHeight(void);
#endif
           UInt16 &editHeight(void);
     const UInt16 &getHeight (void) const;

           ViewportPtrConst getPort(const UInt32 index) const;
     const MFViewportPtr &getPort(void) const;

#ifdef OSG_1_COMPAT
           bool &getResizePending(void);
#endif
           bool &editResizePending(void);
     const bool &getResizePending (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setWidth(const UInt16 &value);
     void setHeight(const UInt16 &value);
     void setResizePending(const bool &value);

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

    void addPort           (ViewportPtrConstArg value   );
    void insertPort      (UInt32                uiIndex,
                                    ViewportPtrConstArg value   );
    void replacePort  (UInt32                uiIndex,
                                    ViewportPtrConstArg value   );
    void replacePortyBy (ViewportPtrConstArg pOldElem,
                                    ViewportPtrConstArg pNewElem);
    void subPort (UInt32                uiIndex );
    void subPort(ViewportPtrConstArg value   );
    void clearPorts            (void                          );



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
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static void   classDescInserter(TypeObject &oType);
    static Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFUInt16 _sfWidth;
    SFUInt16 _sfHeight;
    MFViewportPtr _mfPort;
    SFBool _sfResizePending;
    SFUInt32 _sfGlObjectEventCounter;
    MFUInt32 _mfGlObjectLastRefresh;
    MFUInt32 _mfGlObjectLastReinitialize;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    WindowBase(void);
    WindowBase(const WindowBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~WindowBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const Window *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

           SFUInt32 *editSFGlObjectEventCounter(void);
     const SFUInt32 *getSFGlObjectEventCounter (void) const;
           MFUInt32 *editMFGlObjectLastRefresh(void);
     const MFUInt32 *getMFGlObjectLastRefresh (void) const;
           MFUInt32 *editMFGlObjectLastReinitialize(void);
     const MFUInt32 *getMFGlObjectLastReinitialize (void) const;


           UInt32 &editGlObjectEventCounter(void);
     const UInt32 &getGlObjectEventCounter(void) const;

           UInt32 &editGlObjectLastRefresh(const UInt32 index);
     const UInt32 &getGlObjectLastRefresh(const UInt32 index) const;
           MFUInt32 &editGlObjectLastRefresh(void);
     const MFUInt32 &getGlObjectLastRefresh(void) const;

           UInt32 &editGlObjectLastReinitialize(const UInt32 index);
     const UInt32 &getGlObjectLastReinitialize(const UInt32 index) const;
           MFUInt32 &editGlObjectLastReinitialize(void);
     const MFUInt32 &getGlObjectLastReinitialize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setGlObjectEventCounter(const UInt32 &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
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

            void execSync (      WindowBase *pFrom,
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

            void execSync (      WindowBase *pFrom,
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
    void operator =(const WindowBase &source);
};

typedef WindowBase *WindowBaseP;

typedef RefPtr<Window> WindowRefPtr;

typedef osgIF<
    WindowBase::isNodeCore,

    CoredNodePtr<Window>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::_IRet

        WindowNodePtr;

OSG_END_NAMESPACE

#define OSGWINDOWBASE_HEADER_CVSID "@(#)$Id: $"

#endif /* _OSGWINDOWBASE_H_ */
