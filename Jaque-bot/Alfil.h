#pragma once
#include "Pieza.h"
class Alfil :
    public Pieza
{
    Alfil(char c, char t) : Pieza(c, t) {};
    void mueve();
    bool movimientoValido(V2D origen, V2D destino);

};

