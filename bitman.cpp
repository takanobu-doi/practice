#include <iostream>

int main()
{
  using namespace std;

  int id = 1;

  for(int i=0;i<16;i++){
    id <<= 1;
    cout.width(8);
    cout << dec << id << " ";
    cout.width(8);
    cout << hex << id << endl;
  }

  return 0;
}
