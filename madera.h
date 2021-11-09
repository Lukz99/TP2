#ifndef MADERA_H
#define MADERA_H
#include "materiales.h"

class Madera : public Material {
    //Atributos
private:

public:
    Madera(std::string nombre_material, int cantidad_material);

    void mostrar();
};


#endif
