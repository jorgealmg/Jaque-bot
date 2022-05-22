#pragma once
class V2D
{
public:
	V2D(float xv = 0, float yv = 0) : x(xv), y(yv) {};
	float x, y;

	V2D operator - (V2D v);
};

