#include "Mundo.h"
#include "freeglut.h"
#include <math.h>


void Mundo::rotarOjo()
{
	float dist = sqrt(x_ojo * x_ojo + z_ojo * z_ojo);
	float ang = atan2(z_ojo, x_ojo);
	ang += 0.5f;
	x_ojo = dist * cos(ang);
	z_ojo = dist * sin(ang);
}

void Mundo::inicializa()
{

}

void Mundo::dibuja()
{
	gluLookAt(x_ojo, y_ojo, z_ojo,
		0.0, 0, 0.0,
		0.0, 10.0, 0.0);
}

void Mundo::teclaEspecial(unsigned char key)
{

}

void Mundo::mueve()
{

}

Mundo::Mundo()
{
	x_ojo = 0;
	y_ojo = 0;
	z_ojo = 15;
}

void Mundo::tecla(unsigned char key)
{

}
