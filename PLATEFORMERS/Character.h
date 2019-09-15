#ifndef __CHARACTER__
#define __CHARACTER__

#include <Gamebuino-Meta.h>

struct Character
{
  int8_t x;
  int8_t y;
  int8_t State;
  bool Time;
};

void initCharacter(Character &aCharacter);

#endif
