#ifndef TP2_EDIFICIOS_H
#define TP2_EDIFICIOS_H

#include <string>

const std::string PATH_EDIFICIOS = "../edificios.txt";

class Edificio {
    //Atributos
private:
    std::string nombre_edificio;
    int piedra;
    int madera;
    int metal;
    int maxima_cantidad_permitidos;

    //Métodos
public:
    // PRE: Los parámetros deben ser válidos
    // POST: Crea un objeto Edificio
    Edificio(std::string nombre_edificio, int piedra, int madera, int metal, int maxima_cantidad_permitidos);

};


#endif //TP2_EDIFICIOS_H
