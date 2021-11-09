#ifndef PLANTA_ELECTRICA_H
#define PLANTA_ELECTRICA_H

#include "edificio.h"

class PlantaElectrica : public Edificio {
    //Metodos
public:
    PlantaElectrica(std::string nombre_edificio, int piedra, int madera, int metal, int maxima_cantidad_permitidos);
};

#endif
