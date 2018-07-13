#include <string>
#include <cstdio>
#include <iostream>
#include <stdexcept>

int main()
{
  std::string hello("Hello, World!");

  std::cout << hello << std::endl;

  std::string::iterator p = hello.begin();
  while(p!=hello.end()){
    std::cout << *p++ << std::endl;
  }
  std::cout << "size= " << hello.size() << std::endl;

  try{
    std::cout << "12th element is " << hello.at(12) << std::endl;
  }
  catch(std::out_of_range){
    std::cout << "out_of_range caught" << std::endl;
  }

  hello = "How are you doing today?";
  std::cout << hello << std::endl;

  hello += "Tharada san";
  std::cout << hello << std::endl;

  std::cout << "offset to 'doing' is " << hello.find("doing") << std::endl;

  printf("%s\n",hello.c_str());

  return 0;
}
