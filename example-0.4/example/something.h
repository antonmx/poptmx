/* Copyright 2002, 2010  Murray Cumming, Openismus GmbH
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef EXAMPLE_SOMETHING_H_
#define EXAMPLE_SOMETHING_H_

#include <example/sub/sub.h>

namespace example
{

class Something
{
public:
  Something();
  virtual ~Something();

  virtual void doSomething();

private:
  Sub m_Sub;
};

} //namespace

#endif // EXAMPLE_SOMETHING_H_
