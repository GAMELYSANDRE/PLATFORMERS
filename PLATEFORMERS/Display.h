#ifndef __DISPLAY__
#define __DISPLAY__

#include <Gamebuino-Meta.h>

#include "Constants.h"
#include "Character.h"
#include "Lang.h"

void paint(Character &aCharacter);
void paintHero(Character &aCharacter);
void paintBox
  (
    const int8_t aX, const int8_t aY, 
    const uint8_t aWidth, const uint8_t aHeight, 
    const uint8_t aImage, Character &aCharacter
  );
const uint8_t paintMenu();

#endif

