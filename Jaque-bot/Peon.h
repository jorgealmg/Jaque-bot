#pragma once
#include "Pieza.h"
class Peon :
    public Pieza
{
public:
    Peon(char c, char t) : Pieza(c, t) {};
    void mueve();
};

