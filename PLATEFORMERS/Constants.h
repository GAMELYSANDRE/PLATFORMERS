#ifndef __CONSTANTS__
#define __CONSTANTS__

#include <Gamebuino-Meta.h>

// Pour un personnage de 8 pixels de haut sur 6 pixels de large
const uint8_t WIDTH_HERO = 8;
const uint8_t HEIGHT_HERO = 8;
const uint8_t UNDER_CENTER_X_HERO = 4; // à droite du héro
const uint8_t UNDER_CENTER_Y_HERO = 4; // en dessous du héro
const uint8_t OVER_CENTER_X_HERO = 4; // à gauche du héro
const uint8_t OVER_CENTER_Y_HERO = 4; // au dessus du héro
// couleur du personnage
const Color HERO_L_COLOR = LIGHTBLUE;
const Color HERO_R_COLOR = BLUE;


// pour l'état du jeu
const uint8_t HOME_STATE = 1;
const uint8_t LAUNCH_PLAY_STATE = 2;
const uint8_t PLAY_STATE = 3;

#endif
