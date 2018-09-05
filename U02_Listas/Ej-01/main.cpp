#include <iostream>
#include "../Lista/Lista.h"
#include "fnInvierte.h"

int main() {
    std::cout << "Ejercicio 02/01\n" << std::endl;
    Lista<char> miLista;

    miLista.insertar(0,'e');
    miLista.insertar(1,'e');
    miLista.insertar(2,'l');
    miLista.insertar(3,' ');
    miLista.insertar(4,'e');
    miLista.insertar(5,'u');
    miLista.insertar(6,'q');
    miLista.insertar(7,' ');
    miLista.insertar(8,'l');
    miLista.insertar(9,'e');
    miLista.insertar(10,' ');
    miLista.insertar(11,'o');
    miLista.insertar(12,'t');
    miLista.insertar(13,'u');
    miLista.insertar(14,'p');
//    miLista.print();

   miLista.fnInvierte();
   miLista.print();


    return 0;
}