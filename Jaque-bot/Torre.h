#pragma once
#include "Pieza.h"
class Torre :
    public Pieza
{
public:
    Torre(char c, char t) : Pieza(c, t) {};
    void mueve();
};

