#include "V2D.h"

V2D V2D:: operator - (V2D v) {
	V2D res;
	res.x = x - v.x;
	res.y = y - v.y;
	return res;

}