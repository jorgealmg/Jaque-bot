#pragma once
#include "Pieza.h"
class Reina :
    public Pieza
{
public:
    Reina(char c, char t) : Pieza(c, t) {};
    void mueve();
    bool movimientoValido(V2D origen, V2D destino);
};

