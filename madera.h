#ifndef TP2_MADERA_H
#define TP2_MADERA_H
#include "materiales.h"

class Madera : public Material {
    //Atributos
private:

public:
    Madera(std::string nombre_material, int cantidad_material);

    void mostrar();
};


#endif //TP2_MADERA_H
