#include <iostream>

int main()
{
  try{
    throw "Exception!";
  }
  catch(const char *s){
    std::cout << "Caught:" << s << std::endl;
  }

  return 0;
}
