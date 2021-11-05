#include "edificio.h"

Edificio::Edificio(std::string nombre_edificio, int piedra, int madera, int metal, int maxima_cantidad_permitidos) {
    this->nombre_edificio = nombre_edificio;
    this->piedra = piedra;
    this->madera = madera;
    this->metal = metal;
    this->maxima_cantidad_permitidos = maxima_cantidad_permitidos;
}


