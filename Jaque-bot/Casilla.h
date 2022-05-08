#pragma once
#include "V2D.h"

class Casilla
{

public:
	int letra, numero;
	V2D PosReal;
	bool color; //0 negro, 1 blanco
	bool ocupacion; //0 ocupada, 1 libre

public:
	Casilla();
	void setColor(bool color);
	void setPosReal(V2D p);

	void setPosicion(int l, int n);

};

