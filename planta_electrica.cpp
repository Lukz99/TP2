#include "planta_electrica.h"

PlantaElectrica::PlantaElectrica(std::string nombre_edificio, int piedra, int madera, int metal, int maxima_cantidad_permitidos) : Edificio(
        nombre_edificio, piedra, madera, metal, maxima_cantidad_permitidos) {}