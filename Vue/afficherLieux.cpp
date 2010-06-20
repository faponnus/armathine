#include "afficherLieux.h"

void afficherLieux (SDL_Surface *ecran, Lieu *lieux, int taille)
{
	SDL_Surface *image [4];
	image [VILLE] = SDL_LoadBMP("data/ville.bmp");
	image [VILLE_SEL] = SDL_LoadBMP("data/ville_sel.bmp");
	image [MONDE] = SDL_LoadBMP("data/monde.bmp");
	image [MONDE_SEL] = SDL_LoadBMP("data/monde_sel.bmp");
	
	SDL_Rect emplacement;

	for (int i=0; i<taille; i++)
	{
		emplacement.x=lieux[i].position.x;
		emplacement.y=lieux[i].position.y;
		
		SDL_BlitSurface (image[i], NULL, ecran, &emplacement);
	}
	int continuer = 1;
    SDL_Event event;
 
    while (continuer)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
                continuer = 0;
        }
    }	

	for (int i=0; i<4; ++i)
	{
		SDL_FreeSurface(image[i]);
	}
}
	

