#include <iostream>
#include <vector>
#include <stdexcept>

int main()
{
  std::vector<const char*> names(4);
  names[0] = "sakamoto";
  names[1] = "kawagoe";
  names[2] = "ohmachi";
  names[3] = "fukunaga";
  std::vector<const char*>::iterator p = names.begin();

  int i = 0;
  while(p!=names.end()){
    std::cout << i++ << ": " << *p++ << std::endl;
  }
  std::cout << "size: " << names.size() << std::endl;

  names.resize(names.size()+1);
  try{
    names.at(4) = "takashima";
  }
  catch(std::out_of_range){
    std::cout << "out_of_range caght" << std::endl;
  }

  i = 0;
  p = names.begin();
  while(p!=names.end()){
    std::cout << i++ << ": " << *p++ << std::endl;
  }
  std::cout << "size: " << names.size() << std::endl;

  return 0;
}
