#ifndef TP2_PLANTA_ELECTRICA_H
#define TP2_PLANTA_ELECTRICA_H

#include "edificio.h"

class PlantaElectrica : public Edificio {
    //Metodos
public:
    PlantaElectrica(std::string nombre_edificio, int piedra, int madera, int metal, int maxima_cantidad_permitidos);
};

#endif //TP2_PLANTA_ELECTRICA_H
