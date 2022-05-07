#include <iostream>
#include "ETSIDI.h"

int main()
{
    bool valor = ETSIDI::lanzaMoneda();
    std::cout << ("%c\n", valor);
}
