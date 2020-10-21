#include "arreglo.h"

Arreglo::Arreglo()
{
   arreglo = new string[MAX];
   cont = 0;
   tam = MAX;
}

Arreglo::~Arreglo()
{
    delete[] arreglo;
}

void Arreglo::insertarFinal(const string &s)
{
    if(cont == tam){
        //expandir arreglo
        expandir();
    }
    arreglo[cont] = s;
    cont++;
}

void Arreglo::insertarInicio(const string &s)
{
    if(cont == tam){
        //expandir arreglo
        expandir();
    }
    for(size_t i = cont; i > 0; i--){
        arreglo[i] = arreglo[i-1];
    }
    arreglo[0] = s;
    cont++;
}

size_t Arreglo::size()
{
    return cont;
}

void Arreglo::expandir()
{
    string *nuevo = new string[tam+MAX];

    for(size_t i = 0; i < cont; i++){
        nuevo[i] = arreglo[i];
    }
    delete[] arreglo;
    arreglo = nuevo;
    tam = tam + MAX;
}