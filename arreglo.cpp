#include "arreglo.h"

Arreglo::Arreglo()
{
   arreglo = new int[MAX];
   cont = 0;
   tam = MAX;
}

Arreglo::~Arreglo()
{
    delete[] arreglo;
}

void Arreglo::insertarFinal(int v)
{
    if(cont == tam){
        //expandir arreglo
        expandir();
    }
    arreglo[cont] = v;
    cont++;
}

void Arreglo::insertarInicio(int v)
{
    if(cont == tam){
        //expandir arreglo
        expandir();
    }
    for(size_t i = cont; i > 0; i--){
        arreglo[i] = arreglo[i-1];
    }
    arreglo[0] = v;
    cont++;
}

void Arreglo::expandir()
{
    int *nuevo = new int[tam+MAX];

    for(size_t i = 0; i < cont; i++){
        nuevo[i] = arreglo[i];
    }
    delete[] arreglo;
    arreglo = nuevo;
    tam = tam + MAX;
}