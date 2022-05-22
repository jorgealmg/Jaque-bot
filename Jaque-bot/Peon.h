#pragma once
#include "Pieza.h"
class Peon :
    public Pieza
{
public:
    Peon(char c) : Pieza(c, 'P') {};
    void mueve();
    bool movimientoValido(V2D origen, V2D destino);
};

