/* This is a template file for fcdEdit.
 * To create it from sample source,  cut'n'paste the source and apply the following
 * substitutions:
 * s|\|\\|g 
 * s|"|\"|g 
 * s|^|"| 
 * s|$|",|
 */

char *FCPtrTemplate_h[]={
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
" *****************************************************************************",
"\\*****************************************************************************/",
"", 
"",
"#ifndef _OSG@!CLASSNAME!@FIELDS_H_",
"#define _OSG@!CLASSNAME!@FIELDS_H_",
"#ifdef __sgi",
"#pragma once",
"#endif",
"",
"#include \"@!HeaderPrefix!@OSGConfig.h\"",
"@@if Library",
"#include \"OSG@!Libname!@Def.h\"",
"@@endif",
"",
"#include \"@!ParentHeaderPrefix!@OSG@!Parent!@Fields.h\"",
"",
"#include \"@!HeaderPrefix!@OSGSFieldAdaptor.h\"",
"#include \"@!HeaderPrefix!@OSGMFieldAdaptor.h\"",
"",
"", 
"OSG_BEGIN_NAMESPACE",
"",
"class @!Classname!@;", 
"",
"#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles",
"//! @!Classname!@Ptr",
"",
"typedef PointerFwdBuilder<@!Parent!@Ptr, ",
"                          @!Parent!@ConstPtr,",
"                          @!Classname!@>::ObjPtr         @!Classname!@Ptr;",
"typedef PointerFwdBuilder<@!Parent!@Ptr, ",
"                          @!Parent!@ConstPtr,",
"                          @!Classname!@>::ObjPtrConst    @!Classname!@PtrConst;",
"typedef PointerFwdBuilder<@!Parent!@Ptr, ",
"                          @!Parent!@ConstPtr,",
"                          @!Classname!@>::ObjConstPtr    @!Classname!@ConstPtr;",
"typedef PointerFwdBuilder<@!Parent!@Ptr, ",
"                          @!Parent!@ConstPtr,",
"                          @!Classname!@>::ObjPtrArg      @!Classname!@PtrArg;",
"typedef PointerFwdBuilder<@!Parent!@Ptr, ",
"                          @!Parent!@ConstPtr,",
"                          @!Classname!@>::ObjConstPtrArg @!Classname!@ConstPtrArg;",
"typedef PointerFwdBuilder<@!Parent!@Ptr, ",
"                          @!Parent!@ConstPtr,",
"                          @!Classname!@>::ObjPtrConstArg @!Classname!@PtrConstArg;",
"",
"#endif",
"",
"#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)",
"@@if Library",
"/*! \\ingroup Grp@!Libname!@FieldTraits",
" */",
"@@endif",
"#if !defined(OSG_DOC_DEV_TRAITS)",
"/*! \\hideinhierarchy */",
"#endif",
"",
"template <>",
"struct FieldTraits<@!Classname!@Ptr> : ",
"    public FieldTraitsTemplateBase<@!Classname!@Ptr>",
"{",
"  private:",
"",
"    static DataType             _type;                       ",
"",
"  public:",
"",
"    typedef FieldTraits<@!Classname!@Ptr>  Self;",
"",
"    enum                        { StringConvertable = 0x00 };",
"@@if Pointerfield",
"",
"    static OSG_@!LIBNAME!@_DLLMAPPING ",
"                     DataType &getType (void);",
"",
"@@endif",
"@@if SFPointerfield",
"    static const char *getSName(void) { return \"SF@!Classname!@Ptr\"; }",
"@@endif",
"@@if MFPointerfield",
"    static const char *getMName(void) { return \"MF@!Classname!@Ptr\"; }",
"@@endif",
"};",
"",
"#if !defined(OSG_DOC_DEV_TRAITS)",
"/*! \\class  FieldTraitsTemplateBase<@!Classname!@Ptr, 0>",
"    \\hideinhierarchy",
" */",
"#endif",
"",
"#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)",
"",
"",
"@@if SFPointerfield",
"#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)",
"@@if Library",
"/*! \\ingroup Grp@!Libname!@FieldSingle */",
"",
"@@endif",
"typedef SFieldAdaptor<@!Classname!@Ptr, SFFieldContainerPtr> SF@!Classname!@Ptr;",
"#endif",
"",
"#ifndef OSG_COMPILE@!CLASSNAME!@INST",
"OSG_FIELD_DLLEXPORT_DECL1(SField, @!Classname!@Ptr, OSG_@!LIBNAME!@_DLLTMPLMAPPING)",
"#endif",
"@@endif",
"",
"@@if MFPointerfield",
"#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)",
"@@if Library",
"/*! \\ingroup Grp@!Libname!@FieldMulti */",
"",
"@@endif",
"typedef MFieldAdaptor<@!Classname!@Ptr, MFFieldContainerPtr> MF@!Classname!@Ptr;",
"#endif",
"",
"#ifndef OSG_COMPILE@!CLASSNAME!@INST",
"OSG_FIELD_DLLEXPORT_DECL1(MField, @!Classname!@Ptr, OSG_@!LIBNAME!@_DLLTMPLMAPPING)",
"#endif",
"",
"@@endif",
"OSG_END_NAMESPACE",
"",
"#define OSG@!CLASSNAME!@FIELDS_HEADER_CVSID \"@(#)$Id: $\"",
"", 
"#endif /* _OSG@!CLASSNAME!@FIELDS_H_ */",
NULL };
