#include "funciones.h"
#include <iostream>
using namespace std;

void funcVector(int *vCand, int &Dimension)
{
    int Cand, i;

    cout << "Ingrese cantidad de cantidatos: " << endl;
    cin >> Cand;

    Dimension = Cand;

    /// CREO VECTOR DINAMICO INICIALIZADO EN CERO
    vCand = new int[Cand]();

    /// MUESTRO VALORES DEL VECTOR

    for (i = 0; i < Cand; i++){
        cout << vCand[i] << endl;
    }
    cout << endl;


}

void cargaDatos(int *vCand, int vMun[280])
{
    int Mun, Cand, Votos;

    cout << "Numero Municipio: " << endl;
    cin >> Mun;

    while (Mun >= 0)
    {

        cout << "Numero Canditato: " << endl;
        cin >> Cand;

        cout << "Cantidad de votos: " << endl;
        cin >> Votos;

        /// Proceso de Datos:

        vCand[Cand - 1] += Votos;
        vMun[Mun - 1] += Votos;
        /// Nueva carga de datos:
        cout << "Numero Municipio: " << endl;
        cin >> Mun;
    }
}

void Punto12(int *vCand, int Dimension, int vMun[])
{
    /// PUNTO 1
    int i, MaxVotos = 0, MaxCand = 0, cont = 0;
    bool a = true;

    for (i = 0; i < Dimension; i++)
    {
        if (vCand[i] > 0 && a == true)
        {
            MaxCand = i + 1;
            MaxVotos = vCand[i];
            a = false;
        }
        else
        {
            if (vCand[i] > MaxVotos)
            {
                MaxVotos = vCand[i];
                MaxCand = i + 1;
            }
        }
    }
    cout << "Candidato con mas votos: " << MaxCand << endl;
    cout << "Cantidad de votos: " << MaxVotos << endl;

    /// PUNTO 2
    for (i = 0; i < 280; i++)
    {
        if (vMun[i] > 5000)
        {
            cont++;
        }
    }
    cout << "Municipios con mas de 5000 votos: " << cont << endl;
}
