/*
main.cpp
------

Par lefou, projet armathine
12 jun 2010

Rôle : charge la sdl et ordonne le chargement du menu
*/


//les includes
#include <iostream>
#include <SDL/SDL.h>
#include <stdlib.h>
#include <stdio.h>

#include "Model/constantes.h"
#include "Vue/menuPrincipal.h"

 
//main
int main(int argc, char *argv[])
{
	SDL_Init(SDL_INIT_VIDEO); // Initialisation de la SDL
	SDL_Surface *ecran = NULL;
	 
   	ecran= SDL_SetVideoMode(LARGEUR_FENETRE, HAUTEUR_FENETRE, 32, SDL_HWSURFACE | SDL_DOUBLEBUF); // Ouverture de la fenêtre
	SDL_WM_SetCaption("Armathine", NULL);

	
	if (ecran == NULL) // Si l'ouverture a échoué, on écrit l'erreur et on arrête
    	{
       		 fprintf(stderr, "Impossible de charger le mode vidéo : %s\n", SDL_GetError());
       		 exit(EXIT_FAILURE);
   	 }
    
    	afficherMenu(ecran); //Affichage du menu
 
    	SDL_Quit(); // Arrêt de la SDL
	
	return EXIT_SUCCESS; // Fermeture du programme
}

