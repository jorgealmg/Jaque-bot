#pragma once
#include "ETSIDI.h"
#include "freeglut.h"
#include "Casilla.h"
<<<<<<< Updated upstream
=======
#include "Pieza.h"
#include "Rey.h"
#include "Reina.h"
#include "Caballo.h"
#include "Peon.h"
#include "Torre.h"
#include "Alfil.h"

>>>>>>> Stashed changes

using ETSIDI::SpriteSequence;

class Tablero
{
private:

	SpriteSequence tablero0;
	float lado;


public:
	Tablero();

	//~Tablero();

	void setLado(float a);

	void dibuja();


	Casilla Tab[8][8];

};

