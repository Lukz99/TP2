#ifndef TP2_EDIFICIO_H
#define TP2_EDIFICIO_H

#include <string>

const std::string PATH_EDIFICIOS = "../edificios.txt"; //Agregarlo a herramientas.h o menu.h?
const int MATERIAL_PRODUCIDO_MINA = 15;
const int MATERIAL_PRODUCIDO_ASERRADERO = 25;
const int MATERIAL_PRODUCIDO_FABRICA = 40;

class Edificio {
    //Atributos
protected:
    std::string nombre_edificio;
    int piedra;
    int madera;
    int metal;
    int maxima_cantidad_permitidos;
    int material_producido;

    //Métodos
public:
    // PRE: Los parámetros deben ser válidos
    // POST: Crea un objeto Edificio
    Edificio(std::string nombre_edificio, int piedra, int madera, int metal, int maxima_cantidad_permitidos);

};


#endif //TP2_EDIFICIO_H
