#ifndef JEU_H_INCLUDED
#define JEU_H_INCLUDED
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
//Enumération des différentes possibilités d'une case du jeu
enum Case {
    Vide=0,
    Mario,
    Luigi
};

//Classe du jeu
class Jeu
{
    private:
        //Le plateau jeu
        Case plateau[3][3];

        //Surfaces d'un rond, d'une croix et d'un fond
        SDL_Surface *m, *l, *f;

        //Variable pour un tour
        Case tour;

    public:
        //Créateur/Destructeur
        Jeu();
        ~Jeu();

        //Fonction d'initialisation (chargement des surfaces)
        bool init();

        //Gestion du jeu lors d'un clic
        void clic(int , int);

        //Fonction d'affichage
        void aff(SDL_Surface *screen);
};
