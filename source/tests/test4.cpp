// Copyright (C) 2008-2011 by Vincent Falco, All rights reserved worldwide.
// This file is released under the MIT License:
// http://www.opensource.org/licenses/mit-license.php

//
// This file is used for detecting compile problems.
//
//
// Checks to make sure the public header compiles without Boost.
//

#define VF_HAVE_BOOST 0

#include "vf/vf.h"

// Hides a linker warning
namespace { void dummmy () { } }
