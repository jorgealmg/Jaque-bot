#pragma once
#include "ETSIDI.h"
#include "freeglut.h"

using ETSIDI::SpriteSequence;

class PInicio
{
private:
	SpriteSequence PAGINA_INICIO;
	float lado;
public:
	PInicio();
	void dibuja();
	void setLado(float);


};

