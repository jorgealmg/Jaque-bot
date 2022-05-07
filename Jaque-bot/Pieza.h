#pragma once
#include "V2D.h"

class Pieza
{
public:
	Pieza(char c = '0', char t = '0') : color(c), tipo(t) {};
	//virtual ~Pieza();
	virtual void mueve() = 0;
	char getColor();
	char getTipo();
	V2D pos;
	char tipo;
	char color;

};
