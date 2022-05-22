#pragma once
#include "Pieza.h"
class Torre :
    public Pieza
{
public:
    Torre(char c) : Pieza(c, 'T') {};
    void mueve();
    bool movimientoValido(V2D origen, V2D destino);
    bool comerPeon(V2D origen, V2D destino);
};

