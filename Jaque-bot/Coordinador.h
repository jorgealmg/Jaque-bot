#pragma once
#include "Mundo.h"
#include "ETSIDI.h"
#include "PInicio.h"
#include "Tablero.h"

class Coordinador
{
public:
	Coordinador();
	//virtual ~Coordinador();

	void teclaEspecial(unsigned char key);
	void tecla(unsigned char key);
	void mueve();
	void dibuja();

protected:
	Mundo mundo;
	PInicio PIN;
	Tablero tablero;

	enum Estado { INICIO, JvJ, JvAI, CONF };
	Estado estado;
};