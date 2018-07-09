#include "Arrow.hpp"

Arrow::Arrow(int plength):Line(plength)
{
  std::cout << "Initialize: Arrow length = " << m_length << std::endl;
}

void Arrow::draw(std::ostream &os)
{
  Line::draw(os);
  os << ">" << std::endl;

  return;
}
