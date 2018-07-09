#include "LineNew.hpp"

LineNew::LineNew(int plength):Line(plength)
{
  std::cout << "Initialize: LineNew length = " << m_length << std::endl;
}

void LineNew::draw(std::ostream &os)
{
  Line::draw(os);
  os << std::endl;

  return;
}
