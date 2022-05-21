#pragma once
#include "Pieza.h"
class Peon :
    public Pieza
{
public:
    Peon(char c, char t) : Pieza(c, t) {};
    void mueve();
    bool movimientoValido(V2D origen, V2D destino);
    bool comerPeon(V2D origen, V2D destino);
};

