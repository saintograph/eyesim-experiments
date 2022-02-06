#include "eyebot.h"

int main ()
{ 
  // 2.13.1
  int original_distance;
  original_distance = PSDGet(PSD_BACK);
  VWSetSpeed(100, 0);
  while (PSDGet(PSD_FRONT) > 300) ;
  VWWait();
  VWTurn(180, 180);
  VWWait();
  VWSetSpeed(100, 0);
  while (PSDGet(PSD_FRONT) > original_distance) ;
  VWWait();
  VWTurn(180, 180);
  VWWait();
  VWSetSpeed(0, 0);
}