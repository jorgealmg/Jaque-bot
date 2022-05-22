#pragma once
#include "Pieza.h"
class Caballo :
    public Pieza
{
<<<<<<< Updated upstream
    Caballo(char c, char t) : Pieza(c, t) {};
=======
public:

    Caballo(enum color c) : Pieza(c, C) {};
>>>>>>> Stashed changes
    void mueve();
};

