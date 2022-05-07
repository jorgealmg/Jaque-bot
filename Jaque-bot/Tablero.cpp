#include "Tablero.h"

Tablero::Tablero() :tablero0("bin/Imagenes/tablero0.png", 1, 1, 220)
{
	setLado(10);
	tablero0.setCenter(0.0, 0.0);
	tablero0.setSize(lado, lado);


}

void Tablero::setLado(float l)
{
	lado = l;
}

void Tablero::dibuja()
{
	glPushMatrix();
	glTranslatef(-5.0f, -5.0f, 0);


	tablero0.flip(false, false);

	tablero0.draw();

	glTranslatef(5.0f, 5.0f, 0);
	glPopMatrix();


}
