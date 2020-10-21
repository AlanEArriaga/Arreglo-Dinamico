#include <iostream>
#include "arreglo.h"

using namespace std;

void modificar(int *a){
    *a = *a + 1;
}

int main()
{
    Arreglo arreglo;
    arreglo.insertarFinal(10);
    arreglo.insertarFinal(0);
    arreglo.insertarFinal(1);
    arreglo.insertarFinal(4);
    arreglo.insertarInicio(-10);

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