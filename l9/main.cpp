#include <iostream>
#include "PhoneBook.hpp"

int main()
{
  PhoneBook *pb[4];

  pb[0] = new PhoneBook("sakamoto",1234);
  pb[1] = new PhoneBook("nakamura",2345);
  pb[2] = new PhoneBook("kishimoto",4567);
  pb[3] = new PhoneBook("maeda",5678);

  for(int i=0;i<4;i++){
    std::cout << *pb[i] << std::endl;
  }

  return 0;
}
