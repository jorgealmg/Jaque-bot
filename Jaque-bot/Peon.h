#pragma once
#include "Pieza.h"
class Peon :
    public Pieza
{
public:
<<<<<<< Updated upstream
    Peon(char c, char t) : Pieza(c, t) {};
    void mueve();
=======
    Peon(enum color c) : Pieza(c, A) {};
    void mueve();
    bool movimientoValido(V2D origen, V2D destino);
>>>>>>> Stashed changes
};

