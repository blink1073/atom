/*-----------------------------------------------------------------------------
| Copyright (c) 2013, Nucleic Development Team.
|
| Distributed under the terms of the Modified BSD License.
|
| The full license is in the file COPYING.txt, distributed with this software.
|----------------------------------------------------------------------------*/
#pragma once
#include "pythonhelpers.h"
#include "catom.h"
#include "member.h"


PyObject*
EventBinder_New( Member* member, CAtom* atom );


int import_eventbinder();
