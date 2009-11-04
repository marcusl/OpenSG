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


#ifndef _OSGGEOVECTORBUFFERPROPERTYFIELDS_H_
#define _OSGGEOVECTORBUFFERPROPERTYFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGDrawableDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class GeoVectorBufferProperty;

OSG_GEN_CONTAINERPTR(GeoVectorBufferProperty);

/*! \ingroup GrpDrawableFieldTraits
    \ingroup GrpLibOSGDrawable
 */
template <>
struct FieldTraits<GeoVectorBufferProperty *> :
    public FieldTraitsFCPtrBase<GeoVectorBufferProperty *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<GeoVectorBufferProperty *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_DRAWABLE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFGeoVectorBufferPropertyPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFGeoVectorBufferPropertyPtr"; }
};

template<> inline
const Char8 *FieldTraits<GeoVectorBufferProperty *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecGeoVectorBufferPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorBufferProperty *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecGeoVectorBufferPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorBufferProperty *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakGeoVectorBufferPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorBufferProperty *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdGeoVectorBufferPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorBufferProperty *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecGeoVectorBufferPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorBufferProperty *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecGeoVectorBufferPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorBufferProperty *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakGeoVectorBufferPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorBufferProperty *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdGeoVectorBufferPropertyPtr"; 
}


/*! \ingroup GrpDrawableFieldTraits
 */
template <>
struct FieldTraits<GeoVectorBufferProperty *, 1> :
    public FieldTraitsFCPtrBase<GeoVectorBufferProperty *, 1>
{
  private:

  public:
    typedef FieldTraits<GeoVectorBufferProperty *, 1>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_DRAWABLE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);
};

template<> inline
const Char8 *FieldTraits<GeoVectorBufferProperty *, 1>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecChildGeoVectorBufferPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorBufferProperty *, 1>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecChildGeoVectorBufferPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorBufferProperty *, 1>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakChildGeoVectorBufferPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorBufferProperty *, 1>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdChildGeoVectorBufferPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorBufferProperty *, 1>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecChildGeoVectorBufferPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorBufferProperty *, 1>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecChildGeoVectorBufferPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorBufferProperty *, 1>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakChildGeoVectorBufferPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorBufferProperty *, 1>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdChildGeoVectorBufferPropertyPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpDrawableFieldSFields */
typedef PointerSField<GeoVectorBufferProperty *,
                      RecordedRefCountPolicy  > SFRecGeoVectorBufferPropertyPtr;
/*! \ingroup GrpDrawableFieldSFields */
typedef PointerSField<GeoVectorBufferProperty *,
                      UnrecordedRefCountPolicy> SFUnrecGeoVectorBufferPropertyPtr;
/*! \ingroup GrpDrawableFieldSFields */
typedef PointerSField<GeoVectorBufferProperty *,
                      WeakRefCountPolicy      > SFWeakGeoVectorBufferPropertyPtr;
/*! \ingroup GrpDrawableFieldSFields */
typedef PointerSField<GeoVectorBufferProperty *,
                      NoRefCountPolicy        > SFUncountedGeoVectorBufferPropertyPtr;


/*! \ingroup GrpDrawableFieldMFields */
typedef PointerMField<GeoVectorBufferProperty *,
                      RecordedRefCountPolicy  > MFRecGeoVectorBufferPropertyPtr;
/*! \ingroup GrpDrawableFieldMFields */
typedef PointerMField<GeoVectorBufferProperty *,
                      UnrecordedRefCountPolicy> MFUnrecGeoVectorBufferPropertyPtr;
/*! \ingroup GrpDrawableFieldMFields */
typedef PointerMField<GeoVectorBufferProperty *,
                      WeakRefCountPolicy      > MFWeakGeoVectorBufferPropertyPtr;
/*! \ingroup GrpDrawableFieldMFields */
typedef PointerMField<GeoVectorBufferProperty *,
                      NoRefCountPolicy        > MFUncountedGeoVectorBufferPropertyPtr;



/*! \ingroup GrpDrawableFieldSFields */
typedef ChildPointerSField<
          GeoVectorBufferProperty *, 
          UnrecordedRefCountPolicy,
          1             > SFUnrecChildGeoVectorBufferPropertyPtr;


/*! \ingroup GrpDrawableFieldMFields */
typedef ChildPointerMField<
          GeoVectorBufferProperty *, 
          UnrecordedRefCountPolicy,
          1             > MFUnrecChildGeoVectorBufferPropertyPtr;



#else // these are the doxygen hacks

/*! \ingroup GrpDrawableFieldSFields \ingroup GrpLibOSGDrawable */
struct SFRecGeoVectorBufferPropertyPtr : 
    public PointerSField<GeoVectorBufferProperty *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpDrawableFieldSFields \ingroup GrpLibOSGDrawable */
struct SFUnrecGeoVectorBufferPropertyPtr : 
    public PointerSField<GeoVectorBufferProperty *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDrawableFieldSFields \ingroup GrpLibOSGDrawable */
struct SFWeakGeoVectorBufferPropertyPtr :
    public PointerSField<GeoVectorBufferProperty *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpDrawableFieldSFields \ingroup GrpLibOSGDrawable */
struct SFUncountedGeoVectorBufferPropertyPtr :
    public PointerSField<GeoVectorBufferProperty *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpDrawableFieldMFields \ingroup GrpLibOSGDrawable */
struct MFRecGeoVectorBufferPropertyPtr :
    public PointerMField<GeoVectorBufferProperty *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpDrawableFieldMFields \ingroup GrpLibOSGDrawable */
struct MFUnrecGeoVectorBufferPropertyPtr :
    public PointerMField<GeoVectorBufferProperty *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDrawableFieldMFields \ingroup GrpLibOSGDrawable */
struct MFWeakGeoVectorBufferPropertyPtr :
    public PointerMField<GeoVectorBufferProperty *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpDrawableFieldMFields \ingroup GrpLibOSGDrawable */
struct MFUncountedGeoVectorBufferPropertyPtr :
    public PointerMField<GeoVectorBufferProperty *,
                         NoRefCountPolicy        > {};



/*! \ingroup GrpDrawableFieldSFields \ingroup GrpLibOSGDrawable */
struct SFUnrecChildGeoVectorBufferPropertyPtr :
    public ChildPointerSField<
        GeoVectorBufferProperty *, 
        UnrecordedRefCountPolicy,
        1             > {};


/*! \ingroup GrpDrawableFieldMFields \ingroup GrpLibOSGDrawable */
struct MFUnrecChildGeoVectorBufferPropertyPtr :
    public ChildPointerMField<
        GeoVectorBufferProperty *, 
        UnrecordedRefCountPolicy,
        1             > {};


#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGGEOVECTORBUFFERPROPERTYFIELDS_H_ */
