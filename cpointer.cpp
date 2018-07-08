#include <iostream>

int main()
{
  using namespace std;

  char carry[] = "Hello";
  const char* cp1 = "World";
  char* cp2 = carry;

  cout << cp2 << cp1 << endl;
  *cp2 = 'h';
  cout << cp2 << cp1 << endl;
  *cp1 = 'w';
  cout << cp2 << cp1 << endl;

  return 0;
}
