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
 **     class ShaderValueVariable
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSHADERVALUEVARIABLEBASE_H_
#define _OSGSHADERVALUEVARIABLEBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGSystemDef.h"

//#include "OSGBaseTypes.h"

#include "OSGShaderVariable.h" // Parent

#include "OSGSysFields.h"               // VariableIdx type
#include "OSGFieldContainerFields.h"    // Parents type

#include "OSGShaderValueVariableFields.h"

OSG_BEGIN_NAMESPACE


class ShaderValueVariable;

//! \brief ShaderValueVariable Base Class.

class OSG_SYSTEM_DLLMAPPING ShaderValueVariableBase : public ShaderVariable
{
  public:

    typedef ShaderVariable Inherited;
    typedef ShaderVariable ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(ShaderValueVariable);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        VariableIdxFieldId = Inherited::NextFieldId,
        ParentsFieldId = VariableIdxFieldId + 1,
        ExeVariableIdxFieldId = ParentsFieldId + 1,
        ExeParentsFieldId = ExeVariableIdxFieldId + 1,
        NextFieldId = ExeParentsFieldId + 1
    };

    static const OSG::BitVector VariableIdxFieldMask =
        (TypeTraits<BitVector>::One << VariableIdxFieldId);
    static const OSG::BitVector ParentsFieldMask =
        (TypeTraits<BitVector>::One << ParentsFieldId);
    static const OSG::BitVector ExeVariableIdxFieldMask =
        (TypeTraits<BitVector>::One << ExeVariableIdxFieldId);
    static const OSG::BitVector ExeParentsFieldMask =
        (TypeTraits<BitVector>::One << ExeParentsFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef MFUInt16          MFVariableIdxType;
    typedef MFParentFieldContainerPtr MFParentsType;
    typedef MFUInt16          MFExeVariableIdxType;
    typedef MFParentFieldContainerPtr MFExeParentsType;

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
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual SizeT  getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    MFUInt16          _mfVariableIdx;
    MFParentFieldContainerPtr _mfParents;
    MFUInt16          _mfExeVariableIdx;
    MFParentFieldContainerPtr _mfExeParents;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ShaderValueVariableBase(void);
    ShaderValueVariableBase(const ShaderValueVariableBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ShaderValueVariableBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Parent linking                                               */
    /*! \{                                                                 */

    virtual bool linkParent  (FieldContainer * const pParent,
                              UInt16           const childFieldId,
                              UInt16           const parentFieldId);
    virtual bool unlinkParent(FieldContainer * const pParent,
                              UInt16           const parentFieldId);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleVariableIdx     (void) const;
    EditFieldHandlePtr editHandleVariableIdx    (void);
    GetFieldHandlePtr  getHandleParents         (void) const;
    EditFieldHandlePtr editHandleParents        (void);
    GetFieldHandlePtr  getHandleExeVariableIdx  (void) const;
    EditFieldHandlePtr editHandleExeVariableIdx (void);
    GetFieldHandlePtr  getHandleExeParents      (void) const;
    EditFieldHandlePtr editHandleExeParents     (void);

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

            void execSync (      ShaderValueVariableBase *pFrom,
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
    void operator =(const ShaderValueVariableBase &source);
};

typedef ShaderValueVariableBase *ShaderValueVariableBaseP;

OSG_END_NAMESPACE

#endif /* _OSGSHADERVALUEVARIABLEBASE_H_ */
