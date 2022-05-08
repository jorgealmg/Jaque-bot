#pragma once
#include "ETSIDI.h"
#include "freeglut.h"

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

	/*

	hacer una lista de posiciones/huecos/casillas

	inicializar la lista, mirar en el pang, en lista esferas
	definir la matriz

	int [8][8];

	definir blancos y negros




	*/

};

