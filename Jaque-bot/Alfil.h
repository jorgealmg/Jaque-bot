#pragma once
#include "Pieza.h"
class Alfil :
    public Pieza
{
    Alfil(enum color c) : Pieza(c, A) {};
    void mueve();
    bool movimientoValido(V2D origen, V2D destino);

};

