/* This is a template file for fcdEdit.
 * To create it from sample source,  cut'n'paste the source and apply the following
 * substitutions:
 * s|\|\\|g 
 * s|"|\"|g 
 * s|^|"| 
 * s|$|",|
 */

char *FCTemplate_h[]={
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
"#ifndef _OSG@!CLASSNAME!@_H_",
"#define _OSG@!CLASSNAME!@_H_",
"#ifdef __sgi",
"#pragma once",
"#endif",
"",
"#include \"OSG@!Classname!@Base.h\"",
"",
"OSG_BEGIN_NAMESPACE",
"",
"/*! \\brief @!Classname!@ class. See \\ref ",
"           Page@!Libname!@@!Classname!@ for a description.",
"*/",
"",
"@@if Library",
"class OSG_@!LIBNAME!@_DLLMAPPING @!Classname!@ : public @!Classname!@Base",
"@@else",
"class OSG_@!LIBNAME!@_DLLMAPPING @!Classname!@ : public @!Classname!@Base",
"@@endif",
"{",
"  protected:",
"",
"    /*==========================  PUBLIC  =================================*/",
"",
"  public:",
"",
"    typedef @!Classname!@Base Inherited;",
"    typedef @!Classname!@     Self;",
"",
"    typedef PointerBuilder<@!Classname!@>::ObjPtr           ObjPtr;",
"    typedef PointerBuilder<@!Classname!@>::ObjPtrConst      ObjPtrConst;",
"",
"    typedef PointerBuilder<@!Classname!@>::ObjConstPtr      ObjConstPtr;",
"    typedef PointerBuilder<@!Classname!@>::ObjConstPtrConst ObjConstPtrConst;",
"",
"    typedef PointerBuilder<@!Classname!@>::ObjPtrArg        ObjPtrArg;",
"    typedef PointerBuilder<@!Classname!@>::ObjPtrConstArg   ObjPtrConstArg;",
"",
"    /*---------------------------------------------------------------------*/",
"    /*! \\name                      Sync                                    */",
"    /*! \\{                                                                 */",
"",
"    virtual void changed(ConstFieldMaskArg whichField, ",
"                         UInt32            origin    );",
"",
"    /*! \\}                                                                 */",
"    /*---------------------------------------------------------------------*/",
"    /*! \\name                     Output                                   */",
"    /*! \\{                                                                 */",
"",
"    virtual void dump(      UInt32     uiIndent = 0, ",
"                      const BitVector  bvFlags  = 0) const;",
"",
"    /*! \\}                                                                 */",
"    /*=========================  PROTECTED  ===============================*/",
"",
"  protected:",
"",
"    // Variables should all be in @!Classname!@Base.",
"",
"    /*---------------------------------------------------------------------*/",
"    /*! \\name                  Constructors                                */",
"    /*! \\{                                                                 */",
"",
"    @!Classname!@(void);",
"    @!Classname!@(const @!Classname!@ &source);",
"",
"    /*! \\}                                                                 */",
"    /*---------------------------------------------------------------------*/",
"    /*! \\name                   Destructors                                */",
"    /*! \\{                                                                 */",
"",
"    virtual ~@!Classname!@(void); ",
"",
"    /*! \\}                                                                 */",
"    /*---------------------------------------------------------------------*/",
"    /*! \name                      Init                                    */",
"    /*! \{                                                                 */",
"",
"    static void initMethod(InitPhase ePhase);",
"",
"    /*! \}                                                                 */",
"    /*==========================  PRIVATE  ================================*/",
"",
"  private:",
"",
"    friend class @!Classname!@Base;",
"",
"    template<class ContainerFactoryT>",
"    friend struct CPtrConstructionFunctions;",
"",
"    template<class ContainerFactoryT>",
"    friend struct PtrConstructionFunctions;",
"",
"    // prohibit default functions (move to 'public' if you need one)",
"    void operator =(const @!Classname!@ &source);",
"};",
"",
"typedef @!Classname!@ *@!Classname!@P;",
"",
"typedef @!Classname!@::ObjPtr           @!Classname!@Ptr;",
"typedef @!Classname!@::ObjPtrConst      @!Classname!@PtrConst;",
"",
"typedef @!Classname!@::ObjConstPtr      @!Classname!@ConstPtr;",
"typedef @!Classname!@::ObjConstPtrConst @!Classname!@ConstPtrConst;",
"",
"typedef @!Classname!@::ObjPtrArg        @!Classname!@PtrArg;",
"typedef @!Classname!@::ObjPtrConstArg   @!Classname!@PtrConstArg;",
"",
"OSG_END_NAMESPACE",
"",
"#include \"OSG@!Classname!@Base.inl\"",
"#include \"OSG@!Classname!@.inl\"",
"",
"#define OSG@!CLASSNAME!@_HEADER_CVSID \"@(#)$Id: $\"",
"",
"#endif /* _OSG@!CLASSNAME!@_H_ */",
NULL };
