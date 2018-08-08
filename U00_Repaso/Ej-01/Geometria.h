#ifndef REPASO_GEOMETRIA_H
#define REPASO_GEOMETRIA_H
#include "Color.h"
//La clase abstracta es aquella que no puedo representar fisicamente, como por ejemplo si lo seria hacer un auto
//aviones, etc

class Geometria {
protected:
    float alto;
    float ancho;
public:
    float getAlto() const;

    void setAlto(float alto);

    float getAncho() const;

    void setAncho(float ancho);


    Color col;

    virtual float getPerimetro() = 0;
    virtual float getSuperficie() = 0;
};


#endif //REPASO_GEOMETRIA_H
