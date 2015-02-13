#ifndef SHO_H
#define SHO_H

#include<SDL2/SDL.h>
#include<SDL2/SDL_image.h>
#include <vector>
#include <iostream>
using namespace std;

class Sho
{
    public:
        vector<SDL_Texture*>sho_standing;
        SDL_Rect rect;
        int frame;
        int animacion_sho;
        int jumps = 0;
        int floor = 0;
        bool jumping = false;
        Sho(SDL_Renderer* renderer);
        void draw(SDL_Renderer* renderer);
        void act();
        void jump();
        virtual ~Sho();
    protected:
    private:
};

#endif // SHO_H
