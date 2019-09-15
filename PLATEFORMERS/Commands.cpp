#include "Commands.h"

const uint8_t manageCommands(Character &aCharacter)
{
  if(gb.buttons.pressed(BUTTON_RIGHT)) 
  {
    if(aCharacter.x < (gb.display.width() - UNDER_CENTER_X_HERO)) 
    {
      aCharacter.x++;
      aCharacter.State = 1;
    }
  }
  return (gb.buttons.pressed(BUTTON_MENU) ? HOME_STATE : PLAY_STATE);
}
