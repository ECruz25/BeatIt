#ifndef PERSONAJE_H
#define PERSONAJE_H

#include<SDL2/SDL.h>
#include<SDL2/SDL_image.h>
#include <vector>
#include <list>
using namespace std;

class Personaje {
  public:
    list<Personaje*> *personajes;
    vector<SDL_Texture*>texturas;
    Personaje();
    ~Personaje();
    virtual void draw(SDL_Renderer* renderer);
    virtual void act()=0;
    void init(SDL_Renderer* renderer, list<Personaje*> *personajes);
    SDL_Texture* hitbox1;
    SDL_Texture* hitbox2;
    SDL_Rect rect, hitbox;
    int frame;
    int animacion;
    bool atacando;
};

#endif // PERSONAJE_H
