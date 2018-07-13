#include <iostream>
#include <fstream>

int main(int argc,char **argv)
{
  argv ++;
  std::ifstream ifs(*argv);
  if(ifs.fail()){
    std::cerr << "File open fialuer." << std::endl;
    return 1;
  }

  while(!ifs.eof()){
    char buf[256];
    ifs.getline(buf,256);
    std::cout << buf << std::endl;
  }

  return 0;
}
