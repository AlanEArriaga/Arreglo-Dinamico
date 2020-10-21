#include <iostream>
#include "arreglo.h"

using namespace std;

void modificar(int *a){
    *a = *a + 1;
}

int main()
{
    Arreglo arreglo;
    arreglo.insertarFinal("a");
    arreglo.insertarFinal("b");
    arreglo.insertarFinal("c");
    arreglo.insertarFinal("d");
    arreglo.insertarFinal("e");
    arreglo.insertarFinal("f");
    arreglo.insertarFinal("g");
    arreglo.insertarFinal("h");
    arreglo.insertarInicio("x");
    arreglo.insertarInicio("z");

    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }
    

    /*int *b = nullptr;
    b = new int[100];
    cout << b << " " << *b << endl;
    delete[] b;*/
    /*int a=12;
    cout << a << endl;
    cout << &a << endl;
    modificar(&a);
    cout << a << endl;*/

    return 0;
}