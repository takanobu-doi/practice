#include <iostream>
#include <iomanip>

int main()
{
  int i =12345;
  double f =12345.6789;

  std::cout.width(10);
  std::cout << i << std::endl;

  std::cout.setf(std::ios_base::oct,std::ios_base::basefield);
  std::cout << i << std::endl;

  std::cout.setf(std::ios_base::hex,std::ios_base::basefield);
  std::cout << i << std::endl;

  std::cout.setf(std::ios_base::dec, std::ios_base::basefield);

  std::cout.setf(std::ios_base::scientific,std::ios_base::floatfield);
  std::cout << f << std::endl;

  std::cout.setf(std::ios_base::fixed,std::ios_base::floatfield);
  std::cout << f << std::endl;

  std::cout.setf(std::ios_base::scientific,std::ios_base::floatfield);
  std::cout.precision(8);
  std::cout.width(12);
  std::cout << f << std::endl;

  std::cout << std::setw(8) << i << std::endl;
  std::cout << "oct: " << std::oct << i
	    << " hex: " << std::hex << i
	    << " dec: " << std::dec << i << std::endl;
  std::cout << std::scientific << std::setprecision(8) << f << std::endl;

  return 0;
}
