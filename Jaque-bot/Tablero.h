#pragma once
#include "ETSIDI.h"
#include "freeglut.h"
#include "Casilla.h"
//#include "Pieza.h"

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


	Casilla* getCasilla(V2D pos);

	void inicializa();
	
	bool obstaculo(V2D origen, V2D destino);

	void comerPieza(Casilla *origen, Casilla * destino);

	void Mueve(Casilla* origen, Casilla* destino);

};