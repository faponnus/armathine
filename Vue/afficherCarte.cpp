/*
afficherCarte.cpp

par lefou, projet armathine

17 jun 2010

rôle: affiche la carte du monde 
*/
#include "afficherCarte.h"

int afficherCarte(SDL_Surface *ecran)
{
	SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255)); /* On efface l'écran */
	
	//on prépare la cartei
	int continuer =0;
   	SDL_Event event;

	SDL_Surface *carte;
	SDL_Rect position;
	position.x=0;
	position.y=0;
	carte = SDL_LoadBMP("data/carte_monde.bmp");
	SDL_BlitSurface(carte, NULL, ecran, &position);
	SDL_Flip(ecran);
 
	 while (continuer)
	 {
        	SDL_WaitEvent(&event);
        	switch(event.type)
       		 {
            case SDL_KEYDOWN:
                switch(event.key.keysym.sym)
                {
                    case SDLK_UP: // Flèche haut
                        continuer=0;
                        break;
                }
                break;
       	     }

   	 }
	SDL_FreeSurface(carte);

	return 1;
}

