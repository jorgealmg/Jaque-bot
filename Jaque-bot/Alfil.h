#pragma once
#include "Pieza.h"
class Alfil :
    public Pieza
{
public:
    Alfil(char c) : Pieza(c, 'A') {};
    void mueve();
    bool movimientoValido(V2D origen, V2D destino);
};

