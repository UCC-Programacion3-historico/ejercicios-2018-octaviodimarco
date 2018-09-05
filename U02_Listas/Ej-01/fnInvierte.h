#include "../Lista/Lista.h"

#ifndef FNINVIERTE_H
#define FNINVIERTE_H



template<class T>
void Lista<T>::fnInvierte() {
    auto *aux = inicio;
    nodo<T> *act = nullptr;
    nodo<T> *ant = nullptr;

    while (aux != nullptr) {
        if (act != nullptr)
            act->setNext(ant);

        ant = act;
        act = aux;
        aux = aux->getNext();

        if (aux == nullptr) {
            act->setNext(ant);
            inicio->setNext(nullptr);
            inicio = act;

        }

    }


}


#endif //FNINVIERTE_H
