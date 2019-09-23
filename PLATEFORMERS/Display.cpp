#include "Display.h"
#include "Image.h"

void paintBox
    (
    const int8_t aX, const int8_t aY, 
    const uint8_t aWidth, const uint8_t aHeight, 
    const uint8_t aImage, Character &aCharacter
    ) 
{
  switch (aImage)
  {
    case 0:
      gb.display.drawImage(aX, aY, IMG_FLUP_RIGHT);
      break;
    case 1:
      gb.display.drawImage(aX, aY, IMG_FLUP_RIGHT);
      break;
    case 2:
      gb.display.drawImage(aX, aY, IMG_FLUP_LEFT);
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
    aCharacter.Image, aCharacter
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
