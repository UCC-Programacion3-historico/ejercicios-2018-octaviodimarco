#include <iostream>
#include "digitos.h"

int main() {
    std::cout << "Ejercicio 01/05\n" << std::endl;
    int a = 17, b = 10, c = 1024;
    std::cout << cociente(a, b) << std::endl;
    std::cout << resto(a, b) << std::endl;
    std::cout << escribir_espaciado(c) << std::endl;
    return 0;
}