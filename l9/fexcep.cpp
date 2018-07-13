#include <iostream>
#include <fstream>

int main(int argc,char **argv)
{
  std::ifstream ifs;
  ifs.exceptions(std::ios_base::failbit|std::ios_base::eofbit);
  try{
    argv++;
    ifs.open(*argv);
  }
  catch(std::ios_base::failure){
    std::cout << "File open failure = " << *argv << std::endl;
    return 1;
  }

  try{
    while(1){
      char buf[256];
      ifs.getline(buf,256);
      std::cout << buf << std::endl;
    }
  }
  catch(std::ios_base::failure){
    return 0;
  }
  return 1;
}
