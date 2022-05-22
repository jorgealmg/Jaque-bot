#pragma once
#include "Pieza.h"
class Rey :
    public Pieza
{
public:
    Rey(enum color c) : Pieza(c, K) {};
    void mueve();
    bool movimientoValido(V2D origen, V2D destino);



    bool comerPeon(V2D origen, V2D destino);

};

