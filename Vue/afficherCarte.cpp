/*
afficherCarte.cpp

par lefou, projet armathine

17 jun 2010

rôle: affiche la carte du monde 
*/
#include "afficherCarte.h"
int afficherCarte(SDL_Surface *ecran)
{
	
	//on prépare la cartei
	bool continuer =true;
   	SDL_Event event;

	SDL_Surface *carte;
	carte = SDL_LoadBMP("data/carte_monde.bmp");
	SDL_Rect position;
	position.x=0;
	position.y=0;
  	while (continuer)
   	{
       		 SDL_WaitEvent(&event);
       		 switch(event.type)
       		 {
            		case SDL_QUIT:
                		continuer = false;
                	break;
           		 case SDL_KEYDOWN:
               		 switch(event.key.keysym.sym)
               		 {
                   		 case SDLK_ESCAPE: // Veut arrêter le jeu
                        	 	continuer = false;
                      		 break;
               		 }
             		   break;
       		 }

        	// Effacement de l'écran
       	SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 0, 0, 0));
        SDL_BlitSurface(carte, NULL, ecran, &position);
	insererLieux(ecran);

        SDL_Flip(ecran);
   	} 
	SDL_FreeSurface(carte);

	return 1;
}
