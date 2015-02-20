#ifndef SHO_H
#define SHO_H

#include <vector>
#include <iostream>

#include<SDL2/SDL.h>
#include<SDL2/SDL_image.h>

#include "Personaje.h"

using namespace std;

class Sho : public Personaje
{
    public:
        vector<SDL_Texture*>sho_standing;
        Sho(SDL_Renderer* renderer, list<Personaje*> *personajes);
        ~Sho();
        void draw(SDL_Renderer* renderer);
        void act();
        void jump();
        SDL_Rect rect;
        int frame;
        int animacion_sho;
        int jumps;
        int floor;
        bool jumping;
};

#endif // SHO_H
