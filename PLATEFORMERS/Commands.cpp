#include "Commands.h"

const uint8_t manageCommands(Character &aCharacter)
{
  if(gb.buttons.repeat(BUTTON_RIGHT,1)) 
  {
    if(aCharacter.x < (gb.display.width() - UNDER_CENTER_X_HERO)) 
    {
      aCharacter.x++;
      aCharacter.vx = HORIZONTAL_VELOCITY; // vitesse horizontale positive pour aller à droite
      aCharacter.Image = 1;
    }
  }
  if(gb.buttons.repeat(BUTTON_LEFT,1)) 
  {
    if(aCharacter.x > OVER_CENTER_X_HERO  ) 
    {
      aCharacter.x--;
      aCharacter.vx = -HORIZONTAL_VELOCITY; // vitesse horizontale négative pour aller à gauche
      aCharacter.Image = 2;
    }
  }
  
  if(gb.buttons.pressed(BUTTON_A) && aCharacter.state != JUMP_STATE) 
  {
    aCharacter.state = PUSH_FOR_JUMP_STATE;
  }
  
  
  return (gb.buttons.pressed(BUTTON_MENU) ? HOME_STATE : PLAY_STATE);
}
