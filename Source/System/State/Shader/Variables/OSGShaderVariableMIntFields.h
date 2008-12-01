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
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSHADERVARIABLEMINTFIELDS_H_
#define _OSGSHADERVARIABLEMINTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class ShaderVariableMInt;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! ShaderVariableMIntPtr

OSG_GEN_CONTAINERPTR(ShaderVariableMInt);

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpSystemFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<ShaderVariableMInt *> :
    public FieldTraitsFCPtrBase<ShaderVariableMInt *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ShaderVariableMInt *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFShaderVariableMIntPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFShaderVariableMIntPtr"; }
};

template<> inline
const Char8 *FieldTraits<ShaderVariableMInt *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecShaderVariableMIntPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableMInt *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecShaderVariableMIntPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableMInt *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakShaderVariableMIntPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableMInt *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdShaderVariableMIntPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableMInt *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecShaderVariableMIntPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableMInt *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecShaderVariableMIntPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableMInt *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakShaderVariableMIntPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableMInt *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdShaderVariableMIntPtr"; 
}

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<ShaderVariableMIntPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpSystemFieldSingle */

typedef PointerSField<ShaderVariableMInt *,
                      RecordedRefCountPolicy  > SFRecShaderVariableMIntPtr;
typedef PointerSField<ShaderVariableMInt *,
                      UnrecordedRefCountPolicy> SFUnrecShaderVariableMIntPtr;
typedef PointerSField<ShaderVariableMInt *,
                      WeakRefCountPolicy      > SFWeakShaderVariableMIntPtr;
typedef PointerSField<ShaderVariableMInt *,
                      NoRefCountPolicy        > SFUncountedShaderVariableMIntPtr;
#endif


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpSystemFieldMulti */

typedef PointerMField<ShaderVariableMInt *,
                      RecordedRefCountPolicy  > MFRecShaderVariableMIntPtr;
typedef PointerMField<ShaderVariableMInt *,
                      UnrecordedRefCountPolicy> MFUnrecShaderVariableMIntPtr;
typedef PointerMField<ShaderVariableMInt *,
                      WeakRefCountPolicy      > MFWeakShaderVariableMIntPtr;
typedef PointerMField<ShaderVariableMInt *,
                      NoRefCountPolicy        > MFUncountedShaderVariableMIntPtr;
#endif


OSG_END_NAMESPACE

#endif /* _OSGSHADERVARIABLEMINTFIELDS_H_ */