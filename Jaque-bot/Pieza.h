#pragma once
#include "V2D.h"
#include <math.h>

enum tipo { T, C, A, K, Q, P, V}; //Torre,Caballo,Alfil, King,Queen,Peon, Vacia
enum color {B, N};

class Pieza
{
public:
	Pieza(char c = '0', char t = '0') : color(c), tipo(t) {};
	virtual ~Pieza();
	virtual void mueve() = 0;

	virtual bool movimientoValido(V2D origen, V2D destino);
	bool comerPeon(V2D origen, V2D destino);
	char getColor();
	char getTipo();

	V2D pos;
	char tipo;
	char color;
	
};
