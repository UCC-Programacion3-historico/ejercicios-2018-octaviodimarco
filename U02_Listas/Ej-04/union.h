#include "../Lista/Lista.h"

#ifndef UNION_H
#define UNION_H


template<class T>
Lista<T> *unir(Lista<T> &lisA, Lista<T> &lisB) {
    nodo<T> *inicio;

    auto *aux = inicio;
    auto *auxDos = lisB.insertarPrimero();

    Lista<T> unida;

    int pos = 0;
    int posDos = 0;

    while (auxDos->getNext() != nullptr) {
        unida.insertar(posDos, auxDos->getDato());
        posDos++;
        auxDos = auxDos->getNext();
    }

    if (auxDos->getNext() == nullptr) {
        unida.insertar(posDos, auxDos->getDato());
    }

    while (aux != nullptr) {
        unida.insertar(pos, aux->getDato());
        pos++;
        aux=aux->getNext();
    }

    return new Lista<T>();
}


#endif //UNION_H
