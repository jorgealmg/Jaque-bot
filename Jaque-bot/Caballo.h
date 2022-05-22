#pragma once
#include "Pieza.h"
#include "ETSIDI.h"
#include "freeglut.h"

using ETSIDI::SpriteSequence;

class Caballo :
    public Pieza
{
public:
    Caballo(char c) : Pieza(c, 'C') {};
    void mueve();
    bool movimientoValido(V2D origen, V2D destino);
    bool comerPeon(V2D origen, V2D destino);
    friend class Tablero;

private:
    //SpriteSequence CaballoNegro;
};

//, CaballoNegro("caballonegro.png", 1, 1, 220) { CaballoNegro.setSize(1.2, 1.2); CaballoNegro.setCenter(Tab[i][j].)