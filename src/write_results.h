

// Copyright 1992: Cornel Beffa and Roland Faeh
// Copyright 2013: Kashif Shaad and Diogo Costa
// Copyright 2019: Diogo Costa

// This program, FLUXOS, is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) aNCOLS later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#ifndef WRITE_RESULTSH_INCLUDED
#define WRITE_RESULTSH_INCLUDED

#include "GlobVar.h"

bool write_results(
    GlobVar& ds, 
    int print_tag, 
    unsigned int print_step, std::chrono::duration<double> elapsed_seconds);

#endif // !WRITE_RESULTSH_INCLUDED
