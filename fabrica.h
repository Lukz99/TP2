#ifndef TP2_FABRICA_H
#define TP2_FABRICA_H

#include "edificio.h"

class Fabrica : public Edificio {
    //Métodos
public:
    Fabrica(std::string nombre_edificio, int piedra, int madera, int metal, int maxima_cantidad_permitidos);
};
#endif //TP2_FABRICA_H
