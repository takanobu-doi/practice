#include "Line.hpp"

Line::Line(int plength):m_length(plength)
{
  std::cout << "Initialize: Line length = " << m_length << std::endl;
}

void Line::draw(std::ostream &os)
{
  for(int i=0;i<m_length;i++){
    os << "-";
  }
  return;
}
