/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *                     Copyright 2000-2002 by OpenSG Forum                   *
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

OSG_BEGIN_NAMESPACE

/*------------------------------- size ----------------------------------*/

/*! Calculate the width of the viewport in Pixel.
 */ 

inline 
Int32 Viewport::calcPixelWidth(void) const
{
    return calcPixelRight() - calcPixelLeft() + 1;
}

/*! Calculate the height of the viewport in Pixel.
 */ 

inline 
Int32 Viewport::calcPixelHeight(void) const
{
    return calcPixelTop() - calcPixelBottom() + 1;
}

#ifdef OSG_1_COMPAT
inline 
Int32 Viewport::getPixelLeft(void) const
{
    return calcPixelLeft();
}

inline 
Int32 Viewport::getPixelRight(void) const
{
    return calcPixelRight();
}

inline 
Int32 Viewport::getPixelBottom(void) const
{
    return calcPixelBottom();
}

inline 
Int32 Viewport::getPixelTop(void) const
{
    return calcPixelTop();
}

inline 
Int32 Viewport::getPixelWidth(void) const
{
    return calcPixelWidth();
}

inline 
Int32 Viewport::getPixelHeight(void) const
{
    return calcPixelHeight();
}

inline 
bool Viewport::isFullWindow(void) const
{
    return calcIsFullWindow();
}


inline 
void Viewport::getNormalizedCoordinates(      Real32 &normX,
                                              Real32 &normY,
                                        const Int32   vpX  ,
                                        const Int32   vpY  ) const
{
    return calcNormalizedCoordinates(normX, normY, vpX, vpY);
}
#endif

/*---------------------------- properties ---------------------------------*/


OSG_END_NAMESPACE
