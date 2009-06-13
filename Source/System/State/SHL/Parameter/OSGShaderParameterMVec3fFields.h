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


#ifndef _OSGSHADERPARAMETERMVEC3FFIELDS_H_
#define _OSGSHADERPARAMETERMVEC3FFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGStateDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class ShaderParameterMVec3f;

OSG_GEN_CONTAINERPTR(ShaderParameterMVec3f);

/*! \ingroup GrpStateFieldTraits
    \ingroup GrpLibOSGState
 */
template <>
struct FieldTraits<ShaderParameterMVec3f *> :
    public FieldTraitsFCPtrBase<ShaderParameterMVec3f *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ShaderParameterMVec3f *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_STATE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFShaderParameterMVec3fPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFShaderParameterMVec3fPtr"; }
};

template<> inline
const Char8 *FieldTraits<ShaderParameterMVec3f *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecShaderParameterMVec3fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterMVec3f *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecShaderParameterMVec3fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterMVec3f *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakShaderParameterMVec3fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterMVec3f *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdShaderParameterMVec3fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterMVec3f *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecShaderParameterMVec3fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterMVec3f *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecShaderParameterMVec3fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterMVec3f *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakShaderParameterMVec3fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterMVec3f *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdShaderParameterMVec3fPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpStateFieldSFields */
typedef PointerSField<ShaderParameterMVec3f *,
                      RecordedRefCountPolicy  > SFRecShaderParameterMVec3fPtr;
/*! \ingroup GrpStateFieldSFields */
typedef PointerSField<ShaderParameterMVec3f *,
                      UnrecordedRefCountPolicy> SFUnrecShaderParameterMVec3fPtr;
/*! \ingroup GrpStateFieldSFields */
typedef PointerSField<ShaderParameterMVec3f *,
                      WeakRefCountPolicy      > SFWeakShaderParameterMVec3fPtr;
/*! \ingroup GrpStateFieldSFields */
typedef PointerSField<ShaderParameterMVec3f *,
                      NoRefCountPolicy        > SFUncountedShaderParameterMVec3fPtr;


/*! \ingroup GrpStateFieldMFields */
typedef PointerMField<ShaderParameterMVec3f *,
                      RecordedRefCountPolicy  > MFRecShaderParameterMVec3fPtr;
/*! \ingroup GrpStateFieldMFields */
typedef PointerMField<ShaderParameterMVec3f *,
                      UnrecordedRefCountPolicy> MFUnrecShaderParameterMVec3fPtr;
/*! \ingroup GrpStateFieldMFields */
typedef PointerMField<ShaderParameterMVec3f *,
                      WeakRefCountPolicy      > MFWeakShaderParameterMVec3fPtr;
/*! \ingroup GrpStateFieldMFields */
typedef PointerMField<ShaderParameterMVec3f *,
                      NoRefCountPolicy        > MFUncountedShaderParameterMVec3fPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpStateFieldSFields \ingroup GrpLibOSGState */
struct SFRecShaderParameterMVec3fPtr : 
    public PointerSField<ShaderParameterMVec3f *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpStateFieldSFields \ingroup GrpLibOSGState */
struct SFUnrecShaderParameterMVec3fPtr : 
    public PointerSField<ShaderParameterMVec3f *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpStateFieldSFields \ingroup GrpLibOSGState */
struct SFWeakShaderParameterMVec3fPtr :
    public PointerSField<ShaderParameterMVec3f *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpStateFieldSFields \ingroup GrpLibOSGState */
struct SFUncountedShaderParameterMVec3fPtr :
    public PointerSField<ShaderParameterMVec3f *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpStateFieldMFields \ingroup GrpLibOSGState */
struct MFRecShaderParameterMVec3fPtr :
    public PointerMField<ShaderParameterMVec3f *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpStateFieldMFields \ingroup GrpLibOSGState */
struct MFUnrecShaderParameterMVec3fPtr :
    public PointerMField<ShaderParameterMVec3f *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpStateFieldMFields \ingroup GrpLibOSGState */
struct MFWeakShaderParameterMVec3fPtr :
    public PointerMField<ShaderParameterMVec3f *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpStateFieldMFields \ingroup GrpLibOSGState */
struct MFUncountedShaderParameterMVec3fPtr :
    public PointerMField<ShaderParameterMVec3f *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSHADERPARAMETERMVEC3FFIELDS_H_ */
