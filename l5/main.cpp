#include <iostream>
#include "LineNew.hpp"
#include "Line.hpp"
#include "Arrow.hpp"

int main()
{
  using namespace std;

  LineNew ln(40);
  Arrow a(40);

  ln.draw(cout);
  a.draw(cout);

  return 0;
}
