#include "Display.h"
#include "Image.h"

void paintBox
    (
    const int8_t aX, const int8_t aY, 
    const uint8_t aWidth, const uint8_t aHeight, 
    const uint8_t aState, Character &aCharacter
    ) 
{
  switch (aState)
  {
    case 0:
      gb.display.drawImage(aX, aY, IMG_FLUP_RIGHT);
      break;
    case 1:
      for (uint8_t i = 0; i < 2; i++ )
      { 
        aCharacter.x++;
        gb.display.drawImage(aCharacter.x++, aY, IMG_FLUP_RIGHT_ROLL);
      }
      aCharacter.State = 0;
      break;
  }
}

void paint(Character &aCharacter) 
{
  paintHero(aCharacter);
}

void paintHero(Character &aCharacter) 
{
  //Color heroColor = (aCharacter.toTheLeft ? HERO_L_COLOR : HERO_R_COLOR);
  paintBox
  (
    aCharacter.x - OVER_CENTER_X_HERO, aCharacter.y - OVER_CENTER_Y_HERO, 
    WIDTH_HERO, HEIGHT_HERO, 
    aCharacter.State, aCharacter
  );
}

const uint8_t paintMenu() 
{
  const char* items[] = 
  {
    PLAY_EN
  };

  const uint8_t indexItem = gb.gui.menu("Menu", items);
  uint8_t choice = HOME_STATE;
  if(items[indexItem] == PLAY_EN) 
  {
    choice = LAUNCH_PLAY_STATE;
  }
  return choice;
}
