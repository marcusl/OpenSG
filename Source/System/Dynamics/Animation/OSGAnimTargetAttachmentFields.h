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


#ifndef _OSGANIMTARGETATTACHMENTFIELDS_H_
#define _OSGANIMTARGETATTACHMENTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGDynamicsDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class AnimTargetAttachment;

OSG_GEN_CONTAINERPTR(AnimTargetAttachment);
/*! \ingroup GrpDynamicsFieldTraits
    \ingroup GrpLibOSGDynamics
 */
template <>
struct FieldTraits<AnimTargetAttachment *, nsOSG> :
    public FieldTraitsFCPtrBase<AnimTargetAttachment *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<AnimTargetAttachment *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_DYNAMICS_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<AnimTargetAttachment *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecAnimTargetAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimTargetAttachment *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecAnimTargetAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimTargetAttachment *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakAnimTargetAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimTargetAttachment *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdAnimTargetAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimTargetAttachment *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecAnimTargetAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimTargetAttachment *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecAnimTargetAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimTargetAttachment *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakAnimTargetAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimTargetAttachment *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdAnimTargetAttachmentPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<AnimTargetAttachment *,
                      RecordedRefCountPolicy, nsOSG  > SFRecAnimTargetAttachmentPtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<AnimTargetAttachment *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecAnimTargetAttachmentPtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<AnimTargetAttachment *,
                      WeakRefCountPolicy, nsOSG      > SFWeakAnimTargetAttachmentPtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<AnimTargetAttachment *,
                      NoRefCountPolicy, nsOSG        > SFUncountedAnimTargetAttachmentPtr;


/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<AnimTargetAttachment *,
                      RecordedRefCountPolicy, nsOSG  > MFRecAnimTargetAttachmentPtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<AnimTargetAttachment *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecAnimTargetAttachmentPtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<AnimTargetAttachment *,
                      WeakRefCountPolicy, nsOSG      > MFWeakAnimTargetAttachmentPtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<AnimTargetAttachment *,
                      NoRefCountPolicy, nsOSG        > MFUncountedAnimTargetAttachmentPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFRecAnimTargetAttachmentPtr : 
    public PointerSField<AnimTargetAttachment *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFUnrecAnimTargetAttachmentPtr : 
    public PointerSField<AnimTargetAttachment *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFWeakAnimTargetAttachmentPtr :
    public PointerSField<AnimTargetAttachment *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFUncountedAnimTargetAttachmentPtr :
    public PointerSField<AnimTargetAttachment *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFRecAnimTargetAttachmentPtr :
    public PointerMField<AnimTargetAttachment *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFUnrecAnimTargetAttachmentPtr :
    public PointerMField<AnimTargetAttachment *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFWeakAnimTargetAttachmentPtr :
    public PointerMField<AnimTargetAttachment *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFUncountedAnimTargetAttachmentPtr :
    public PointerMField<AnimTargetAttachment *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGANIMTARGETATTACHMENTFIELDS_H_ */
