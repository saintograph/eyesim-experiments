#include "eyebot.h"


int main()
{

  for (int i = 0; i < 4; i +=1)
  {
    VWStraight(400, 300);
    VWWait();
    VWTurn(90, 90);
    VWWait();
  }

  return 0;
}