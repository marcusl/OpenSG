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
 **     class AlgorithmStage!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &AlgorithmStageBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 AlgorithmStageBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 AlgorithmStageBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the AlgorithmStage::_sfAlgorithm field.
inline
AlgorithmPtrConst AlgorithmStageBase::getAlgorithm(void) const
{
    return _sfAlgorithm.getValue();
}

//! Set the value of the AlgorithmStage::_sfAlgorithm field.
inline
void AlgorithmStageBase::setAlgorithm(AlgorithmPtrConstArg value)
{
    editSField(AlgorithmFieldMask);

    setRefd(_sfAlgorithm.getValue(), value);

}
//! Get the value of the AlgorithmStage::_sfProjectionMode field.

inline
UInt32 &AlgorithmStageBase::editProjectionMode(void)
{
    editSField(ProjectionModeFieldMask);

    return _sfProjectionMode.getValue();
}

//! Get the value of the AlgorithmStage::_sfProjectionMode field.
inline
const UInt32 &AlgorithmStageBase::getProjectionMode(void) const
{
    return _sfProjectionMode.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
UInt32              &AlgorithmStageBase::getProjectionMode (void)
{
    return this->editProjectionMode ();
}
#endif

//! Set the value of the AlgorithmStage::_sfProjectionMode field.
inline
void AlgorithmStageBase::setProjectionMode(const UInt32 &value)
{
    editSField(ProjectionModeFieldMask);

    _sfProjectionMode.setValue(value);
}
//! Get the value of the AlgorithmStage::_sfCopyViewing field.

inline
bool &AlgorithmStageBase::editCopyViewing(void)
{
    editSField(CopyViewingFieldMask);

    return _sfCopyViewing.getValue();
}

//! Get the value of the AlgorithmStage::_sfCopyViewing field.
inline
const bool &AlgorithmStageBase::getCopyViewing(void) const
{
    return _sfCopyViewing.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
bool                &AlgorithmStageBase::getCopyViewing    (void)
{
    return this->editCopyViewing    ();
}
#endif

//! Set the value of the AlgorithmStage::_sfCopyViewing field.
inline
void AlgorithmStageBase::setCopyViewing(const bool &value)
{
    editSField(CopyViewingFieldMask);

    _sfCopyViewing.setValue(value);
}
//! Get the value of the AlgorithmStage::_sfProjectionMatrix field.

inline
Matrix &AlgorithmStageBase::editProjectionMatrix(void)
{
    editSField(ProjectionMatrixFieldMask);

    return _sfProjectionMatrix.getValue();
}

//! Get the value of the AlgorithmStage::_sfProjectionMatrix field.
inline
const Matrix &AlgorithmStageBase::getProjectionMatrix(void) const
{
    return _sfProjectionMatrix.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
Matrix              &AlgorithmStageBase::getProjectionMatrix(void)
{
    return this->editProjectionMatrix();
}
#endif

//! Set the value of the AlgorithmStage::_sfProjectionMatrix field.
inline
void AlgorithmStageBase::setProjectionMatrix(const Matrix &value)
{
    editSField(ProjectionMatrixFieldMask);

    _sfProjectionMatrix.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void AlgorithmStageBase::execSync (      AlgorithmStageBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (AlgorithmFieldMask & whichField))
        _sfAlgorithm.syncWith(pFrom->_sfAlgorithm);

    if(FieldBits::NoField != (ProjectionModeFieldMask & whichField))
        _sfProjectionMode.syncWith(pFrom->_sfProjectionMode);

    if(FieldBits::NoField != (CopyViewingFieldMask & whichField))
        _sfCopyViewing.syncWith(pFrom->_sfCopyViewing);

    if(FieldBits::NoField != (ProjectionMatrixFieldMask & whichField))
        _sfProjectionMatrix.syncWith(pFrom->_sfProjectionMatrix);
}
#endif


inline
Char8 *AlgorithmStageBase::getClassname(void)
{
    return "AlgorithmStage";
}
OSG_GEN_CONTAINERPTR(AlgorithmStage);

OSG_END_NAMESPACE

