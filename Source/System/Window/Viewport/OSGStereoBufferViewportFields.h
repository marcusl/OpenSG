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


#ifndef _OSGSTEREOBUFFERVIEWPORTFIELDS_H_
#define _OSGSTEREOBUFFERVIEWPORTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGWindowDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class StereoBufferViewport;

OSG_GEN_CONTAINERPTR(StereoBufferViewport);
/*! \ingroup GrpWindowViewportFieldTraits
    \ingroup GrpLibOSGWindow
 */
template <>
struct FieldTraits<StereoBufferViewport *, nsOSG> :
    public FieldTraitsFCPtrBase<StereoBufferViewport *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<StereoBufferViewport *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_WINDOW_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<StereoBufferViewport *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecStereoBufferViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<StereoBufferViewport *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecStereoBufferViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<StereoBufferViewport *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakStereoBufferViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<StereoBufferViewport *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdStereoBufferViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<StereoBufferViewport *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecStereoBufferViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<StereoBufferViewport *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecStereoBufferViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<StereoBufferViewport *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakStereoBufferViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<StereoBufferViewport *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdStereoBufferViewportPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpWindowViewportFieldSFields */
typedef PointerSField<StereoBufferViewport *,
                      RecordedRefCountPolicy, nsOSG  > SFRecStereoBufferViewportPtr;
/*! \ingroup GrpWindowViewportFieldSFields */
typedef PointerSField<StereoBufferViewport *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecStereoBufferViewportPtr;
/*! \ingroup GrpWindowViewportFieldSFields */
typedef PointerSField<StereoBufferViewport *,
                      WeakRefCountPolicy, nsOSG      > SFWeakStereoBufferViewportPtr;
/*! \ingroup GrpWindowViewportFieldSFields */
typedef PointerSField<StereoBufferViewport *,
                      NoRefCountPolicy, nsOSG        > SFUncountedStereoBufferViewportPtr;


/*! \ingroup GrpWindowViewportFieldMFields */
typedef PointerMField<StereoBufferViewport *,
                      RecordedRefCountPolicy, nsOSG  > MFRecStereoBufferViewportPtr;
/*! \ingroup GrpWindowViewportFieldMFields */
typedef PointerMField<StereoBufferViewport *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecStereoBufferViewportPtr;
/*! \ingroup GrpWindowViewportFieldMFields */
typedef PointerMField<StereoBufferViewport *,
                      WeakRefCountPolicy, nsOSG      > MFWeakStereoBufferViewportPtr;
/*! \ingroup GrpWindowViewportFieldMFields */
typedef PointerMField<StereoBufferViewport *,
                      NoRefCountPolicy, nsOSG        > MFUncountedStereoBufferViewportPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpWindowViewportFieldSFields \ingroup GrpLibOSGWindow */
struct SFRecStereoBufferViewportPtr : 
    public PointerSField<StereoBufferViewport *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpWindowViewportFieldSFields \ingroup GrpLibOSGWindow */
struct SFUnrecStereoBufferViewportPtr : 
    public PointerSField<StereoBufferViewport *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpWindowViewportFieldSFields \ingroup GrpLibOSGWindow */
struct SFWeakStereoBufferViewportPtr :
    public PointerSField<StereoBufferViewport *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpWindowViewportFieldSFields \ingroup GrpLibOSGWindow */
struct SFUncountedStereoBufferViewportPtr :
    public PointerSField<StereoBufferViewport *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpWindowViewportFieldMFields \ingroup GrpLibOSGWindow */
struct MFRecStereoBufferViewportPtr :
    public PointerMField<StereoBufferViewport *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpWindowViewportFieldMFields \ingroup GrpLibOSGWindow */
struct MFUnrecStereoBufferViewportPtr :
    public PointerMField<StereoBufferViewport *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpWindowViewportFieldMFields \ingroup GrpLibOSGWindow */
struct MFWeakStereoBufferViewportPtr :
    public PointerMField<StereoBufferViewport *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpWindowViewportFieldMFields \ingroup GrpLibOSGWindow */
struct MFUncountedStereoBufferViewportPtr :
    public PointerMField<StereoBufferViewport *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSTEREOBUFFERVIEWPORTFIELDS_H_ */
