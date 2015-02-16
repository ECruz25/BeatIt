#include "Sho.h"

Sho::Sho(SDL_Renderer* renderer) {
  sho_standing.push_back(IMG_LoadTexture(renderer,"Sho/standing/1.png"));
  sho_standing.push_back(IMG_LoadTexture(renderer,"Sho/standing/2.png"));
  sho_standing.push_back(IMG_LoadTexture(renderer,"Sho/standing/3.png"));
  sho_standing.push_back(IMG_LoadTexture(renderer,"Sho/standing/4.png"));
  SDL_QueryTexture(sho_standing[0], NULL, NULL, &rect.w, &rect.h);
  rect.x = 100;
  rect.y = 250;
  frame = 0;
  animacion_sho = 0;
}

void Sho::draw (SDL_Renderer* renderer) {
  SDL_RenderCopy(renderer, sho_standing[animacion_sho], NULL, &rect);
  if (frame%100==0) {
    if (jumping) {
      if (frame%50==0) {
        if (jumps < 1) {
          rect.y-=200;
          jumps++;
        } else {
          rect.y += 200;
        }
        animacion_sho++;
        if (rect.y >= floor) {
          jumping = false;
        }
      }
    }
    animacion_sho++;
    if (animacion_sho >= sho_standing.size()) {
      animacion_sho=0;
    }
  }
  frame++;
}

void Sho::act() {
  if(!jumping) {
    const Uint8* currentKeyStates = SDL_GetKeyboardState(NULL);
    if (currentKeyStates[SDL_SCANCODE_W] && rect.y >= 220 && currentKeyStates[SDL_SCANCODE_LSHIFT]) {
      rect.y-=3;
    }
    if (currentKeyStates[SDL_SCANCODE_A] && rect.x >= -20 && currentKeyStates[SDL_SCANCODE_LSHIFT]) {
      rect.x-=3;
    }
    if(currentKeyStates[SDL_SCANCODE_S]&& rect.y <= 300 && currentKeyStates[SDL_SCANCODE_LSHIFT]) {
      rect.y+=3;
    }
    if (currentKeyStates[SDL_SCANCODE_D]&& rect.x <= 820 && currentKeyStates[SDL_SCANCODE_LSHIFT]) {
      rect.x+=3;
    }
    if (currentKeyStates[SDL_SCANCODE_W] && rect.y >= 220) {
      rect.y-=1;
    }
    if (currentKeyStates[SDL_SCANCODE_A] && rect.x >= -20) {
      rect.x-=1;
    }
    if (currentKeyStates[SDL_SCANCODE_S]&& rect.y <= 300) {
      rect.y+=1;
    }
    if (currentKeyStates[SDL_SCANCODE_D]&& rect.x <= 820) {
      rect.x+=1;
    }
    if (currentKeyStates[SDL_SCANCODE_SPACE]) {
      jump();
    }
  }
}

void Sho::jump() {
  cout<<"jumping"<<endl;
  floor = rect.y;
  jumps = 0;
  jumping = true;
}

Sho::~Sho() {
  //dtor
}
