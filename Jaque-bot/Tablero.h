#pragma once
#include <stdio.h>
#include <iostream>
#include "ETSIDI.h"
#include "freeglut.h"
#include "Casilla.h"
#include "Pieza.h"
#include "Rey.h"
#include "Reina.h"
#include "Caballo.h"
#include "Peon.h"
#include "Torre.h"
#include "Alfil.h"

using ETSIDI::SpriteSequence;
using namespace std;

class Tablero
{
private:

	SpriteSequence tablero0;
	float lado;
	int movimiento; //para definir los turnos


public:
	Tablero();

	//~Tablero();

	void setLado(float a);

	void dibuja();

	void dibujaPiezas(int, int);


	Casilla Tab[8][8];


	bool obstaculo(V2D origen, V2D destino);


	Casilla* getCasilla(V2D pos);

	void inicializa();
	
	bool obstaculo(V2D origen, V2D destino);

	void comerPieza(Casilla *origen, Casilla * destino);

	void coronar(Casilla* c);

	void Mueve(Casilla* origen, Casilla* destino);

	bool setTurno(int *movimiento, Casilla *origen);

	void hacerMovimiento(Casilla* origen, Casilla* destino);


};