#include <iostream>
#include "../Lista/Lista.h"

int main() {
    std::cout << "Ejercicio 01/03\n" << std::endl;
    Lista<float> miLista;

    int cant, pos, eliminar=1;

    cout << "Cuantos datos tendra la lista?: ";
    cin >> cant;


    for (int i = 0; i < cant; i++) {
        int aux;
        cout << "Ingrese el dato de la posicion " << i << " : ";
        cin >> aux;
        miLista.insertar(i, aux);
    }

    miLista.print();

    while (eliminar==1) {

        cout<<"Seleccione la posicion a eliminar ";
        cin>>pos;

        miLista.remover(pos);
        miLista.print();

        cout<<"Desea eliminar otro elemento? (1 si, 0 no) ";
        cin>>eliminar;

    }

    cout<<"Su lista finalmente quedo asi:"<<endl;
    miLista.print();
    return 0;
}