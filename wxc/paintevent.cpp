//-----------------------------------------------------------------------------
// wxD - paintevent.cpp
// (C) 2005 bero <berobero.sourceforge.net>
// based on
// wx.NET - paintevent.cxx
// 
// The wxPaintEvent proxy interface.
//
// Written by Alexander Olk (xenomorph2@onlinehome.de)
// (C) 2004 by Alexander Olk
// Licensed under the wxWidgets license, see LICENSE.txt for details.
//
// $Id$
//-----------------------------------------------------------------------------

#include <wx/wx.h>
#include "common.h"

//-----------------------------------------------------------------------------

extern "C" WXEXPORT
wxPaintEvent* wxPaintEvent_ctor(int Id)
{
    return new wxPaintEvent(Id);
}
