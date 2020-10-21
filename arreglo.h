#ifndef ARREGLO_H
#define ARREGLO_H

#include <iostream>

using namespace std;

class Arreglo{
    int *arreglo;
    size_t tam;
    size_t cont;
    const static size_t MAX = 5;

public:
    Arreglo();
    ~Arreglo();
    void insertarFinal(int v);
    void insertarInicio(int v);
    size_t size();
    int operator[](size_t p)
    {
        return arreglo[p];
    }
    
private:
    void expandir();

};

#endif 