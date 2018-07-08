#include <iostream>

int main()
{
  using namespace std;

  int i = 5;
  int j = 3;

  cout << i << j << endl;
  cout << ( i << j ) << endl;

  int k = 4;

  cout << ( i + j << k ) << endl;
  cout << ( i + ( j << k )) << endl;

  return 0;
}
