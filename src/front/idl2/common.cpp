/*******************************************************************************
Copyright (C) 2016 OLogN Technologies AG

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License version 2 as
published by the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*******************************************************************************/

#include "common.h"

#include <sstream>

using namespace std;

ostream& Location::write(ostream& os) const
{
	if (fileName != 0) {
		os << "@" << fileName;
		if (lineNumber != 0)
			os << ":" << lineNumber;
	}

	return os;
}

std::string Location::toString() const
{
	stringstream ss;
	write(ss);

	return ss.str();
}