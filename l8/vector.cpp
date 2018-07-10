#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm>

int main()
{
  std::vector<const char*>names(4);
  names[0] = "sakamoto";
  names[1] = "kawagoe";
  names[2] = "ohmachi";
  names[3] = "fukunaga";

  for(int i=0;i<names.size();i++){
    std::cout << i << ": " << names[i] << std::endl;
  }

  std::cout << "size: " << names.size() << std::endl;

  names.resize(names.size()+1);
  try{
    names.at(4) = "takashima";
  }
  catch(std::out_of_range){
    std::cout << "out_of_range caught" << std::endl;
  }

  for(int i=0;i<names.size();i++){
    std::cout << i << ": " << names[i] << std::endl;
  }

  std::cout << "size: " << names.size() << std::endl;

  std::vector<const char*>::iterator q = std::find(names.begin(),names.end(),"fukunaga");
  if(q!=names.end()){
    std::cout << "Found: " << *q << std::endl;
  }else{
    std::cout << "Not found what you want." << std::endl;
  }
  
 return 0;
}
