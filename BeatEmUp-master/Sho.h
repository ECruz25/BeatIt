#ifndef SHO_H
#define SHO_H

#include <vector>
#include <iostream>

#include<SDL2/SDL.h>
#include<SDL2/SDL_image.h>

using namespace std;

class Sho {
  public:
    vector<SDL_Texture*>sho_standing;
    Sho(SDL_Renderer* renderer);
    ~Sho();
    void draw(SDL_Renderer* renderer);
    void act();
    void jump();
    SDL_Rect rect;
    int frame;
    int animacion_sho;
    int jumps = 0;
    int floor = 0;
    bool jumping = false;
};

#endif // SHO_H
