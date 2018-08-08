#include "Cuadrado.h"
#include <cmath>

float Cuadrado::getDiagonal() {
    return sqrt(alto*alto+ancho*ancho);
}



float Cuadrado::getPerimetro() {
    return alto*4;
}

float Cuadrado::getSuperficie() {
    return alto*alto;
}

