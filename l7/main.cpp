#include <iostream>
#include <stdlib.h>
#include "findMax.cpp"
#include "MyClass.hpp"

int main(int argc,char **argv)
{
  int iarray[100];
  double darray[100];
  MyClass oarray[100];

  unsigned int iseed = 0;

  if(argc>1){
    iseed = atoi(*++argv);
  }
  for(int i=0;i<100;i++){
    iarray[i] = rand_r(&iseed);
    darray[i] = (double)rand_r(&iseed);
    oarray[i] = rand_r(&iseed);
  }

  std::cout << findMax(iarray,100) << std::endl;
  std::cout << findMax(darray,100) << std::endl;
  MyClass omax = findMax(oarray,100);
  std::cout << omax.get() << std::endl;

  return 0;
}
