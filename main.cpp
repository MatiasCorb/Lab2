#include "funciones.h"
#include <iostream>
using namespace std;

int main()
{
    int *vCand = nullptr, vMun[280]{}, Dimension;

    funcVector(vCand, Dimension);
    cargaDatos(vCand, vMun);
    Punto12(vCand, Dimension, vMun);

delete [] vCand;
    return 0;
}
