/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *             Copyright (C) 2000-2002 by the OpenSG Forum                   *
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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>
#include <OSGImage.h>
#include <OSGImageFileHandler.h>

#include "OSGFileGrabForeground.h"

OSG_USING_NAMESPACE

/*! \class osg::FileGrabForeground
    \ingroup GrpSystemWindowForegrounds
    
The FileGrabForeground is used for grabbing a frame or sequence of frames to
disk.  See \ref
PageSystemWindowForegroundGrabFile for a description.

The name of the file(s) grabbed to are defined by the _sfName Field, the
current frame number by _sfFrame. _sfIncrement can be used to automatically
increment the frame number after each image is written. The whole grabber can
be activated/deactivated using _sfActive.

*/

/*----------------------- constructors & destructors ----------------------*/

FileGrabForeground::FileGrabForeground(void) :
    Inherited()
{
}

FileGrabForeground::FileGrabForeground(const FileGrabForeground &source) :
    Inherited(source)
{
}

FileGrabForeground::~FileGrabForeground(void)
{
}

/*----------------------------- class specific ----------------------------*/

void FileGrabForeground::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);
}

void FileGrabForeground::changed(ConstFieldMaskArg whichField, UInt32 origin)
{
    Inherited::changed(whichField, origin);
}

void FileGrabForeground::dump(      UInt32    , 
                              const BitVector ) const
{
    SLOG << "Dump FileGrabForeground NI" << std::endl;
}


/*! Grab the image and write it to the file. The name needs to be set.
*/
    
void FileGrabForeground::draw(DrawEnv  *pEnv, 
                              Viewport *port)
{
    if(getActive() == false)
        return;
    
    if(getName().empty())
    {
        FWARNING(("FileGrabForeground::draw: no name ?!?\n"));
        return;
    }
    
    // do we have an image yet? If not, create one.
    if(getImage() == NullFC)
    {
            ImagePtr iPtr = Image::create();

            iPtr->set(Image::OSG_RGB_PF, 1);

            setImage(iPtr);
    }
    
    Inherited::draw(pEnv, port);
    
    Char8 *name = new Char8[getName().size() + 32]; // this is really 
                                                    // arbitrary... :(

    sprintf(name, getName().c_str(), getFrame());
        
    ImagePtr i = getImage();

    ImageFileHandler::the()->write(i, name);
    
    delete [] name;
    
    if(getIncrement() != false)
    {
        setFrame(getFrame() + 1);
    }   
}


/*-------------------------------------------------------------------------*/
/*                              cvs id's                                   */

#ifdef __sgi
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp[] = "@(#)$Id: $";
    static Char8 cvsid_hpp[] = OSGFILEGRABFOREGROUND_HEADER_CVSID;
    static Char8 cvsid_inl[] = OSGFILEGRABFOREGROUND_INLINE_CVSID;
}
