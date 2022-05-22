#pragma once
#include "V2D.h"
#include "Pieza.h"

class Casilla
{

public:
	int letra, numero;
	V2D PosReal;
	bool color; //0 negro, 1 blanco
	bool ocupacion; //0 ocupada, 1 libre
	Pieza *p;

public:
	Casilla();
	void setColor(bool color);
	void setPosReal(V2D p);
	void setPieza(Pieza *pie, char tipo, char color);
	void iniPieza(Pieza *p);
	void setPiezaVacia(char tipo);

	Pieza * getPieza();

	bool casillaVacia();

	void setPosicion(int l, int n);

};

