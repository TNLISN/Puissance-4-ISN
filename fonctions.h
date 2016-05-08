#ifndef FONCTIONS_H_INCLUDED
#define FONCTIONS_H_INCLUDED
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
void pause() //Laisser la fen�tre ouverte
{
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
}
void AffichageEcranInitial()
{
    //permet de charger la biblioth�que SDL
    SDL_Init(SDL_INIT_VIDEO);
    //Ouverture de la fen�tre initiale
    //1er param�tre = largeur de la fen�tre en pixels
    //2�me param�tre = hauteur
    //3�me param�re = nombre de couleurs
    //4�me param�tre = SDL_HWSURFACE = les donn�es seront charg�es dans la m�moire video c'est � dire la m�moire de la carte video
    ecran = SDL_SetVideoMode(530, 455, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);// Ouverture de la fen�tre en 530x455
    //changer le titre de la fen�tre: Differents tests
    SDL_WM_SetCaption("Puissance 4", NULL);
    SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 128, 128, 128));
    SDL_Flip(ecran);
}

void AffichageImage()
{
    imageDeFond = SDL_LoadBMP("ijip4.bmp");
    SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);
    SDL_Flip(ecran);
    SDL_FreeSurface(imageDeFond);
}
void ClicSouris()
{
 int continuer = 1;
    while (continuer)
     {
         SDL_WaitEvent(&evenement);
         switch(evenement.type)/* Test du type d'�v�nement*/
         {

            case SDL_QUIT:
                continuer = 0;
                break;
            case SDL_MOUSEBUTTONUP:/* clic de la souris*/
                if(evenement.button.button == SDL_BUTTON_LEFT) // On arr�te le programme si on fait un clic gauche
            position.x=evenement.button.x;
            position.y=evenement.button.y;
            continuer = 0;
            break;

         }
      }
    SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));
    //Collage de la nouvelle couleur sur la surface nomm�e fen�tre
    SDL_BlitSurface(mario,NULL,ecran,&position);

    //mise � jour de la fenetre
    SDL_Flip(ecran);



    }
