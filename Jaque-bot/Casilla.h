#pragma once
#include "Vector2D.h"

class Casilla
{
	
	public:
		int letra, numero;
		Vector2D PosReal;
		bool color; //0 negro, 1 blanco
		bool ocupacion; //0 ocupada, 1 libre

	public:
		Casilla();
		void setColor(bool color);
		void setPosReal(Vector2D p);

		void setPosicion(int l, int n);

};

