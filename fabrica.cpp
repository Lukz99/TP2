#include "fabrica.h"

Fabrica::Fabrica(std::string nombre_edificio, int piedra, int madera, int metal, int maxima_cantidad_permitidos)
        : Edificio(nombre_edificio, piedra, madera, metal, maxima_cantidad_permitidos) {
    this -> material_producido = MATERIAL_PRODUCIDO_FABRICA;
}
