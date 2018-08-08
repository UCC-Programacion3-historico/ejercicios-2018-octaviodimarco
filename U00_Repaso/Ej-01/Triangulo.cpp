#include "Triangulo.h"
#include <cmath>


float Triangulo::getAngulo() const {
    return angulo;
}

void Triangulo::setAngulo(float angulo) {
    Triangulo::angulo = angulo;
}


float Triangulo::getPerimetro() {
    float hipotenusa;
    hipotenusa=sqrt(alto*alto+ancho*ancho);
    return alto+ancho+hipotenusa;
}

float Triangulo::getSuperficie() {
    return alto*ancho/2;

}