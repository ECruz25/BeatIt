#ifndef ENEMIGOROJO_H
#define ENEMIGOROJO_H

#include "Enemigo.h"

class EnemigoRojo : public Enemigo
{
    public:
        EnemigoRojo(SDL_Renderer* renderer, list<Personaje*> *personajes);
        ~EnemigoRojo();
        void act();
};


#endif // ENEMIGOROJO_H
