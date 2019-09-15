#include <Gamebuino-Meta.h>
#include "Character.h"
#include "Constants.h"
#include "Display.h"
#include "Commands.h"


uint8_t stateOfGame;
Character hero;
  
void setup() 
{
  // initialisation de la Gamebuino META
  gb.begin();
  
  stateOfGame = HOME_STATE;
}

void loop() 
{
  // boucle d'attente
  gb.waitForUpdate();

  // Commencer par effacer l'écran
  gb.display.clear();

 switch(stateOfGame) 
 {
    case HOME_STATE:
      stateOfGame = paintMenu();
      break;
    case LAUNCH_PLAY_STATE:
      initCharacter(hero);
      stateOfGame = PLAY_STATE;
      break;
    case PLAY_STATE:
      stateOfGame = manageCommands(hero);
      paint(hero);
      break;
    default:
      gb.display.println("Erreur menu");
  }
}
