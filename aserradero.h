#ifndef TP2_ASERRADERO_H
#define TP2_ASERRADERO_H

#include "edificios.h"

class Aserradero : public Edificio {
    //Métodos
public:
    Aserradero(std::string nombre_edificio, int piedra, int madera, int metal, int maxima_cantidad_permitidos);
};
#endif //TP2_ASERRADERO_H
