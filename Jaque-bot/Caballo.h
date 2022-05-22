#pragma once
#include "Pieza.h"
class Caballo :
    public Pieza
{
    Caballo(enum color c) : Pieza(c, C) {};
    void mueve();
    bool movimientoValido(V2D origen, V2D destino);

};

