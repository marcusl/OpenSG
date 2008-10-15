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


#ifndef _OSGCOLORDISPLAYFILTERFIELDS_H_
#define _OSGCOLORDISPLAYFILTERFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGEffectGroupsDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class ColorDisplayFilter;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! ColorDisplayFilterPtr

OSG_GEN_CONTAINERPTR(ColorDisplayFilter);

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpEffectGroupsFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<ColorDisplayFilter *> :
    public FieldTraitsFCPtrBase<ColorDisplayFilter *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ColorDisplayFilter *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_EFFECTGROUPS_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFColorDisplayFilterPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFColorDisplayFilterPtr"; }
};

template<> inline
const Char8 *FieldTraits<ColorDisplayFilter *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecColorDisplayFilterPtr"; 
}

template<> inline
const Char8 *FieldTraits<ColorDisplayFilter *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecColorDisplayFilterPtr"; 
}

template<> inline
const Char8 *FieldTraits<ColorDisplayFilter *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakColorDisplayFilterPtr"; 
}

template<> inline
const Char8 *FieldTraits<ColorDisplayFilter *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdColorDisplayFilterPtr"; 
}

template<> inline
const Char8 *FieldTraits<ColorDisplayFilter *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecColorDisplayFilterPtr"; 
}

template<> inline
const Char8 *FieldTraits<ColorDisplayFilter *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecColorDisplayFilterPtr"; 
}

template<> inline
const Char8 *FieldTraits<ColorDisplayFilter *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakColorDisplayFilterPtr"; 
}

template<> inline
const Char8 *FieldTraits<ColorDisplayFilter *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdColorDisplayFilterPtr"; 
}

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<ColorDisplayFilterPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpEffectGroupsFieldSingle */

typedef PointerSField<ColorDisplayFilter *,
                      RecordedRefCountPolicy  > SFRecColorDisplayFilterPtr;
typedef PointerSField<ColorDisplayFilter *,
                      UnrecordedRefCountPolicy> SFUnrecColorDisplayFilterPtr;
typedef PointerSField<ColorDisplayFilter *,
                      WeakRefCountPolicy      > SFWeakColorDisplayFilterPtr;
typedef PointerSField<ColorDisplayFilter *,
                      NoRefCountPolicy        > SFUncountedColorDisplayFilterPtr;
#endif


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpEffectGroupsFieldMulti */

typedef PointerMField<ColorDisplayFilter *,
                      RecordedRefCountPolicy  > MFRecColorDisplayFilterPtr;
typedef PointerMField<ColorDisplayFilter *,
                      UnrecordedRefCountPolicy> MFUnrecColorDisplayFilterPtr;
typedef PointerMField<ColorDisplayFilter *,
                      WeakRefCountPolicy      > MFWeakColorDisplayFilterPtr;
typedef PointerMField<ColorDisplayFilter *,
                      NoRefCountPolicy        > MFUncountedColorDisplayFilterPtr;
#endif


OSG_END_NAMESPACE

#endif /* _OSGCOLORDISPLAYFILTERFIELDS_H_ */
