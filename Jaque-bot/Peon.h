#pragma once
#include "Pieza.h"
class Peon :
    public Pieza
{
public:
    Peon(enum color c) : Pieza(c, A) {};
    void mueve();
    bool movimientoValido(V2D origen, V2D destino);
};

