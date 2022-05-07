#pragma once
#include "Pieza.h"
class Reina :
    public Pieza
{
public:
    Reina(char c, char t) : Pieza(c, t) {};
    void mueve();
};

