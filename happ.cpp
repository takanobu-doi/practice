#include "MyHistogram.hpp"
#include <iostream>

int main()
{
  using namespace std;

  MyHistogram *hp = new MyHistogram(100);

  hp->clear();
  for(int i=0;i<100;i++){
    hp->fill(double(i));
  }
  hp->dump(cout);

  delete hp;

  return 0;
}
