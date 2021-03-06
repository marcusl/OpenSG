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
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSTAGEDRAWABLEFIELDS_H_
#define _OSGSTAGEDRAWABLEFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGDrawableDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class StageDrawable;

OSG_GEN_CONTAINERPTR(StageDrawable);
/*! \ingroup GrpDrawablesStageFieldTraits
    \ingroup GrpLibOSGDrawable
 */
template <>
struct FieldTraits<StageDrawable *, nsOSG> :
    public FieldTraitsFCPtrBase<StageDrawable *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<StageDrawable *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_DRAWABLE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<StageDrawable *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecStageDrawablePtr"; 
}

template<> inline
const Char8 *FieldTraits<StageDrawable *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecStageDrawablePtr"; 
}

template<> inline
const Char8 *FieldTraits<StageDrawable *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakStageDrawablePtr"; 
}

template<> inline
const Char8 *FieldTraits<StageDrawable *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdStageDrawablePtr"; 
}

template<> inline
const Char8 *FieldTraits<StageDrawable *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecStageDrawablePtr"; 
}

template<> inline
const Char8 *FieldTraits<StageDrawable *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecStageDrawablePtr"; 
}

template<> inline
const Char8 *FieldTraits<StageDrawable *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakStageDrawablePtr"; 
}

template<> inline
const Char8 *FieldTraits<StageDrawable *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdStageDrawablePtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpDrawablesStageFieldSFields */
typedef PointerSField<StageDrawable *,
                      RecordedRefCountPolicy, nsOSG  > SFRecStageDrawablePtr;
/*! \ingroup GrpDrawablesStageFieldSFields */
typedef PointerSField<StageDrawable *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecStageDrawablePtr;
/*! \ingroup GrpDrawablesStageFieldSFields */
typedef PointerSField<StageDrawable *,
                      WeakRefCountPolicy, nsOSG      > SFWeakStageDrawablePtr;
/*! \ingroup GrpDrawablesStageFieldSFields */
typedef PointerSField<StageDrawable *,
                      NoRefCountPolicy, nsOSG        > SFUncountedStageDrawablePtr;


/*! \ingroup GrpDrawablesStageFieldMFields */
typedef PointerMField<StageDrawable *,
                      RecordedRefCountPolicy, nsOSG  > MFRecStageDrawablePtr;
/*! \ingroup GrpDrawablesStageFieldMFields */
typedef PointerMField<StageDrawable *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecStageDrawablePtr;
/*! \ingroup GrpDrawablesStageFieldMFields */
typedef PointerMField<StageDrawable *,
                      WeakRefCountPolicy, nsOSG      > MFWeakStageDrawablePtr;
/*! \ingroup GrpDrawablesStageFieldMFields */
typedef PointerMField<StageDrawable *,
                      NoRefCountPolicy, nsOSG        > MFUncountedStageDrawablePtr;




#else // these are the doxygen hacks

/*! \ingroup GrpDrawablesStageFieldSFields \ingroup GrpLibOSGDrawable */
struct SFRecStageDrawablePtr : 
    public PointerSField<StageDrawable *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpDrawablesStageFieldSFields \ingroup GrpLibOSGDrawable */
struct SFUnrecStageDrawablePtr : 
    public PointerSField<StageDrawable *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDrawablesStageFieldSFields \ingroup GrpLibOSGDrawable */
struct SFWeakStageDrawablePtr :
    public PointerSField<StageDrawable *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpDrawablesStageFieldSFields \ingroup GrpLibOSGDrawable */
struct SFUncountedStageDrawablePtr :
    public PointerSField<StageDrawable *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpDrawablesStageFieldMFields \ingroup GrpLibOSGDrawable */
struct MFRecStageDrawablePtr :
    public PointerMField<StageDrawable *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpDrawablesStageFieldMFields \ingroup GrpLibOSGDrawable */
struct MFUnrecStageDrawablePtr :
    public PointerMField<StageDrawable *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDrawablesStageFieldMFields \ingroup GrpLibOSGDrawable */
struct MFWeakStageDrawablePtr :
    public PointerMField<StageDrawable *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpDrawablesStageFieldMFields \ingroup GrpLibOSGDrawable */
struct MFUncountedStageDrawablePtr :
    public PointerMField<StageDrawable *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSTAGEDRAWABLEFIELDS_H_ */
