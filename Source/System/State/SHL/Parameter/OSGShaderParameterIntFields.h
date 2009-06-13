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


#ifndef _OSGSHADERPARAMETERINTFIELDS_H_
#define _OSGSHADERPARAMETERINTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGStateDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class ShaderParameterInt;

OSG_GEN_CONTAINERPTR(ShaderParameterInt);

/*! \ingroup GrpStateFieldTraits
    \ingroup GrpLibOSGState
 */
template <>
struct FieldTraits<ShaderParameterInt *> :
    public FieldTraitsFCPtrBase<ShaderParameterInt *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ShaderParameterInt *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_STATE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFShaderParameterIntPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFShaderParameterIntPtr"; }
};

template<> inline
const Char8 *FieldTraits<ShaderParameterInt *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecShaderParameterIntPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterInt *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecShaderParameterIntPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterInt *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakShaderParameterIntPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterInt *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdShaderParameterIntPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterInt *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecShaderParameterIntPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterInt *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecShaderParameterIntPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterInt *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakShaderParameterIntPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterInt *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdShaderParameterIntPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpStateFieldSFields */
typedef PointerSField<ShaderParameterInt *,
                      RecordedRefCountPolicy  > SFRecShaderParameterIntPtr;
/*! \ingroup GrpStateFieldSFields */
typedef PointerSField<ShaderParameterInt *,
                      UnrecordedRefCountPolicy> SFUnrecShaderParameterIntPtr;
/*! \ingroup GrpStateFieldSFields */
typedef PointerSField<ShaderParameterInt *,
                      WeakRefCountPolicy      > SFWeakShaderParameterIntPtr;
/*! \ingroup GrpStateFieldSFields */
typedef PointerSField<ShaderParameterInt *,
                      NoRefCountPolicy        > SFUncountedShaderParameterIntPtr;


/*! \ingroup GrpStateFieldMFields */
typedef PointerMField<ShaderParameterInt *,
                      RecordedRefCountPolicy  > MFRecShaderParameterIntPtr;
/*! \ingroup GrpStateFieldMFields */
typedef PointerMField<ShaderParameterInt *,
                      UnrecordedRefCountPolicy> MFUnrecShaderParameterIntPtr;
/*! \ingroup GrpStateFieldMFields */
typedef PointerMField<ShaderParameterInt *,
                      WeakRefCountPolicy      > MFWeakShaderParameterIntPtr;
/*! \ingroup GrpStateFieldMFields */
typedef PointerMField<ShaderParameterInt *,
                      NoRefCountPolicy        > MFUncountedShaderParameterIntPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpStateFieldSFields \ingroup GrpLibOSGState */
struct SFRecShaderParameterIntPtr : 
    public PointerSField<ShaderParameterInt *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpStateFieldSFields \ingroup GrpLibOSGState */
struct SFUnrecShaderParameterIntPtr : 
    public PointerSField<ShaderParameterInt *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpStateFieldSFields \ingroup GrpLibOSGState */
struct SFWeakShaderParameterIntPtr :
    public PointerSField<ShaderParameterInt *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpStateFieldSFields \ingroup GrpLibOSGState */
struct SFUncountedShaderParameterIntPtr :
    public PointerSField<ShaderParameterInt *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpStateFieldMFields \ingroup GrpLibOSGState */
struct MFRecShaderParameterIntPtr :
    public PointerMField<ShaderParameterInt *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpStateFieldMFields \ingroup GrpLibOSGState */
struct MFUnrecShaderParameterIntPtr :
    public PointerMField<ShaderParameterInt *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpStateFieldMFields \ingroup GrpLibOSGState */
struct MFWeakShaderParameterIntPtr :
    public PointerMField<ShaderParameterInt *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpStateFieldMFields \ingroup GrpLibOSGState */
struct MFUncountedShaderParameterIntPtr :
    public PointerMField<ShaderParameterInt *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSHADERPARAMETERINTFIELDS_H_ */
