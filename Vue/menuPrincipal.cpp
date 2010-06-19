/*
menuPrincipal.cpp
---------
Par lefou, projet armathine
13jun2010

rôle: affiche le menue du jeu
*/
#include "menuPrincipal.h"

void afficherMenu(SDL_Surface *ecran)
{
	SDL_Surface *imageDeFond=NULL;

	SDL_Rect positionFond;
   	positionFond.x = 0;
    	positionFond.y = 0;
	
	//on affiche le menu
	imageDeFond = SDL_LoadBMP("data/menu.bmp");
	SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);

   	SDL_Flip(ecran);
	attendre(ecran);
	
	SDL_FreeSurface(imageDeFond); /* On libère la surface */

}
	
