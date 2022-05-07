#pragma once
#include "Pieza.h"
class Rey :
    public Pieza
{
public:
    Rey(char c, char t) : Pieza(c, t) {};
    void mueve();
};

