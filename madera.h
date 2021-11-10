#ifndef MADERA_H
#define MADERA_H
#include "material.h"

class Madera : public Material {
    //Atributos
private:

public:
    Madera(std::string nombreMaterial, int cantidadMaterial);

    void mostrar();
};


#endif
