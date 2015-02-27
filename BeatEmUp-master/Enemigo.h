#ifndef ENEMIGO_H
#define ENEMIGO_H

#include "Personaje.h"

class Enemigo : public Personaje
{
    public:

        Enemigo();
        virtual ~Enemigo();
        bool bounce;
    protected:
    private:
};

#endif // ENEMIGO_H
