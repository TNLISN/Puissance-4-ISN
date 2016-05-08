#include "variables.h"
#include "fonctions.h"
#include "jeu.h"
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
int main ( int argc, char *argv[] )
{
    AffichageEcranInitial();
    ClicSouris();
    pause();
    SDL_Quit();//Arrêt de la SDL
    return EXIT_SUCCESS;//Fermeture du programme
}
