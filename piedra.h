#ifndef TP2_PIEDRA_H
#define TP2_PIEDRA_H
#include "materiales.h"

class Piedra : public Material {
    //Atributos
private:

    //Metodos

public:
    Piedra(std::string nombre_material, int cantidad_material);

    void mostrar();

};


#endif //TP2_PIEDRA_H
