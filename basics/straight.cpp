#include "eyebot++.h"
#include <iostream>

int main()
{
  std::cout << "Beginning simulation." << std::endl;

  LCDPrintf("Hello from EyeBot!");
  LCDMenu("DONE", "BYE", "EXIT", "OUT");
  KEYWait(ANYKEY);
  
  while(PSDGet(PSD_FRONT) > 200) {
    // print distance to console
    // std::cout << PSDGet(PSD_FRONT) << std::endl;
    LCDPrintf("%d \n", PSDGet(PSD_FRONT));
    VWSetSpeed(100, 0);
  };

  // stop
  VWSetSpeed(0, 0);
  
  std::cout << "Ending simulation." << std::endl;

  return 0;
}