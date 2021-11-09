#ifndef EDIFICIO_H
#define EDIFICIO_H

#include <string>
#include <iostream>

using namespace std;

class Edificio {

    // Atributos
    private:
        string nombreEdificio;
        int piedra;
        int madera;
        int metal;
        int maximo;

    // Metodos
    public:
    
        // PRE: Los parametros deben ser validos.
	    // POST: Crea un objeto Edificio.
        Edificio(string nombreEdificio, int piedra, int madera, int metal, int maximo);
        
        // PRE:
        // POST: Destruye un objeto Edificio.
        ~Edificio();

        // PRE:
        // POST: Devuelve el nombre del edificio.
        string verNombreEdificio();

        // PRE:
        // POST: Devuelve la cantidad de piedra.
        int verPiedra();

        // PRE:
        // POST: Devuelve la cantidad de madera.
        int verMadera();

        // PRE:
        // POST: Devuelve la cantidad de metal.
        int verMetal();

        // PRE:
        // POST: Devuelve la cantidad maxima de edificios.
        int verMaximo();
};

#endif