#include <iostream>
#include "../Lista/Lista.h"

int main() {
    std::cout << "Ejercicio 01/02\n" << std::endl;

    Lista<char> miLista;


//    miLista.insertar(0, 'A');
//    miLista.insertar(1, 'B'); //Principio
//    miLista.insertar(2, 'C'); //Final
//    miLista.insertar(3, 'D'); //Medio


//    miLista.print();

    int cant, pos, ingresar = 1;
    char dato;


    cout << "Ingrese la cantidad de elementos que tendra la lista:";
    cin >> cant;
    for (int i = 0; i < cant; i++) {
        char aux;
        cout << " Ingrese el dato " << i << " de la lista:";
        cin >> aux;
        miLista.insertar(i, aux);
    }

    while (ingresar == 1) {
        cout << "En que posicion quiere ingresar el elemento? ";
        cin >> pos;

        cout << "Ingrese el dato que quiere agregar: ";
        cin >> dato;

        cout << "Quiere seguir ingresando datos? (1 si, 0 no)" << endl;
        cin >> ingresar;

        miLista.insertar(pos,dato);
    }


    miLista.print();


    return 0;
}