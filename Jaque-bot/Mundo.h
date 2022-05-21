#pragma once
#include "freeglut.h"
#include <math.h>


class Mundo 
{
public:
	void rotarOjo();

	void inicializa();

	void dibuja();

	void teclaEspecial(unsigned char key);

	void mueve();

	Mundo();

	void tecla(unsigned char key);
private:
	int x_ojo, y_ojo, z_ojo;

};