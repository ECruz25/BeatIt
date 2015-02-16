
#include<SDL2/SDL.h>
#include<SDL2/SDL_image.h>
#include<iostream>
#include<vector>
#include<list>
#include "Sho.h"
#include "EnemigoAzul.h"
#include "EnemigoVerde.h"
#include "EnemigoRojo.h"

using namespace std;

SDL_Window* window;
SDL_Renderer* renderer;
SDL_Event Event;
SDL_Texture *background;
SDL_Rect rect_background, rect_pausa;

int main( int argc, char* args[] ) {
  //Init SDL
  if(SDL_Init(SDL_INIT_EVERYTHING) < 0) {
      return 10;
  }
  //Creates a SDL Window
  if((window = SDL_CreateWindow("Image Loading", 100, 100, 1024/*WIDTH*/, 768/*HEIGHT*/, SDL_WINDOW_RESIZABLE | SDL_RENDERER_PRESENTVSYNC)) == NULL) {
    return 20;
  }
  //SDL Renderer
  renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED );
  if (renderer == NULL) {
    std::cout << SDL_GetError() << std::endl;
    return 30;
  }

  //Init textures
  int w=0,h=0;
  background = IMG_LoadTexture(renderer,"fondo.png");
  SDL_QueryTexture(background, NULL, NULL, &w, &h);
  rect_background.x = 0;
  rect_background.y = 0;
  rect_background.w = w;
  rect_background.h = h;

  Sho sho(renderer);

//    list<Enemigo*> enemigos;
//    enemigos.push_back(new EnemigoAzul(renderer));
//    enemigos.push_back(new EnemigoVerde(renderer));
//    enemigos.push_back(new EnemigoRojo(renderer));

  //Main Loop
  int frame=0;
  int animacion_sho = 0;
  bool pause = false;
  bool done = true;
  const Uint8* currentKeyStates = SDL_GetKeyboardState(NULL);
  while(!currentKeyStates[SDL_SCANCODE_ESCAPE]) {
    while(SDL_PollEvent(&Event)) {
      if(Event.type == SDL_QUIT) {
            return 0;
        }
    }

//        if(frame%200==0)
//        {
//            enemigos.push_back(new EnemigoAzul(renderer));
//        }

    if(currentKeyStates[SDL_SCANCODE_P])
      pause=true;

    if(currentKeyStates[SDL_SCANCODE_O])
      pause=false;

    if(pause==false)
      sho.act();
//        for(list<Enemigo*>::iterator e=enemigos.begin();
//                e!=enemigos.end();
//                e++)
//            (*e)->act();
    SDL_SetRenderDrawColor(renderer, 255, 100, 0, 255);
    if(pause==false) {
      SDL_RenderClear(renderer);
      SDL_RenderCopy(renderer, background, NULL, &rect_background);
      sho.draw(renderer);
      for(list<Enemigo*>::iterator e=enemigos.begin();e!=enemigos.end();e++) {
        (*e)->draw(renderer);
      }
    }
    SDL_RenderPresent(renderer);
    frame++;
  }
  return 0;
}






