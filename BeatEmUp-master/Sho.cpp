#include "Sho.h"

Sho::Sho(SDL_Renderer* renderer,list<Personaje*> *personajes)
{
    mapa_texturas["left"] = new vector<SDL_Texture*>();
    mapa_texturas["right"] = new vector<SDL_Texture*>();
    mapa_texturas["walk_right"] = new vector<SDL_Texture*>();
    mapa_texturas["walk_left"] = new vector<SDL_Texture*>();
    mapa_texturas["punch_right"] = new vector<SDL_Texture*>();
    mapa_texturas["punch_left"] = new vector<SDL_Texture*>();
    mapa_texturas["defense_left"]= new vector<SDL_Texture*>();
    mapa_texturas["defense_right"]= new vector<SDL_Texture*>();
    mapa_texturas["kick_right"]= new vector<SDL_Texture*>();
    mapa_texturas["kick_left"]= new vector<SDL_Texture*>();

    mapa_texturas["right"]->push_back(IMG_LoadTexture(renderer,"Sho/standing/1.png"));
    mapa_texturas["right"]->push_back(IMG_LoadTexture(renderer,"Sho/standing/2.png"));
    mapa_texturas["right"]->push_back(IMG_LoadTexture(renderer,"Sho/standing/3.png"));
    mapa_texturas["right"]->push_back(IMG_LoadTexture(renderer,"Sho/standing/4.png"));

    mapa_texturas["left"]->push_back(IMG_LoadTexture(renderer,"Sho/standing_left/1.png"));
    mapa_texturas["left"]->push_back(IMG_LoadTexture(renderer,"Sho/standing_left/2.png"));
    mapa_texturas["left"]->push_back(IMG_LoadTexture(renderer,"Sho/standing_left/3.png"));
    mapa_texturas["left"]->push_back(IMG_LoadTexture(renderer,"Sho/standing_left/4.png"));

    mapa_texturas["walk_right"]->push_back(IMG_LoadTexture(renderer,"Sho/walk/1.png"));
    mapa_texturas["walk_right"]->push_back(IMG_LoadTexture(renderer,"Sho/walk/2.png"));
    mapa_texturas["walk_right"]->push_back(IMG_LoadTexture(renderer,"Sho/walk/3.png"));
    mapa_texturas["walk_right"]->push_back(IMG_LoadTexture(renderer,"Sho/walk/4.png"));
    mapa_texturas["walk_right"]->push_back(IMG_LoadTexture(renderer,"Sho/walk/5.png"));

    mapa_texturas["walk_left"]->push_back(IMG_LoadTexture(renderer,"Sho/walk_left/1.png"));
    mapa_texturas["walk_left"]->push_back(IMG_LoadTexture(renderer,"Sho/walk_left/2.png"));
    mapa_texturas["walk_left"]->push_back(IMG_LoadTexture(renderer,"Sho/walk_left/3.png"));
    mapa_texturas["walk_left"]->push_back(IMG_LoadTexture(renderer,"Sho/walk_left/4.png"));
    mapa_texturas["walk_left"]->push_back(IMG_LoadTexture(renderer,"Sho/walk_left/5.png"));

    mapa_texturas["punch_right"]->push_back(IMG_LoadTexture(renderer,"Sho/punch/1.png"));
    mapa_texturas["punch_right"]->push_back(IMG_LoadTexture(renderer,"Sho/punch/2.png"));
    mapa_texturas["punch_right"]->push_back(IMG_LoadTexture(renderer,"Sho/punch/3.png"));

    mapa_texturas["punch_left"]->push_back(IMG_LoadTexture(renderer,"Sho/punch_left/1.png"));
    mapa_texturas["punch_left"]->push_back(IMG_LoadTexture(renderer,"Sho/punch_left/2.png"));
    mapa_texturas["punch_left"]->push_back(IMG_LoadTexture(renderer,"Sho/punch_left/3.png"));

    mapa_texturas["defense_right"]->push_back(IMG_LoadTexture(renderer,"Sho/defense/1.png"));
    mapa_texturas["defense_left"]->push_back(IMG_LoadTexture(renderer,"Sho/defense/2.png"));

    mapa_texturas["kick_right"]->push_back(IMG_LoadTexture(renderer,"Sho/kick/1.png"));
    mapa_texturas["kick_right"]->push_back(IMG_LoadTexture(renderer,"Sho/kick/2.png"));
    mapa_texturas["kick_right"]->push_back(IMG_LoadTexture(renderer,"Sho/kick/3.png"));
    mapa_texturas["kick_right"]->push_back(IMG_LoadTexture(renderer,"Sho/kick/4.png"));
    mapa_texturas["kick_right"]->push_back(IMG_LoadTexture(renderer,"Sho/kick/5.png"));
    mapa_texturas["kick_right"]->push_back(IMG_LoadTexture(renderer,"Sho/kick/6.png"));
    mapa_texturas["kick_right"]->push_back(IMG_LoadTexture(renderer,"Sho/kick/7.png"));
    mapa_texturas["kick_right"]->push_back(IMG_LoadTexture(renderer,"Sho/kick/8.png"));
    mapa_texturas["kick_right"]->push_back(IMG_LoadTexture(renderer,"Sho/kick/9.png"));
    mapa_texturas["kick_right"]->push_back(IMG_LoadTexture(renderer,"Sho/kick/10.png"));
    mapa_texturas["kick_right"]->push_back(IMG_LoadTexture(renderer,"Sho/kick/11.png"));
    mapa_texturas["kick_right"]->push_back(IMG_LoadTexture(renderer,"Sho/kick/12.png"));
    mapa_texturas["kick_right"]->push_back(IMG_LoadTexture(renderer,"Sho/kick/13.png"));

    mapa_texturas["kick_left"]->push_back(IMG_LoadTexture(renderer,"Sho/kick_left/1.png"));
    mapa_texturas["kick_left"]->push_back(IMG_LoadTexture(renderer,"Sho/kick_left/2.png"));
    mapa_texturas["kick_left"]->push_back(IMG_LoadTexture(renderer,"Sho/kick_left/3.png"));
    mapa_texturas["kick_left"]->push_back(IMG_LoadTexture(renderer,"Sho/kick_left/4.png"));
    mapa_texturas["kick_left"]->push_back(IMG_LoadTexture(renderer,"Sho/kick_left/5.png"));
    mapa_texturas["kick_left"]->push_back(IMG_LoadTexture(renderer,"Sho/kick_left/6.png"));
    mapa_texturas["kick_left"]->push_back(IMG_LoadTexture(renderer,"Sho/kick_left/7.png"));
    mapa_texturas["kick_left"]->push_back(IMG_LoadTexture(renderer,"Sho/kick_left/8.png"));
    mapa_texturas["kick_left"]->push_back(IMG_LoadTexture(renderer,"Sho/kick_left/9.png"));
    mapa_texturas["kick_left"]->push_back(IMG_LoadTexture(renderer,"Sho/kick_left/10.png"));
    mapa_texturas["kick_left"]->push_back(IMG_LoadTexture(renderer,"Sho/kick_left/11.png"));
    mapa_texturas["kick_left"]->push_back(IMG_LoadTexture(renderer,"Sho/kick_left/12.png"));
    mapa_texturas["kick_left"]->push_back(IMG_LoadTexture(renderer,"Sho/kick_left/13.png"));

    vector_actual_str = "right";
    type = "sho";

    rect.x = 300;
    rect.y = 300;

    init(renderer,personajes);
}

void Sho::act()
{
    const Uint8* currentKeyStates = SDL_GetKeyboardState(NULL);

    if(currentKeyStates[SDL_SCANCODE_N])
    {
        atacando = true;
        if(vector_actual_str=="walk_right" || vector_actual_str=="right")
        {
            setAnimacion("punch_right");
        }

        if(vector_actual_str=="walk_left" || vector_actual_str=="left")
        {
            setAnimacion("punch_left");
        }
    }
    if(currentKeyStates[SDL_SCANCODE_B])
    {
        atacando = true;
        if(vector_actual_str=="walk_right" || vector_actual_str=="right")
        {
            setAnimacion("kick_right");
        }

        if(vector_actual_str=="walk_left" || vector_actual_str=="left")
        {
            setAnimacion("kick_left");
        }
    }
    else
    {
        atacando = false;
    }

    if(currentKeyStates[SDL_SCANCODE_M])
    {

        defendiendo = true;

        if(vector_actual_str=="walk_right" || vector_actual_str=="right")
        {
            setAnimacion("defense_right");
        }

        if(vector_actual_str=="walk_left" || vector_actual_str=="left")
        {
            setAnimacion("defense_left");
        }

    }
    else
    {
        defendiendo = false;
    }

    if (currentKeyStates[SDL_SCANCODE_W] && rect.y >= 220 && currentKeyStates[SDL_SCANCODE_LSHIFT])
    {
        rect.y-=3;
    }
    if (currentKeyStates[SDL_SCANCODE_A] && rect.x >= -20 && currentKeyStates[SDL_SCANCODE_LSHIFT])
    {
        rect.x-=3;
    }
    if(currentKeyStates[SDL_SCANCODE_S]&& rect.y <= 300 && currentKeyStates[SDL_SCANCODE_LSHIFT])
    {
        rect.y+=3;
    }
    if (currentKeyStates[SDL_SCANCODE_D]&& rect.x <= 820 && currentKeyStates[SDL_SCANCODE_LSHIFT])
    {
        rect.x+=3;
    }
    if (currentKeyStates[SDL_SCANCODE_W] && rect.y >= 220)
    {
        rect.y-=1;
    }
    if (currentKeyStates[SDL_SCANCODE_A] && rect.x >= 0)
    {
        rect.x-=1;
        setAnimacion("walk_left");
    }
    if (currentKeyStates[SDL_SCANCODE_S]&& rect.y <= 300)
    {
        rect.y+=1;
    }
    if (currentKeyStates[SDL_SCANCODE_D]&& rect.x <= 820)
    {
        rect.x+=1;
        cout<<rect.x<<endl;
        setAnimacion("walk_right");
    }

    else
    {
        if(vector_actual_str == "walk_right")
            vector_actual_str = "right";

        if(vector_actual_str == "walk_left")
            vector_actual_str = "left";
    }

    attackCheck();
}

Sho::~Sho()
{
    //dtor
}
