#include <iostream>
#include "../Lista/Lista.h"

int main() {
    std::cout << "Ejercicio 01/04\n" << std::endl;

    Lista<char > listaUno,listaDos,listaTres;

    listaUno.insertar(0,'A');
    listaUno.insertar(1,'B');
    listaUno.insertar(2,'C');
    listaUno.insertar(3,'D');

    listaDos.insertar(4,'E');
    listaDos.insertar(5,'F');
    listaDos.insertar(6,'G');
    listaDos.insertar(7,'H');

    listaTres<char> *unir(listaUno,listaDos);
    listaTres.print();

    return 0;
}