/*
pauseMenu.cpp
-------------

par lefou, projet Armathine
13 jun 2010

Rôle: redirige l'utilisateur après le clique sur la souris
*/

#include "pauseMenu.h"

void attendre(SDL_Surface *ecran)
{
	Coordonnees souris;
	int reponse=0;
	bool continuer = true;
    	SDL_Event event;
 
	while (continuer)
    	{
    		SDL_WaitEvent(&event);
       		 switch(event.type)
       		 {
        	 	case SDL_QUIT:
               		continuer = false;
			break;
			case SDL_MOUSEBUTTONUP: /* Clic de la souris */
				souris.x=event.button.x;	
				souris.y=event.button.y;
				reponse=clique(souris);	
				if (reponse==3)
				{
					jouer(ecran);
					continuer=false;
				}
			        if (reponse==2)
				{
					jouer(ecran);
					continuer=false;
				}
				if (reponse==1)
				{
					jouer(ecran);
					continuer=false;
				}
					
        		break;	
		
       		 }
   	 }
}

int clique(Coordonnees position)
{
	BoitesMenu boites [3];
	boites[0].h=15;
	boites[0].b=200;
	boites[1].h=215;
	boites[1].b=400;
	boites[2].h=415;
	boites[2].b=600;
	for (int i=0; i<3; i++)
	{
		if(position.y>boites[i].h&&position.y<boites[i].b)
		{
			return i+1;
		}
	}
	return 0;
}


