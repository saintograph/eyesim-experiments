#include "eyebot++.h"
#include <iostream>

int main()
{
  std::cout << "Beginning simulation." << std::endl;

  LCDPrintf("Hello from EyeBot!");
  LCDMenu("DONE", "BYE", "EXIT", "OUT");
  KEYWait(ANYKEY);

  for (int i = 0; i < 4; i += 1)
  {
    VWStraight(400, 300);
    VWWait();
    VWTurn(90, 90);
    VWWait();
  }

  std::cout << "Ending simulation." << std::endl;

  return 0;
}