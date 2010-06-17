/* Lieu.h
------------

Par lefou, projet armathine
17 jun 2010

rôle: structure des lieux sur la carte du monde
*/
#ifndef DEF_LIEU
#define DEF_LIEU

#include <iostream>
#include "Coordonnees.h"

struct Lieu
{
	Coordonnees position;
	int statut;
}
	
#endif
