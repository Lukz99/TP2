#ifndef TP2_MINA_H
#define TP2_MINA_H

#include "edificio.h"

class Mina : public Edificio {
    //Métodos
public:
    Mina(std::string nombre_edificio, int piedra, int madera, int metal, int maxima_cantidad_permitidos);
};

#endif //TP2_MINA_H
