#ifndef __CHARACTER__
#define __CHARACTER__

#include <Gamebuino-Meta.h>

struct Character
{
  int8_t x;
  int8_t y;
  int8_t Image;
  bool Time;
  int8_t oldY; // ......... position y au dernier rafraîchissement
  int8_t vx; // ........... vitesse horizontale
  int8_t vy; // ........... vitesse verticale
  uint8_t state; // ....... état du personnage : voir constantes
};

void initCharacter(Character &aCharacter);

void rectifyPositionY(Character &aCharacter);

#endif
