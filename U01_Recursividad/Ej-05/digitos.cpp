#include <iostream>
#include "digitos.h"

using namespace std;

unsigned int cociente(unsigned int a, unsigned int b) {
    if (a < b)
        return 0;
    return cociente(a - b, b) + 1;
    return 0;
}


unsigned int resto(unsigned int a, unsigned int b) {
    if (a < b)
        return a;
    return resto(a - b, b);
    return 0;
}


void escribir_espaciado(unsigned int num) {
    if(cociente(num,1000)<1)
    return 0;
    return 

}
