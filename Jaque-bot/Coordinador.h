#pragma once
#include "Mundo.h"
#include "ETSIDI.h"
#include "PInicio.h"
#include "Tablero.h"

class Coordinador
{
protected:
	Mundo mundo;
	Tablero tablero;
	enum Estado { INICIO, JvJ, JvAI, CONF };
	Estado estado;

public:
	Coordinador();
	//virtual ~Coordinador();

	void teclaEspecial(unsigned char key);
	void setEstado(Estado est);
	void tecla(unsigned char key);
	void mueve();
	void dibuja();
	void setRaton(V2D pos, int e);
	bool pulsaRect(int x1, int y1, int x2, int y2);

};
