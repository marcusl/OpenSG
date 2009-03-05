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


#ifndef _OSGLIGHTCHUNKFIELDS_H_
#define _OSGLIGHTCHUNKFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class LightChunk;

OSG_GEN_CONTAINERPTR(LightChunk);

/*! \ingroup GrpSystemStateFieldTraits
    \ingroup GrpLibOSGSystem
 */
template <>
struct FieldTraits<LightChunk *> :
    public FieldTraitsFCPtrBase<LightChunk *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<LightChunk *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFLightChunkPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFLightChunkPtr"; }
};

template<> inline
const Char8 *FieldTraits<LightChunk *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecLightChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<LightChunk *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecLightChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<LightChunk *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakLightChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<LightChunk *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdLightChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<LightChunk *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecLightChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<LightChunk *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecLightChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<LightChunk *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakLightChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<LightChunk *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdLightChunkPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<LightChunk *,
                      RecordedRefCountPolicy  > SFRecLightChunkPtr;
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<LightChunk *,
                      UnrecordedRefCountPolicy> SFUnrecLightChunkPtr;
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<LightChunk *,
                      WeakRefCountPolicy      > SFWeakLightChunkPtr;
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<LightChunk *,
                      NoRefCountPolicy        > SFUncountedLightChunkPtr;


/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<LightChunk *,
                      RecordedRefCountPolicy  > MFRecLightChunkPtr;
/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<LightChunk *,
                      UnrecordedRefCountPolicy> MFUnrecLightChunkPtr;
/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<LightChunk *,
                      WeakRefCountPolicy      > MFWeakLightChunkPtr;
/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<LightChunk *,
                      NoRefCountPolicy        > MFUncountedLightChunkPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFRecLightChunkPtr : 
    public PointerSField<LightChunk *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFUnrecLightChunkPtr : 
    public PointerSField<LightChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFWeakLightChunkPtr :
    public PointerSField<LightChunk *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFUncountedLightChunkPtr :
    public PointerSField<LightChunk *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFRecLightChunkPtr :
    public PointerMField<LightChunk *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFUnrecLightChunkPtr :
    public PointerMField<LightChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFWeakLightChunkPtr :
    public PointerMField<LightChunk *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFUncountedLightChunkPtr :
    public PointerMField<LightChunk *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGLIGHTCHUNKFIELDS_H_ */
