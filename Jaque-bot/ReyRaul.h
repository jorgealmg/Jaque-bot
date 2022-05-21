#pragma once
#include "Pieza.h"
#include "V2D.h"
#include <math.h>
class Rey : public Pieza
{
private:
    
public:
    Rey(char c, char t) : Pieza(c, t) {};
    void mueve();

    V2D soyAtacado[30];

    void atacado(V2D*soyAtacado);
    bool movimientoValido(V2D origen, V2D destino);

};

