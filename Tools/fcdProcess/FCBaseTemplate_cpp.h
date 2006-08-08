/* This is a template file for fcdEdit.
 * To create it from sample source,  cut'n'paste the source and apply the following
 * substitutions:
 * s|\|\\|g 
 * s|"|\"|g 
 * s|^|"| 
 * s|$|",|
 */

char *FCBaseTemplate_cpp[]={
"/*---------------------------------------------------------------------------*\\",
" *                                OpenSG                                     *",
" *                                                                           *",
" *                                                                           *",
" *               Copyright (C) 2000-2006 by the OpenSG Forum                 *",
" *                                                                           *",
" *                            www.opensg.org                                 *",
" *                                                                           *",
" *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *",
" *                                                                           *",
"\\*---------------------------------------------------------------------------*/",
"/*---------------------------------------------------------------------------*\\",
" *                                License                                    *",
" *                                                                           *",
" * This library is free software; you can redistribute it and/or modify it   *",
" * under the terms of the GNU Library General Public License as published    *",
" * by the Free Software Foundation, version 2.                               *",
" *                                                                           *",
" * This library is distributed in the hope that it will be useful, but       *",
" * WITHOUT ANY WARRANTY; without even the implied warranty of                *",
" * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *",
" * Library General Public License for more details.                          *",
" *                                                                           *",
" * You should have received a copy of the GNU Library General Public         *",
" * License along with this library; if not, write to the Free Software       *",
" * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *",
" *                                                                           *",
"\\*---------------------------------------------------------------------------*/",
"/*---------------------------------------------------------------------------*\\",
" *                                Changes                                    *",
" *                                                                           *",
" *                                                                           *",
" *                                                                           *",
" *                                                                           *",
" *                                                                           *",
" *                                                                           *",
"\\*---------------------------------------------------------------------------*/",
"",
"/*****************************************************************************\\",
" *****************************************************************************",
" **                                                                         **",
" **                  This file is automatically generated.                  **",
" **                                                                         **",
" **          Any changes made to this file WILL be lost when it is          **",
" **           regenerated, which can become necessary at any time.          **",
" **                                                                         **",
" **     Do not change this file, changes should be done in the derived      **",
" **     class @!Classname!@!",
" **                                                                         **",
" *****************************************************************************",
"\\*****************************************************************************/",
"",
"",
"#define OSG_COMPILE@!CLASSNAME!@INST",
"",
"#include <stdlib.h>",
"#include <stdio.h>",
"",
"#include <@!HeaderPrefix!@OSGConfig.h>",
"",
""@@AdditionalIncludes@@",
"",
"@@BeginFieldLoop@@",
"@@if hasDefaultHeader", 
"#include @!FieldDefaultHeader:30!@   // @!Fieldname!@ default header",
"@@endif", 
"@@EndFieldLoop@@",
"",
"@@BeginFieldLoop@@",
"@@if isPtrField",
"@@if needClassInclude",
"#include <@!FieldClassInclude!@> // @!Fieldname!@ Class",
"@@endif",
"@@endif",
"@@EndFieldLoop@@",
"",
"#include \"OSG@!Classname!@Base.h\"",
"#include \"OSG@!Classname!@.h\"",
"",
"OSG_USING_NAMESPACE",
"",
"@@if hasFields", 
"// Field descriptions",
"",
"@@if Decorator",
"/*! \\var @!Parent!@Ptr @!Classname!@Base::_sfDecoratee",
"    The object being decorated",
"*/",
"@@else",
"@@BeginFieldLoop@@",
"/*! \\var @!Fieldtype:15!@ @!Classname!@Base::_@!fieldname!@",
"    @!Fielddescription!@",
"*/",
"@@EndFieldLoop@@",
"@@endif",
"",
"void @!Classname!@Base::classDescInserter(TypeObject &oType)",
"{",
"@@if hasFields", 
"    FieldDescriptionBase *pDesc = NULL; ",
"",
"@@endif",
"@@if Decorator",
"    pDesc = new SF@!Parent!@Ptr::Description(",
"        SF@!Parent!@Ptr::getClassType(), ",
"        \"decoratee\",",
"        DecorateeFieldId, DecorateeFieldMask,",
"        true,",
"        @!decorateeFieldFlags!@,",
"        static_cast     <FieldEditMethodSig>(&@!Classname!@Base::invalidEditField),",
"        reinterpret_cast<FieldGetMethodSig >(&@!Classname!@Base::getSFDecoratee));",
"",
"    oType.addInitialDesc(pDesc);",
"@@else",
"@@BeginFieldLoop@@",
"@@if CompatOneSix",
"@@if !isPtrField",
"",
"#ifdef OSG_1_COMPAT",
"    typedef const @!CARDINALITY!@@!CapsFieldtypeClean!@ *(@!Classname!@Base::*Get@!CARDINALITY!@@!Fieldname!@F)(void) const;",
"",
"    Get@!CARDINALITY!@@!Fieldname!@F Get@!CARDINALITY!@@!Fieldname!@ = &@!Classname!@Base::get@!CARDINALITY!@@!Fieldname!@;",
"#endif",
"@@endif",
"@@endif",
"",
"    pDesc = new @!CARDINALITY!@@!CapsFieldtypeClean!@::Description(",
"        @!CARDINALITY!@@!CapsFieldtypeClean!@::getClassType(), ",
"        \"@!fieldnameDesc!@\", ",
"        @!Fieldname!@FieldId, @!Fieldname!@FieldMask,",
"        @!fieldvisibility!@,",
"        @!fieldFlags!@,",
"@@if isPtrField",
"        static_cast     <FieldEditMethodSig>(&@!Classname!@Base::invalidEditField),",
"@@else",
"        reinterpret_cast<FieldEditMethodSig>(&@!Classname!@Base::edit@!CARDINALITY!@@!Fieldname!@),",
"@@endif",
"@@if !isPtrField",
"@@if CompatOneSix",
"#ifdef OSG_1_COMPAT",
"        reinterpret_cast<FieldGetMethodSig >(Get@!CARDINALITY!@@!Fieldname!@));",
"#else",
"        reinterpret_cast<FieldGetMethodSig >(&@!Classname!@Base::get@!CARDINALITY!@@!Fieldname!@));",
"#endif",
"@@else",
"        reinterpret_cast<FieldGetMethodSig >(&@!Classname!@Base::get@!CARDINALITY!@@!Fieldname!@));",
"@@endif",
"@@else",
"        reinterpret_cast<FieldGetMethodSig >(&@!Classname!@Base::get@!CARDINALITY!@@!Fieldname!@));",
"@@endif",
"",
"    oType.addInitialDesc(pDesc);",
"@@EndFieldLoop@@",
"@@endif",
"}",
"",
"@@endif", 
"",
"@!Classname!@Base::TypeObject @!Classname!@Base::_type(true,",
"    @!Classname!@Base::getClassname(),",
"    Inherited::getClassname(),",
"    \"@!Group!@\",",
"    @!Namespace!@,",
"@@if abstract", 
"    NULL, ", 
"@@else", 
"    (PrototypeCreateF) &@!Classname!@Base::createEmpty,",
"@@endif", 
"    @!Classname!@::initMethod,",
"@@if hasFields", 
"    (InitalInsertDescFunc) &@!Classname!@Base::classDescInserter,",
"@@else", 
"    NULL,", 
"@@endif", 
"    false);",
"",
"/*------------------------------ get -----------------------------------*/",
"",
"FieldContainerType &@!Classname!@Base::getType(void) ",
"{",
"    return _type; ",
"} ",
"",
"const FieldContainerType &@!Classname!@Base::getType(void) const ",
"{",
"    return _type;",
"} ",
"",
"UInt32 @!Classname!@Base::getContainerSize(void) const ",
"{ ",
"    return sizeof(@!Classname!@); ",
"}",
"",
"/*------------------------- decorator get ------------------------------*/",
"", 
"@@if Decorator",
"const SF@!Parent!@Ptr *@!Classname!@Base::getSFDecoratee(void) const",
"{",
"    return &_sfDecoratee;",
"}",
"",
"@@BeginFieldLoop@@",
"@@if isPtrField",
"//! Get the @!Classname!@::_@!fieldname!@ field.",
"const @!FieldNamespace!@@!CARDINALITY!@@!CapsFieldtypeClean!@ *@!Classname!@Base::get@!CARDINALITY!@@!Fieldname!@(void) const",
"{",
"    if(_sfDecoratee.getValue() != NullFC)",
"    {",
"        return getDecoratee()->get@!CARDINALITY!@@!Fieldname!@();",
"    }",
"    else",
"    {",
"        return NULL;",
"    }",
"}",
"@@else",
"@!FieldNamespace!@@!CARDINALITY!@@!CapsFieldtypeClean!@ *@!Classname!@Base::edit@!CARDINALITY!@@!Fieldname!@(void)",
"{",
"    if(_sfDecoratee.getValue() != NullFC)",
"    {",
"        return getDecoratee()->edit@!CARDINALITY!@@!Fieldname!@();",
"    }",
"    else",
"    {",
"        return NULL;",
"    }",
"}",
"",
"const @!FieldNamespace!@@!CARDINALITY!@@!CapsFieldtypeClean!@ *@!Classname!@Base::get@!CARDINALITY!@@!Fieldname!@(void) const",
"{",
"    if(_sfDecoratee.getValue() != NullFC)",
"    {",
"        return getDecoratee()->get@!CARDINALITY!@@!Fieldname!@();",
"    }",
"    else",
"    {",
"        return NULL;",
"    }",
"}",
"@@endif",
"",
"@@EndFieldLoop@@",
"@@endif",
"",
"@@if !Decorator",
"@@BeginFieldLoop@@",
"@@if isPtrField",
"//! Get the @!Classname!@::_@!fieldname!@ field.",
"const @!FieldNamespace!@@!CARDINALITY!@@!CapsFieldtypeClean!@ *@!Classname!@Base::get@!CARDINALITY!@@!Fieldname!@(void) const",
"{",
"    return &_@!fieldname!@;",
"}",
"@@else",
"@!FieldNamespace!@@!CARDINALITY!@@!CapsFieldtypeClean!@ *@!Classname!@Base::edit@!CARDINALITY!@@!Fieldname!@(void)",
"{",
"@@if isMField",
"    editMField(@!Fieldname!@FieldMask, _@!fieldname!@);",
"@@else",
"    editSField(@!Fieldname!@FieldMask);",
"@@endif",
"",
"    return &_@!fieldname!@;",
"}",
"",
"const @!FieldNamespace!@@!CARDINALITY!@@!CapsFieldtypeClean!@ *@!Classname!@Base::get@!CARDINALITY!@@!Fieldname!@(void) const",
"{",
"    return &_@!fieldname!@;",
"}",
"@@endif",
"",
"@@EndFieldLoop@@",
"@@endif",
"",
"@@if hasPtrFields"
"void @!Classname!@Base::pushToField(      FieldContainerPtrConstArg pNewElement,",
"                                    const UInt32                    uiFieldId  )",
"{",
"    Inherited::pushToField(pNewElement, uiFieldId);",
"",
"@@BeginFieldLoop@@",
"@@if isPtrField",
"@@if isSField",
"    if(uiFieldId == @!Fieldname!@FieldId)",
"    {",
"        static_cast<@!Classname!@ *>(this)->set@!Fieldname!@(",
"            cast_dynamic<@!Fieldtype!@>(pNewElement));",
"    }",
"@@else",
"    if(uiFieldId == @!Fieldname!@FieldId)",
"    {",
"        static_cast<@!Classname!@ *>(this)->@!pushToField!@(",
"            cast_dynamic<@!Fieldtype!@>(pNewElement));",
"    }",
"@@endif",
"@@endif",
"@@EndFieldLoop@@",
"}",
"",
"void @!Classname!@Base::insertIntoMField(const UInt32                    uiIndex,",
"                                               FieldContainerPtrConstArg pNewElement,",
"                                         const UInt32                    uiFieldId  )",
"{",
"    Inherited::insertIntoMField(uiIndex, pNewElement, uiFieldId);",
"",
"@@BeginMFFieldLoop@@",
"@@if isPtrField",
"    if(uiFieldId == @!Fieldname!@FieldId)",
"    {",
"        static_cast<@!Classname!@ *>(this)->@!insertIntoMField!@(",
"            uiIndex,",
"            cast_dynamic<@!Fieldtype!@>(pNewElement));",
"    }",
"@@endif",
"@@EndMFFieldLoop@@",
"}",
"",
"void @!Classname!@Base::replaceInMField (const UInt32                    uiIndex,",
"                                               FieldContainerPtrConstArg pNewElement,",
"                                         const UInt32                    uiFieldId)",
"{",
"    Inherited::replaceInMField(uiIndex, pNewElement, uiFieldId);",
"",
"@@BeginMFFieldLoop@@",
"@@if isPtrField",
"    if(uiFieldId == @!Fieldname!@FieldId)",
"    {",
"        static_cast<@!Classname!@ *>(this)->@!replaceInMFieldIndex!@(",
"            uiIndex,",
"            cast_dynamic<@!Fieldtype!@>(pNewElement));",
"    }",
"@@endif",
"@@EndMFFieldLoop@@",
"}",
"",
"void @!Classname!@Base::replaceInMField (      FieldContainerPtrConstArg pOldElement,",
"                                               FieldContainerPtrConstArg pNewElement,",
"                                         const UInt32                    uiFieldId  )",
"{",
"    Inherited::replaceInMField(pOldElement, pNewElement, uiFieldId);",
"",
"@@BeginMFFieldLoop@@",
"@@if isPtrField",
"    if(uiFieldId == @!Fieldname!@FieldId)",
"    {",
"        static_cast<@!Classname!@ *>(this)->@!replaceInMFieldObject!@(",
"            cast_dynamic<@!Fieldtype!@>(pOldElement),",
"            cast_dynamic<@!Fieldtype!@>(pNewElement));",
"    }",
"@@endif",
"@@EndMFFieldLoop@@",
"}",
"",
"void @!Classname!@Base::removeFromMField(const UInt32 uiIndex,",
"                                         const UInt32 uiFieldId)",
"{",
"    Inherited::removeFromMField(uiIndex, uiFieldId);",
"",
"@@BeginMFFieldLoop@@",
"@@if isPtrField",
"    if(uiFieldId == @!Fieldname!@FieldId)",
"    {",
"        static_cast<@!Classname!@ *>(this)->@!removeFromMFieldIndex!@(",
"            uiIndex);",
"    }",
"@@endif",
"@@EndMFFieldLoop@@",
"}",
"",
"void @!Classname!@Base::removeFromMField(      FieldContainerPtrConstArg pElement,",
"                                         const UInt32                    uiFieldId)",
"{",
"    Inherited::removeFromMField(pElement, uiFieldId);",
"",
"@@BeginMFFieldLoop@@",
"@@if isPtrField",
"    if(uiFieldId == @!Fieldname!@FieldId)",
"    {",
"        static_cast<@!Classname!@ *>(this)->@!removeFromMFieldObject!@(",
"            cast_dynamic<@!Fieldtype!@>(pElement));",
"    }",
"@@endif",
"@@EndMFFieldLoop@@",
"}",
"",
"void @!Classname!@Base::clearField(const UInt32 uiFieldId)",
"{",
"    Inherited::clearField(uiFieldId);",
"",
"@@BeginFieldLoop@@",
"@@if isPtrField",
"@@if isSField",
"    if(uiFieldId == @!Fieldname!@FieldId)",
"    {",
"        static_cast<@!Classname!@ *>(this)->set@!Fieldname!@(NullFC);",
"    }",
"@@else",
"    if(uiFieldId == @!Fieldname!@FieldId)",
"    {",
"        static_cast<@!Classname!@ *>(this)->@!clearField!@();",
"    }",
"@@endif",
"@@endif",
"@@EndFieldLoop@@",
"}",
"",
"@@BeginMFFieldLoop@@",
"@@if isPtrField",
"@@if writePushToField",
"void @!Classname!@Base::@!pushToField!@(@!Fieldtype!@ConstArg value)",
"{",
"@@if checkNilPtr",
"    if(value == NullFC)",
"        return;",
"",
"@@endif",
"    editMField(@!Fieldname!@FieldMask, _@!fieldname!@);",
"",
"    addRef(value);",
"",    
"    _mf@!Fieldname!@.push_back(value);",
"@@if !checkNilPtr",
"",
"    if(value == NullFC)",
"        return;",
"@@endif",
"@@if linkMParent",
"",
"    @!Classname!@Ptr thisP = Inherited::constructPtr<@!Classname!@>(",
"        static_cast<@!Classname!@ *>(this));",
"",
"    value->addParent(thisP, @!Fieldname!@FieldMask);",
"@@endif",
"@@if linkSParent",
"",
"    @!Classname!@Ptr thisP = Inherited::constructPtr<@!Classname!@>(",
"        static_cast<@!Classname!@ *>(this));",
"",
"    value->setParent(thisP, @!Fieldname!@FieldMask);",
"@@endif",
"}",
"",
"@@endif",
"@@if writeInsertIntoMField",
"void @!Classname!@Base::@!insertIntoMField!@(UInt32                uiIndex,",
"                                             @!Fieldtype!@ConstArg value   )",
"{",
"@@if checkNilPtr",
"    if(value == NullFC)",
"        return;",
"",
"@@endif",
"    editMField(@!Fieldname!@FieldMask, _@!fieldname!@);",
"",
"    MF@!CapsFieldtypeClean!@::iterator fieldIt = _mf@!Fieldname!@.begin();",
"",
"    addRef(value);",
"",
"    fieldIt += uiIndex;",
"",
"    _mf@!Fieldname!@.insert(fieldIt, value);",
"@@if !checkNilPtr",
"",
"    if(value == NullFC)",
"        return;",
"@@endif",
"@@if linkMParent",
"",
"    @!Classname!@Ptr thisP = Inherited::constructPtr<@!Classname!@>(",
"        static_cast<@!Classname!@ *>(this));",
"",
"    value->addParent(thisP, @!Fieldname!@FieldMask);",
"@@endif",
"@@if linkSParent",
"",
"    @!Classname!@Ptr thisP = Inherited::constructPtr<@!Classname!@>(",
"        static_cast<@!Classname!@ *>(this));",
"",
"    value->setParent(thisP, @!Fieldname!@FieldMask);",
"@@endif",
"}",
"",
"@@endif",
"@@if writeReplaceInMFieldIndex",
"void @!Classname!@Base::@!replaceInMFieldIndex!@(UInt32                uiIndex,",
"                                                 @!Fieldtype!@ConstArg value   )",
"{",
"@@if checkNilPtr",
"    if(value == NullFC)",
"        return;",
"",
"@@endif",
"    if(uiIndex >= _mf@!Fieldname!@.size())",
"        return;",
"",
"    editMField(@!Fieldname!@FieldMask, _@!fieldname!@);",
"",
"    addRef(value);",
"@@if linkMParent",
"",
"    @!Classname!@Ptr thisP = Inherited::constructPtr<@!Classname!@>(",
"        static_cast<@!Classname!@ *>(this));",
"",
"    if(_mf@!Fieldname!@[uiIndex] != NullFC)",
"    {",
"        _mf@!Fieldname!@[uiIndex]->subParent(thisP);",
"    }",
"@@endif",
"@@if linkSParent",
"",
"    @!Classname!@Ptr thisP = Inherited::constructPtr<@!Classname!@>(",
"        static_cast<@!Classname!@ *>(this));",
"",
"    if(_mf@!Fieldname!@[uiIndex] != NullFC)",
"    {",
"        _mf@!Fieldname!@[uiIndex]->setParent(thisP, @!Fieldname!@FieldMask);",
"    }",
"@@endif",
"",
"    subRef(_mf@!Fieldname!@[uiIndex]);",
"",
"    _mf@!Fieldname!@[uiIndex] = value;",
"@@if !checkNilPtr",
"",
"    if(value == NullFC)",
"        return;",
"@@endif",
"@@if linkMParent",
"",
"    value->addParent(thisP, @!Fieldname!@FieldMask);",
"@@endif",
"@@if linkSParent",
"",
"    value->setParent(thisP, @!Fieldname!@FieldMask);",
"@@endif",
"}",
"",
"@@endif",
"@@if writeReplaceInMFieldObject",
"void @!Classname!@Base::@!replaceInMFieldObject!@(@!Fieldtype!@ConstArg pOldElem,",
"                                                  @!Fieldtype!@ConstArg pNewElem)",
"{",
"@@if checkNilPtr",
"    if(pNewElem == NullFC)",
"        return;",
"",
"@@endif",
"    Int32  elemIdx = _mf@!Fieldname!@.findIndex(pOldElem);",
"",
"    if(elemIdx != -1)",
"    {",
"        editMField(@!Fieldname!@FieldMask, _@!fieldname!@);",
"",
"        MF@!CapsFieldtypeClean!@::iterator fieldIt = _mf@!Fieldname!@.begin();",
"",
"        fieldIt += elemIdx;",
"",
"@@if linkMParent",
"        @!Classname!@Ptr thisP = Inherited::constructPtr<@!Classname!@>(",
"            static_cast<@!Classname!@ *>(this));",
"",
"        if(pOldElem != NullFC)",
"        {",
"            pOldElem->subParent(thisP);",
"        }",
"",
"@@if !checkNilPtr",
"        if(pNewElem != NullFC)",
"        {",
"            pNewElem->addParent(thisP, @!Fieldname!@FieldMask);",
"        }",
"@@else",
"        pNewElem->addParent(thisP, @!Fieldname!@FieldMask);",
"@@endif",
"",
"@@endif",
"@@if linkSParent",
"        @!Classname!@Ptr thisP = Inherited::constructPtr<@!Classname!@>(",
"            static_cast<@!Classname!@ *>(this));",
"",
"        if(pOldElem != NullFC)",
"        {",
"            pOldElem->setParent(NullFC, @!Fieldname!@FieldMask);",
"        }",
"",
"        if(pNewElem != NullFC)",
"        {",
"            pNewElem->setParent(thisP, @!Fieldname!@FieldMask);",
"        }",
"",
"@@endif",
"        addRef(pNewElem);",
"        subRef(pOldElem);",
"",
"        (*fieldIt) = pNewElem;",
"    }",
"}",
"",
"@@endif",
"@@if writeRemoveFromMFieldIndex",
"void @!Classname!@Base::@!removeFromMFieldIndex!@(UInt32 uiIndex)",
"{",
"    if(uiIndex < _mf@!Fieldname!@.size())",
"    {",
"        editMField(@!Fieldname!@FieldMask, _@!fieldname!@);",
"",
"        MF@!CapsFieldtypeClean!@::iterator fieldIt = _mf@!Fieldname!@.begin();",
"",
"        fieldIt += uiIndex;",
"",
"@@if linkMParent",
"        @!Classname!@Ptr thisP = Inherited::constructPtr<@!Classname!@>(",
"            static_cast<@!Classname!@ *>(this));",
"",
"        if(*fieldIt != NullFC)",
"        {",
"            (*fieldIt)->subParent(thisP);",
"        }",
"",
"@@endif",
"@@if linkSParent",
"        if(*fieldIt != NullFC)",
"        {",
"            (*fieldIt)->setParent(NullFC, @!Fieldname!@FieldMask);",
"        }",
"",
"@@endif",
"        subRef(*fieldIt);",
"",
"@@if removeToSet",
"        *fieldIt = @!removeTo!@;",
"@@else",
"        _mf@!Fieldname!@.erase(fieldIt);",
"@@endif",
"    }",
"}",
"",
"@@endif",
"@@if writeRemoveFromMFieldObject",
"void @!Classname!@Base::@!removeFromMFieldObject!@(@!Fieldtype!@ConstArg value)",
"{",
"    Int32 iElemIdx = _mf@!Fieldname!@.findIndex(value);",
"",
"    if(iElemIdx != -1)",
"    {",
"        editMField(@!Fieldname!@FieldMask, _@!fieldname!@);",
"",
"        MF@!CapsFieldtypeClean!@::iterator fieldIt = _mf@!Fieldname!@.begin();",
"",
"        fieldIt += iElemIdx;",
"",
"@@if linkMParent",
"        @!Classname!@Ptr thisP = Inherited::constructPtr<@!Classname!@>(",
"            static_cast<@!Classname!@ *>(this));",
"",
"        if(*fieldIt != NullFC)",
"        {",
"            (*fieldIt)->subParent(thisP);",
"        }",
"",
"@@endif",
"@@if linkSParent",
"        if(*fieldIt != NullFC)",
"        {",
"            (*fieldIt)->setParent(NullFC, @!Fieldname!@FieldMask);",
"        }",
"",
"@@endif",
"        subRef(*fieldIt);",
"",
"@@if removeToSet",
"        *fieldIt = @!removeTo!@;",
"@@else",
"        _mf@!Fieldname!@.erase(fieldIt);",
"@@endif",
"    }",
"}",
"@@endif",
"@@if writeClearField",
"void @!Classname!@Base::@!clearField!@(void)",
"{",
"    editMField(@!Fieldname!@FieldMask, _@!fieldname!@);",
"",
"    MF@!CapsFieldtypeClean!@::iterator       fieldIt  = _mf@!Fieldname!@.begin();",
"    MF@!CapsFieldtypeClean!@::const_iterator fieldEnd = _mf@!Fieldname!@.end  ();",
"",
"    while(fieldIt != fieldEnd)",
"    {",
"@@if linkMParent",
"        @!Classname!@Ptr thisP = Inherited::constructPtr<@!Classname!@>(",
"            static_cast<@!Classname!@ *>(this));",
"",
"        if(*fieldIt != NullFC)",
"        {",
"            (*fieldIt)->subParent(thisP);",
"        }",
"",
"@@endif",
"@@if linkSParent",
"        if(*fieldIt != NullFC)",
"        {",
"            (*fieldIt)->setParent(NullFC, @!Fieldname!@FieldMask);",
"        }",
"",
"@@endif",
"        subRef(*fieldIt);",
"",
"@@if removeToSet",
"        *fieldIt = @!removeTo!@;",
"",
"@@endif",
"        ++fieldIt;",
"    }",
"@@if clearMField",
"",
"    _mf@!Fieldname!@.clear();",
"@@endif",
"}",
"@@endif", 
"@@endif",
"",
"@@EndMFFieldLoop@@",
"",
"@@endif"
"",
"/*------------------------------ access -----------------------------------*/",
"",
"UInt32 @!Classname!@Base::getBinSize(ConstFieldMaskArg whichField)",
"{",
"    UInt32 returnValue = Inherited::getBinSize(whichField);",
"",
"@@if Decorator",
"    if(FieldBits::NoField != (DecorateeFieldMask & whichField))",
"    {",
"        returnValue += _sfDecoratee.getBinSize();",
"    }",
"@@else",
"@@BeginFieldLoop@@",
"    if(FieldBits::NoField != (@!Fieldname!@FieldMask & whichField))",
"    {",
"        returnValue += _@!fieldname!@.getBinSize();",
"    }",
"@@EndFieldLoop@@",
"@@endif",
"",
"    return returnValue;",
"}",
"",
"void @!Classname!@Base::copyToBin(BinaryDataHandler &pMem,",
"                                  ConstFieldMaskArg  whichField)",
"{",
"    Inherited::copyToBin(pMem, whichField);",
"",
"@@if Decorator",
"    if(FieldBits::NoField != (DecorateeFieldMask & whichField))",
"    {",
"        _sfDecoratee.copyToBin(pMem);",
"    }",
"@@else",
"@@BeginFieldLoop@@",
"    if(FieldBits::NoField != (@!Fieldname!@FieldMask & whichField))",
"    {",
"        _@!fieldname!@.copyToBin(pMem);",
"    }",
"@@EndFieldLoop@@",
"@@endif",
"}",
"",
"void @!Classname!@Base::copyFromBin(BinaryDataHandler &pMem,",
"                                    ConstFieldMaskArg  whichField)",
"{",
"    Inherited::copyFromBin(pMem, whichField);",
"",
"@@if Decorator",
"    if(FieldBits::NoField != (DecorateeFieldMask & whichField))",
"    {",
"        _sfDecoratee.copyFromBin(pMem);",
"    }",
"@@else",
"@@BeginFieldLoop@@",
"    if(FieldBits::NoField != (@!Fieldname!@FieldMask & whichField))",
"    {",
"        _@!fieldname!@.copyFromBin(pMem);",
"    }",
"@@EndFieldLoop@@",
"@@endif",
"}",
"",
"@@if !Abstract",
"//! create an empty new instance of the class, do not copy the prototype",
"@!Classname!@Ptr @!Classname!@Base::createEmpty(void) ",
"{ ",
"    @!Classname!@Ptr returnValue; ",
"    ",
"    newPtr<@!Classname!@>(returnValue); ",
"",
"    return returnValue; ",
"}",
"",
"FieldContainerPtr @!Classname!@Base::shallowCopy(void) const ",
"{ ",
"    @!Classname!@Ptr returnValue; ",
"",
"    newPtr(returnValue, dynamic_cast<const @!Classname!@ *>(this)); ",
"",
"    return returnValue; ",
"}",
"",
"@@endif",
"",
"",
"/*------------------------- constructors ----------------------------------*/",
"",
"@!Classname!@Base::@!Classname!@Base(void) :",
"@@if !hasFields",
"    Inherited()",
"@@else",
"    Inherited(),",
"@@if Decorator",
"    _sfDecoratee()",
"@@else",
"@@BeginFieldLoop@@",
"    _@!fieldname:25!@(@!FieldTypedDefault!@)@!FieldSeparator!@",
"@@EndFieldLoop@@",
"@@endif",
"@@endif",
"{",
"}",
"",
"@!Classname!@Base::@!Classname!@Base(const @!Classname!@Base &source) :",
"@@if !hasFields",
"    Inherited(source)",
"@@else",
"    Inherited(source),",
"@@if Decorator",
"    _sfDecoratee(source._sfDecoratee)",
"@@else",
"@@BeginFieldLoop@@",
"@@if isPtrField",
"    _@!fieldname:25!@()@!FieldSeparator!@",
"@@else",
"    _@!fieldname:25!@(source._@!fieldname:25!@)@!FieldSeparator!@",
"@@endif",
"@@EndFieldLoop@@",
"@@endif",
"@@endif",
"{",
"}",
"",
"/*-------------------------- destructors ----------------------------------*/",
"",
"@!Classname!@Base::~@!Classname!@Base(void)",
"{",
"}",
"",
"@@if hasPtrFields",
"void @!Classname!@Base::onCreate(const @!Classname!@ *source)",
"{",
"    Inherited::onCreate(source);",
"",
"@@if hasPtrFields", 
"    if(source != NULL)",
"    {",
"@@endif",
"@@BeginFieldLoop@@",
"@@if isPtrField",
"@@if isMField",
"",
"        MF@!CapsFieldtypeClean!@::const_iterator @!Fieldname!@It  = ",
"            source->_mf@!Fieldname!@.begin();",
"        MF@!CapsFieldtypeClean!@::const_iterator @!Fieldname!@End = ",
"            source->_mf@!Fieldname!@.end  ();",
"",
"        while(@!Fieldname!@It != @!Fieldname!@End)",
"        {",
"            this->@!pushToField!@(*@!Fieldname!@It);",
"",
"            ++@!Fieldname!@It;",
"        }",
"@@else"
"",
"        this->set@!Fieldname!@(source->get@!Fieldname!@());",
"@@endif",
"@@endif",
"@@EndFieldLoop@@",
"@@if hasPtrFields", 
"    }",
"@@endif",
"}",
"@@endif",
"",
"#ifdef OSG_MT_FIELDCONTAINERPTR",
"void @!Classname!@Base::execSyncV(      FieldContainer    &oFrom,",
"                                        ConstFieldMaskArg  whichField,",
"                                        ConstFieldMaskArg  syncMode  ,",
"                                  const UInt32             uiSyncInfo,",
"                                        UInt32             uiCopyOffset)",
"{",
"    this->execSync(static_cast<@!Classname!@Base *>(&oFrom),",
"                   whichField, ",
"                   syncMode, ",
"                   uiSyncInfo,",
"                   uiCopyOffset);",
"}",
"#endif",
"",
"#ifdef OSG_MT_CPTR_ASPECT",
"void @!Classname!@Base::execSyncV(      FieldContainer    &oFrom,",
"                                        ConstFieldMaskArg  whichField,",
"                                        AspectOffsetStore &oOffsets,",
"                                        ConstFieldMaskArg  syncMode  ,",
"                                  const UInt32             uiSyncInfo)",
"{",
"    this->execSync(static_cast<@!Classname!@Base *>(&oFrom), ",
"                   whichField,",
"                   oOffsets,",
"                   syncMode,",
"                   uiSyncInfo);",
"}",
"#endif",
"",
"#if 0",
"void @!Classname!@Base::execBeginEditV(ConstFieldMaskArg whichField,",
"                                       UInt32            uiAspect,",
"                                       UInt32            uiContainerSize)",
"{",
"    this->execBeginEdit(whichField, uiAspect, uiContainerSize);",
"}",
"#endif",
"",
"@@if !abstract", 
"#ifdef OSG_MT_CPTR_ASPECT",
"FieldContainerPtr @!Classname!@Base::createAspectCopy(void) const",
"{",
"    @!Classname!@Ptr returnValue; ",
"",
"    newAspectCopy(returnValue, ",
"                  dynamic_cast<const @!Classname!@ *>(this)); ",
"",
"    return returnValue; ",
"}",
"#endif",
"@@endif",
"",
"void @!Classname!@Base::resolveLinks(void)",
"{",
"    Inherited::resolveLinks();",
"@@BeginSFFieldLoop@@",
"@@if isPtrField",
"",
"    static_cast<@!Classname!@ *>(this)->set@!Fieldname!@(NullFC);",
"@@endif",
"@@EndSFFieldLoop@@",
"@@BeginMFFieldLoop@@",
"@@if isPtrField",
"",
"    static_cast<@!Classname!@ *>(this)->@!clearField!@();",
"@@endif",
"@@EndMFFieldLoop@@",
"}",
"",
"@@if isDecoratable",
"/*------------------------------ get -----------------------------------*/",
"", 
"@@if !Decorator",
"@@BeginSFFieldLoop@@",
"@@if isPtrField",
"",
"//! Get the value of the @!Classname!@::_@!fieldname!@ field.",
"@!Fieldtype!@Const @!Classname!@Base::get@!Fieldname!@(void) const",
"{",
"    return _@!fieldname!@.getValue();",
"}",
"",
"//! Set the value of the @!Classname!@::_@!fieldname!@ field.",
"void @!Classname!@Base::set@!Fieldname!@(@!Fieldtype!@ConstArg value)",
"{",
"    editSField(@!Fieldname!@FieldMask);",
"",
"    setRefd(_@!fieldname!@.getValue(), value);",
"}",
"@@else",
"//! Get the value of the @!Classname!@::_@!fieldname!@ field.",
"",
"@!Fieldtype!@ &@!Classname!@Base::edit@!Fieldname!@(void)",
"{",
"    editSField(@!Fieldname!@FieldMask);",
"",
"    return _@!fieldname!@.getValue();",
"}",
"",
"//! Get the value of the @!Classname!@::_@!fieldname!@ field.",
"const @!Fieldtype!@ &@!Classname!@Base::get@!Fieldname!@(void) const",
"{",
"    return _@!fieldname!@.getValue();",
"}",
"",
"//! Set the value of the @!Classname!@::_@!fieldname!@ field.",
"void @!Classname!@Base::set@!Fieldname!@(const @!Fieldtype!@ &value)",
"{",
"    editSField(@!Fieldname!@FieldMask);",
"",
"    _@!fieldname!@.setValue(value);",
"}",
"@@endif",
"@@EndSFFieldLoop@@",
"",
"@@BeginMFFieldLoop@@",
"//! Get the value of the \\a index element the @!Classname!@::_@!fieldname!@ field.",
"@@if isPtrField",
"@!Fieldtype!@Const @!Classname!@Base::get@!Fieldname!@(const UInt32 index) const",
"@@else",
"const @!Fieldtype!@ &@!Classname!@Base::get@!Fieldname!@(const UInt32 index) const",
"@@endif",
"{",
"    return _@!fieldname!@[index];",
"}",
"@@if !isPtrField",
"",
"@!Fieldtype!@ &@!Classname!@Base::edit@!Fieldname!@(const UInt32 index)",
"{",
"    editMField(@!Fieldname!@FieldMask, _@!fieldname!@);",
"",
"    return _@!fieldname!@[index];",
"}",
"",
"//! Get the @!Classname!@::_@!fieldname!@ field.",
"@!FieldNamespace!@@!CARDINALITY!@@!CapsFieldtypeClean!@ &@!Classname!@Base::edit@!Fieldname!@(void)",
"{",
"    editMField(@!Fieldname!@FieldMask, _@!fieldname!@);",
"",
"    return _@!fieldname!@;",
"}",
"@@endif",
"",
"//! Get the @!Classname!@::_@!fieldname!@ field.",
"const @!FieldNamespace!@@!CARDINALITY!@@!CapsFieldtypeClean!@ &@!Classname!@Base::get@!Fieldname!@(void) const",
"{",
"    return _@!fieldname!@;",
"}",
"",
"@@EndMFFieldLoop@@",
"@@else",
"@@BeginSFFieldLoop@@",
"@@if isPtrField",
"",
"//! Get the value of the @!Classname!@::_@!fieldname!@ field.",
"@!Fieldtype!@Const @!Classname!@Base::get@!Fieldname!@(void) const",
"{",
"    if(_sfDecoratee.getValue() != NullFC)",
"    {",
"        return getDecoratee()->get@!Fieldname!@();",
"    }",
"    else",
"    {",
"        return Inherited::get@!Fieldname!@();",
"    }",
"}",
"",
"//! Set the value of the @!Classname!@::_@!fieldname!@ field.",
"void @!Classname!@Base::set@!Fieldname!@(@!Fieldtype!@ConstArg value)",
"{",
"    if(_sfDecoratee.getValue() != NullFC)",
"    {",
"        getDecoratee()->set@!Fieldname!@(value);",
"    }",
"    else",
"    {",
"//        Inherited::set@!Fieldname!@(value);",
"    }",
"}",
"@@else",
"",
"//! Get the value of the @!Classname!@::_@!fieldname!@ field.",
"@!Fieldtype!@ &@!Classname!@Base::edit@!Fieldname!@(void)",
"{",
"    if(_sfDecoratee.getValue() != NullFC)",
"    {",
"        return getDecoratee()->edit@!Fieldname!@();",
"    }",
"    else",
"    {",
"        return Inherited::edit@!Fieldname!@();",
"    }",
"}",
"",
"//! Get the value of the @!Classname!@::_@!fieldname!@ field.",
"const @!Fieldtype!@ &@!Classname!@Base::get@!Fieldname!@(void) const",
"{",
"    if(_sfDecoratee.getValue() != NullFC)",
"    {",
"        return getDecoratee()->get@!Fieldname!@();",
"    }",
"    else",
"    {",
"        return Inherited::get@!Fieldname!@();",
"    }",
"}",
"",
"//! Set the value of the @!Classname!@::_@!fieldname!@ field.",
"void @!Classname!@Base::set@!Fieldname!@(const @!Fieldtype!@ &value)",
"{",
"    if(_sfDecoratee.getValue() != NullFC)",
"    {",
"        getDecoratee()->set@!Fieldname!@(value);",
"    }",
"    else",
"    {",
"//        Inherited::set@!Fieldname!@(value);",
"    }",
"}",
"@@endif",
"@@EndSFFieldLoop@@",
"",
"@@BeginMFFieldLoop@@",
"//! Get the value of the \\a index element the @!Classname!@::_@!fieldname!@ field.",
"@@if isPtrField",
"@!Fieldtype!@Const @!Classname!@Base::get@!Fieldname!@(const UInt32 index) const",
"@@else",
"const @!Fieldtype!@ &@!Classname!@Base::get@!Fieldname!@(const UInt32 index) const",
"@@endif",
"{",
"    if(_sfDecoratee.getValue() != NullFC)",
"    {",
"        return getDecoratee()->get@!Fieldname!@(index);",
"    }",
"    else",
"    {",
"        return Inherited::get@!Fieldname!@(index);",
"    }",
"}",
"@@if !isPtrField",
"",
"@!Fieldtype!@ &@!Classname!@Base::edit@!Fieldname!@(const UInt32 index)",
"{",
"    if(_sfDecoratee.getValue() != NullFC)",
"    {",
"        return getDecoratee()->edit@!Fieldname!@(index);",
"    }",
"    else",
"    {",
"        return Inherited::edit@!Fieldname!@(index);",
"    }",
"}",
"",
"//! Get the @!Classname!@::_@!fieldname!@ field.",
"@!FieldNamespace!@@!CARDINALITY!@@!CapsFieldtypeClean!@ &@!Classname!@Base::edit@!Fieldname!@(void)",
"{",
"    if(_sfDecoratee.getValue() != NullFC)",
"    {",
"        return getDecoratee()->edit@!Fieldname!@();",
"    }",
"    else",
"    {",
"        return Inherited::edit@!Fieldname!@();",
"    }",
"}",
"@@endif",
"",
"//! Get the @!Classname!@::_@!fieldname!@ field.",
"const @!FieldNamespace!@@!CARDINALITY!@@!CapsFieldtypeClean!@ &@!Classname!@Base::get@!Fieldname!@(void) const",
"{",
"    if(_sfDecoratee.getValue() != NullFC)",
"    {",
"        return getDecoratee()->get@!Fieldname!@();",
"    }",
"    else",
"    {",
"        return Inherited::get@!Fieldname!@();",
"    }",
"}",
"",
"@@EndMFFieldLoop@@",
"@@endif",
"@@endif",
"@@if Pointerfield",
"",
"@@if SFPointerfield",
"#include \"@!HeaderPrefix!@OSGSField.ins\"",
"@@endif",
"@@if MFPointerfield",
"#include \"@!HeaderPrefix!@OSGMField.ins\"",
"@@endif"
"",
"#if defined(OSG_TMPL_STATIC_MEMBER_NEEDS_FUNCTION_INSTANTIATION) || \\",
"    defined(OSG_TMPL_STATIC_MEMBER_NEEDS_CLASS_INSTANTIATION   )",
"",
"@@if SFPointerfield",
"#include \"@!HeaderPrefix!@OSGSFieldFuncs.ins\"",
"@@endif",
"@@if MFPointerfield",
"#include \"@!HeaderPrefix!@OSGMFieldFuncs.ins\"",
"@@endif",
"#endif",
"@@endif",
"",
"OSG_BEGIN_NAMESPACE",
"",
"#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)",
"DataType FieldTraits<@!Classname!@Ptr>::_type(\"@!Classname!@Ptr\", \"@!Parent!@Ptr\");",
"#endif",
"",
"@@if Pointerfield",
"OSG_FIELDTRAITS_GETTYPE(@!Classname!@Ptr)",
"",
"@@if SFPointerfield",
"OSG_FIELD_DLLEXPORT_DEF1(SField, @!Classname!@Ptr);",
"@@endif",
"@@if MFPointerfield",
"OSG_FIELD_DLLEXPORT_DEF1(MField, @!Classname!@Ptr);",
"@@endif",
"@@endif",
"",
"OSG_END_NAMESPACE",
"",
"",
"/*------------------------------------------------------------------------*/",
"/*                              cvs id's                                  */",
"",
"#ifdef OSG_SGI_CC",
"#pragma set woff 1174",
"#endif",
"",
"#ifdef OSG_LINUX_ICC",
"#pragma warning( disable : 177 )",
"#endif",
"",
"namespace",
"{",
"    static Char8 cvsid_cpp       [] = \"@(#)$Id: $\";",
"    static Char8 cvsid_hpp       [] = OSG@!CLASSNAME!@BASE_HEADER_CVSID;",
"    static Char8 cvsid_inl       [] = OSG@!CLASSNAME!@BASE_INLINE_CVSID;",
"",
"    static Char8 cvsid_fields_hpp[] = OSG@!CLASSNAME!@FIELDS_HEADER_CVSID;",
"}",
NULL };
