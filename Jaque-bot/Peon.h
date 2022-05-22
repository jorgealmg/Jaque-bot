#pragma once
#include "Pieza.h"
class Peon :
    public Pieza
{
public:
    Peon(enum color c) : Pieza(c, P) {};
    void mueve();

};

