#include "Character.h"
#include "Constants.h"

void initCharacter(Character &aCharacter) 
{
  // on force la position intiale du héro au milieu de l'écran et plaqué au sol
  aCharacter.x = 40;
  aCharacter.y = gb.display.height() - UNDER_CENTER_Y_HERO;

  // on force la direction du personnage vers la droite
  aCharacter.Image = 0;
  aCharacter.Time = 0;
  
  // on initialise la position 'y' précédente
  aCharacter.oldY = aCharacter.y;

  // on initialise la vitesse verticale et horizontale
  aCharacter.vx = 0;
  aCharacter.vy = 0;

  // par défaut, le joueur est sur le sol
  aCharacter.state = ON_THE_PLATFORM_STATE;
}

// Corriger la position y (la fonction évoluera à la prochaine étape)
void rectifyPositionY(Character &aCharacter) 
{
  aCharacter.y = (gb.display.height() - UNDER_CENTER_Y_HERO);
}
