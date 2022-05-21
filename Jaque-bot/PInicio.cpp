#include "PInicio.h"

PInicio::PInicio():PAGINA_INICIO("bin/Imagenes/PAGINA_INICIO.png", 1, 1, 220)
{
	setLado(10);
	PAGINA_INICIO.setCenter(0.0, 0.0);
	PAGINA_INICIO.setSize(lado, lado);
}

void PInicio::dibuja()
{
	glPushMatrix();
	glTranslatef(-5.0f, -5.0f, 0);

	PAGINA_INICIO.flip(false, false);
	PAGINA_INICIO.draw();

	glTranslatef(5.0f, 5.0f, 0);
	glPopMatrix();
}

void PInicio::setLado(float l)
{
	lado = l;
}
