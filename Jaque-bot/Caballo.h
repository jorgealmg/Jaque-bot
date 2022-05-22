#pragma once
#include "Pieza.h"
class Caballo :
    public Pieza
{
public:
    Caballo(enum color c) : Pieza(c, C) {};
    void mueve();
    bool movimientoValido(V2D origen, V2D destino);
};

