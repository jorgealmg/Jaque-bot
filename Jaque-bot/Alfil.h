#pragma once
#include "Pieza.h"
class Alfil :
    public Pieza
{
<<<<<<< Updated upstream
    Alfil(char c, char t) : Pieza(c, t) {};
    void mueve();
=======
public:
    Alfil(enum color c) : Pieza(c, A) {};
    void mueve();
    bool movimientoValido(V2D origen, V2D destino);
>>>>>>> Stashed changes
};

