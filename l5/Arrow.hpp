#ifndef _ARROW_HPP_
#define _ARROW_HPP_

#include "Line.hpp"
#include <iostream>

class Arrow : public Line
{
public:
  Arrow(int plength);
  void draw(std::ostream &os);
};

#endif
