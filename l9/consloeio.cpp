#include <iostream>
#include <string>

int main()
{
  int l;
  std::cout << "Input a number: ";
  std::cin >> l;
  std::cout << l << std::endl;

  std::string s;
  std::cout << "Input a string: ";
  std::cin >> s;
  std::cout << s << std::endl;

  double d;
  std::cout << "Input an integer, a string and a floating number: ";
  std::cin >> l >> s >> d;
  std::cout << l << " : " << s << " : " << d << std::endl;

  double f = 123.45667;
  std::cout.setf(std::ios_base::scientific,std::ios_base::floatfield);
  std::cout.precision(8);
  std::cout.width(12);
  std::cout << f << std::endl;

 return 0;
}
