#ifndef TP2_EDIFICIOS_H
#define TP2_EDIFICIOS_H

const std::string PATH_EDIFICIOS     = "../edificios.txt";

class Edificio {
    //Atributos

private:

    std::string nombre_edificio;
    int piedra;
    int madera;
    int metal;
    int maxima_cantidad_permitidos;

    //Metodos

public:
    // PRE: Los parametros deben ser validos
    // POST: Crea un objeto Edificio
    Edificio(std::string nombre_edificio, int piedra, int madera, int metal, int maxima_cantidad_permitidos);



};

#endif //TP2_EDIFICIOS_H
