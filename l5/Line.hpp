#ifndef _LINE_HPP_
#define _LINE_HPP_

#include <iostream>

class Line
{
public:
  void draw(std::ostream &os);
  Line(int plength);
protected:
  int m_length;
private:
};

#endif
