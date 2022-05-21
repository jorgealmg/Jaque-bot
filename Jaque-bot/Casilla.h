#pragma once
#include "V2D.h"

class Casilla
{

public:
	V2D PosReal;
	int letra, numero;
	bool color; //0 negro, 1 blanco
	bool ocupacion; //0 ocupada, 1 libre

public:
	Casilla();
	void setPosReal(V2D p);
	void setColor(bool color);
	void setPosicion(int l, int n);

};

