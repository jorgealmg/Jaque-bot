#pragma once
#include "V2D.h"
#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <ETSIDI.h>
#include <freeglut.h>
//#include "Mundo.h"

using namespace std;
//enum tipo{T,C,A,K,Q,P,V}; //Torre,Caballo,Alfil, King,Queen,Peon, Vacia
//enum color {B,N};

class Pieza
{
public:
	Pieza(char c, char t) : color(c), tipo(t) {};
	//virtual ~Pieza();
	virtual void mueve() = 0;
	virtual bool movimientoValido(V2D origen, V2D destino) = 0;
	bool comerPeon(V2D origen, V2D destino, Pieza *p);
	char getColor();
	char getTipo();
	void dibuja(V2D pos, Pieza* p);

	V2D pos;
	char tipo;
	char color;

};
