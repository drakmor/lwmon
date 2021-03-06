//   astring.h
//
//   A String with quote mode
//
//   (C) Copyright 2010-2015 Fred Gleason <fredg@paravelsystems.com>
//
//   This program is free software; you can redistribute it and/or modify
//   it under the terms of the GNU General Public License version 2 as
//   published by the Free Software Foundation.
//
//   This program is distributed in the hope that it will be useful,
//   but WITHOUT ANY WARRANTY; without even the implied warranty of
//   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//   GNU General Public License for more details.
//
//   You should have received a copy of the GNU General Public
//   License along with this program; if not, write to the Free Software
//   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
//

#ifndef ASTRING_H
#define ASTRING_H

#include <QString>

class AString : public QString
{
 public:
  AString();
  AString(const AString &lhs);
  AString(const QString &lhs);  
  QStringList split(const QString &sep,const QString &esc="") const;
};


#endif  // ASTRING_H
