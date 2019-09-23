#include <Gamebuino-Meta.h>
#include "Character.h"
#include "Constants.h"
#include "Display.h"
#include "Commands.h"
#include "PhysicsEngine.h"

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
      if(hero.state == ON_THE_PLATFORM_STATE) 
      {
        stateOfGame = manageCommands(hero);
      }
      if(hero.state != JUMP_STATE && hero.state != PUSH_FOR_JUMP_STATE) 
      {
        gravity(hero);
      } 
      else if(hero.state == JUMP_STATE || hero.state == PUSH_FOR_JUMP_STATE) 
      {
        jump(hero);
      }
      /*
      gb.display.print("     ETAT : ");
      gb.display.println(hero.state);
      gb.display.print("VITESSE V : ");
      gb.display.println(hero.vy);
      gb.display.print("  COORD Y : ");
      gb.display.println(hero.y);
      */ 
      paint(hero);
      break;
    default:
      gb.display.println("Erreur menu");
  }
}
