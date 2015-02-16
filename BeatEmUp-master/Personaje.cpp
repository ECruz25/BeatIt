#include "Personaje.h"

Personaje::Personaje() {
  hitbox.w = 150;
  hitbox.h = 30;
  hitbox.x = 0;
  hitbox.y = 0;
  atacando = false;
}

Personaje::~Personaje() {
  //dtor
}

void Personaje::draw(SDL_Renderer* renderer) {
  SDL_RenderCopy(renderer, texturas[animacion], NULL, &rect);
  if(frame%100==0) {
    animacion++;
    if(animacion>=texturas.size()) {
      animacion=0;
    }
  }
  hitbox.x = rect.x + rect.w/2 - hitbox.w/2;
  hitbox.y = rect.y + rect.h - hitbox.h/2;
  SDL_RenderCopy(renderer, hitbox2, NULL, &hitbox);
  if(atacando) {
    SDL_RenderCopy(renderer, hitbox1, NULL, &hitbox);
  }
  frame++;
}

void Personaje::init(SDL_Renderer* renderer, list<Personaje*> *personajes) {
  SDL_QueryTexture(texturas[0], NULL, NULL, &rect.w, &rect.h);
  frame = 0;
  animacion = 0;
  hitbox1 = IMG_LoadTexture(renderer,"Hitbox/hitbox1.png");
  hitbox2 = IMG_LoadTexture(renderer,"Hitbox/hitbox2.png");
  this->personajes = personajes;
}
