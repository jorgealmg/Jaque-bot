#pragma once
class ModosJuego
{
private:
	bool turno;
	int mode; // Modo de juego: 1-> 1 Jugador; 2 -> 2 Jugadores. De momento esos dos modos

public:
	void setTurno(bool t);
	void setMode(int m);
	bool getTurno();
	int getMode();
};


