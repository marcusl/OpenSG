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


#ifndef _OSGCSMQT4WINDOWFIELDS_H_
#define _OSGCSMQT4WINDOWFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribCSMQtDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class CSMQT4Window;

OSG_GEN_CONTAINERPTR(CSMQT4Window);
/*! \ingroup GrpContribCSMQtFieldTraits
    \ingroup GrpLibOSGContribCSMQt
 */
template <>
struct FieldTraits<CSMQT4Window *, nsOSG> :
    public FieldTraitsFCPtrBase<CSMQT4Window *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<CSMQT4Window *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBCSMQT_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<CSMQT4Window *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecCSMQT4WindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMQT4Window *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecCSMQT4WindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMQT4Window *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakCSMQT4WindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMQT4Window *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdCSMQT4WindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMQT4Window *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecCSMQT4WindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMQT4Window *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecCSMQT4WindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMQT4Window *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakCSMQT4WindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMQT4Window *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdCSMQT4WindowPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribCSMQtFieldSFields */
typedef PointerSField<CSMQT4Window *,
                      RecordedRefCountPolicy, nsOSG  > SFRecCSMQT4WindowPtr;
/*! \ingroup GrpContribCSMQtFieldSFields */
typedef PointerSField<CSMQT4Window *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecCSMQT4WindowPtr;
/*! \ingroup GrpContribCSMQtFieldSFields */
typedef PointerSField<CSMQT4Window *,
                      WeakRefCountPolicy, nsOSG      > SFWeakCSMQT4WindowPtr;
/*! \ingroup GrpContribCSMQtFieldSFields */
typedef PointerSField<CSMQT4Window *,
                      NoRefCountPolicy, nsOSG        > SFUncountedCSMQT4WindowPtr;


/*! \ingroup GrpContribCSMQtFieldMFields */
typedef PointerMField<CSMQT4Window *,
                      RecordedRefCountPolicy, nsOSG  > MFRecCSMQT4WindowPtr;
/*! \ingroup GrpContribCSMQtFieldMFields */
typedef PointerMField<CSMQT4Window *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecCSMQT4WindowPtr;
/*! \ingroup GrpContribCSMQtFieldMFields */
typedef PointerMField<CSMQT4Window *,
                      WeakRefCountPolicy, nsOSG      > MFWeakCSMQT4WindowPtr;
/*! \ingroup GrpContribCSMQtFieldMFields */
typedef PointerMField<CSMQT4Window *,
                      NoRefCountPolicy, nsOSG        > MFUncountedCSMQT4WindowPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribCSMQtFieldSFields \ingroup GrpLibOSGContribCSMQt */
struct SFRecCSMQT4WindowPtr : 
    public PointerSField<CSMQT4Window *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribCSMQtFieldSFields \ingroup GrpLibOSGContribCSMQt */
struct SFUnrecCSMQT4WindowPtr : 
    public PointerSField<CSMQT4Window *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribCSMQtFieldSFields \ingroup GrpLibOSGContribCSMQt */
struct SFWeakCSMQT4WindowPtr :
    public PointerSField<CSMQT4Window *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribCSMQtFieldSFields \ingroup GrpLibOSGContribCSMQt */
struct SFUncountedCSMQT4WindowPtr :
    public PointerSField<CSMQT4Window *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribCSMQtFieldMFields \ingroup GrpLibOSGContribCSMQt */
struct MFRecCSMQT4WindowPtr :
    public PointerMField<CSMQT4Window *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribCSMQtFieldMFields \ingroup GrpLibOSGContribCSMQt */
struct MFUnrecCSMQT4WindowPtr :
    public PointerMField<CSMQT4Window *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribCSMQtFieldMFields \ingroup GrpLibOSGContribCSMQt */
struct MFWeakCSMQT4WindowPtr :
    public PointerMField<CSMQT4Window *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribCSMQtFieldMFields \ingroup GrpLibOSGContribCSMQt */
struct MFUncountedCSMQT4WindowPtr :
    public PointerMField<CSMQT4Window *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGCSMQT4WINDOWFIELDS_H_ */