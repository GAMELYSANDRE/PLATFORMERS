#ifndef __PHYSICS_ENGINE__
#define __PHYSICS_ENGINE__

#include <Gamebuino-Meta.h>

#include "Constants.h"
#include "Character.h"

const uint8_t isOnOnePlatform(const Character &aCharacter);

bool isOutOfWorld(Character &aCharacter);

void jumpMovement(Character &aCharacter);

void jump(Character &aCharacter);

void gravity(Character &aCharacter);

#endif
