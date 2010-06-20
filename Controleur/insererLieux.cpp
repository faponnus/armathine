/*
insererLieux.cpp

par lefou, projet armathine
29 jun 2010

rôle: gère l'état des lieux de la carte monde, et ordonne leur affichage
*/

#include "insererLieux.h"

void insererLieux (SDL_Surface *ecran)
{
	Lieu lieux [4];
	lieux[0].statut=PERSONNAGE;
	lieux[1].statut=VILLE_SEL;
	lieux[2].statut=VILLE;
	lieux[3].statut=MONDE;
	lieux[0].position.x=23;
	lieux[0].position.y=24;	
	lieux[1].position.x=223;
	lieux[1].position.y=24;	
	lieux[2].position.x=123;
	lieux[2].position.y=543;	
	lieux[3].position.x=456;
	lieux[3].position.y=354;	
	
	afficherLieux(ecran, lieux, 4);	
}
