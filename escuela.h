#ifndef TP2_ESCUELA_H
#define TP2_ESCUELA_H

#include "edificios.h"

class Escuela : public Edificio {
    //Métodos
public:
    Escuela(std::string nombre_edificio, int piedra, int madera, int metal, int maxima_cantidad_permitidos);
};

#endif //TP2_ESCUELA_H
