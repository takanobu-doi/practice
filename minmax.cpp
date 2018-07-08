#include <iostream>

int main()
{
  using namespace std;

  int kmax = 7;
  int kmin = 2;

  for(int k=0;k<10;k++){
    int ki = k<kmin?kmin:k;
    ki = ki>kmax?kmax:ki;
    cout << ki << endl;

  }
  return 0;
}
