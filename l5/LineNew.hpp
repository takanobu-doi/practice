#ifndef _LINENEW_HPP_
#define _LINENEW_HPP_

#include <iostream>
#include "Line.hpp"

class LineNew:public Line
{
public:
  LineNew(int plength);
  void draw(std::ostream &os);
};

#endif
