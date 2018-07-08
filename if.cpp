#include <iostream>

int main()
{
  using namespace std;

  int idx = 0;
  int idy = 0;

  if(idx){
    if(idy){
      cout << "Both idx and idy are true." << endl;
    }else{
      cout << "idx is true and idy is false." << endl;
    }
  }else if(idy){
    if(idx){
      cout << "Both idx and idy are ture. ????" << endl;
    }else{
      cout << "idx is fales and idy is true." << endl;
    }
  }else if(idx == idy){
    cout  << "Neither idx nor idy is true" << endl;
  }else{
    cout << "Neither idx nor idy is true"
	 << "but still idx is different from idy h. never!" << endl;
  }

  return 0;
}
