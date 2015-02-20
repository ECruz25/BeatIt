#ifndef ENEMIGOVERDE_H
#define ENEMIGOVERDE_H

#include "Enemigo.h"

class EnemigoVerde : public Enemigo
{
    public:
        EnemigoVerde(SDL_Renderer* renderer, list<Personaje*> *personajes);
        ~EnemigoVerde();
        void act();
};

#endif // ENEMIGOVERDE_H
