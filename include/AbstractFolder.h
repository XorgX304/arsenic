/**
  * GreenPois0n Arsenic - AbstractFolder.h
  * Copyright (C) 2010 Chronic-Dev Team
  * Copyright (C) 2010 Joshua Hill
  *
  * This program is free software: you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation, either version 3 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 **/

#ifndef ABSTRACTFOLDER_H
#define ABSTRACTFOLDER_H

#include "AbstractFile.h"

namespace GP {

class String;

class AbstractFolder {
public:
	virtual ~AbstractFolder() { }
	virtual AbstractFile* openFile(String& filename) = 0;
};

}

#endif /* ABSTRACTFOLDER_H */
