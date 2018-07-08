#include <iostream>

int main()
{
  using namespace std;

  enum MACHINE_STATE{
    INITIAL_STATE,
    STANDBY_STATE,
    RUNNING_STATE,
    EXIT_STATE};

  MACHINE_STATE state = INITIAL_STATE;

  while(EXIT_STATE != state){
    cout << "state code = " << state << ": ";
    switch(state){
    case INITIAL_STATE:
      cout << "INITIAL_STATE" << endl;
      state = STANDBY_STATE;
      break;
    case STANDBY_STATE:
      cout << "STANDBY_STATE" << endl;
      state = RUNNING_STATE;
      break;
    case RUNNING_STATE:
      cout << "RUNNING_STATE" << endl;
      state = EXIT_STATE;
      break;
    }
  }

  return 0;
}
