#include <iostream>
#include "ETSIDI.h"
#include "freeglut.h"

int main()
{
    bool valor = ETSIDI::lanzaMoneda();
    std::cout << ("%c\n", valor);
}
