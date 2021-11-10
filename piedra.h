#ifndef PIEDRA_H
#define PIEDRA_H
#include "material.h"

class Piedra : public Material {
    //Atributos
private:

    //Metodos

public:
    Piedra(std::string nombre_material, int cantidad_material);

    void mostrar();

};


#endif