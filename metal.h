#ifndef METAL_H
#define METAL_H
#include "materiales.h"

class Metal : public Material {
    //Atributos
private:

public:
    Metal(std::string nombre_material, int cantidad_material);

    void mostrar();
};


#endif
