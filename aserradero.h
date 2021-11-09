#ifndef ASERRADERO_H
#define ASERRADERO_H

#include "edificio.h"

class Aserradero : public Edificio {
    //Métodos
public:
    Aserradero(std::string nombre_edificio, int piedra, int madera, int metal, int maxima_cantidad_permitidos);
};
#endif