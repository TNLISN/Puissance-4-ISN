#ifndef VARIABLES_H_INCLUDED
#define VARIABLES_H_INCLUDED
#endif
#ifdef __cplusplus
    #include <cstdlib>
#else
    #include <stdlib.h>
#endif
#ifdef __APPLE__
#include <SDL/SDL.h>
#else
#include <SDL.h>
#endif
SDL_Surface *fenetre = NULL;
SDL_Surface *mario = NULL;
SDL_Surface *ecran = NULL;
SDL_Surface *imageDeFond;
SDL_Rect position;
SDL_Rect positionFond;
int continuer;
SDL_Event evenement;
