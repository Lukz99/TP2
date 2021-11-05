#ifndef TP2_OBELISCO_H
#define TP2_OBELISCO_H

#include "edificio.h"

class Obelisco : public Edificio {
    //Métodos
public:
    Obelisco(std::string nombre_edificio, int piedra, int madera, int metal, int maxima_cantidad_permitidos);
};

#endif //TP2_OBELISCO_H
