#pragma once
#include "ETSIDI.h"
#include "freeglut.h"
#include "Casilla.h"

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

	bool obstaculo(V2D origen, V2D destino);

};