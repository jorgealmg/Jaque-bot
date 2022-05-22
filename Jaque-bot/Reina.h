#pragma once
#include "Pieza.h"
class Reina :
    public Pieza
{
public:
    Reina(enum color c) : Pieza(c, Q) {};
    void mueve();
    bool movimientoValido(V2D origen, V2D destino);
};

