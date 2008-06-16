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


#ifndef _OSGCSMWINDOWFIELDS_H_
#define _OSGCSMWINDOWFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribCSMDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class CSMWindow;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! CSMWindowPtr

OSG_GEN_CONTAINERPTR(CSMWindow);

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpContribCSMFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<CSMWindow *> :
    public FieldTraitsFCPtrBase<CSMWindow *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<CSMWindow *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBCSM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFCSMWindowPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFCSMWindowPtr"; }
};

template<> inline
const Char8 *FieldTraits<CSMWindow *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecCSMWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMWindow *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecCSMWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMWindow *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakCSMWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMWindow *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdCSMWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMWindow *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecCSMWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMWindow *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecCSMWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMWindow *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakCSMWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMWindow *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdCSMWindowPtr"; 
}

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<CSMWindowPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpContribCSMFieldSingle */

typedef PointerSField<CSMWindow *,
                      RecordedRefCountPolicy  > SFRecCSMWindowPtr;
typedef PointerSField<CSMWindow *,
                      UnrecordedRefCountPolicy> SFUnrecCSMWindowPtr;
typedef PointerSField<CSMWindow *,
                      WeakRefCountPolicy      > SFWeakCSMWindowPtr;
typedef PointerSField<CSMWindow *,
                      NoRefCountPolicy        > SFUncountedCSMWindowPtr;
#endif


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpContribCSMFieldMulti */

typedef PointerMField<CSMWindow *,
                      RecordedRefCountPolicy  > MFRecCSMWindowPtr;
typedef PointerMField<CSMWindow *,
                      UnrecordedRefCountPolicy> MFUnrecCSMWindowPtr;
typedef PointerMField<CSMWindow *,
                      WeakRefCountPolicy      > MFWeakCSMWindowPtr;
typedef PointerMField<CSMWindow *,
                      NoRefCountPolicy        > MFUncountedCSMWindowPtr;
#endif


OSG_END_NAMESPACE

#endif /* _OSGCSMWINDOWFIELDS_H_ */
