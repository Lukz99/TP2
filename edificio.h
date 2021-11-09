#ifndef EDIFICIO_H
#define EDIFICIO_H

#include <string>
#include <iostream>

using namespace std;

class Edificio {

    // Attributes
    private:
        string nombreEdificio;
        int piedra;
        int madera;
        int metal;
        int cantidad;
        int maximo;

    // Methods
    public:
    
        // PRE: Los parametros deben ser validos.
	    // POST: Crea un objeto Edificio.
        Edificio(string nombreEdificio, int piedra, int madera, int metal, int cantidad, int maximo);
        
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
        // POST: Devuelve la cantidad de edificios construidos.
        int verCantidad();

        // PRE:
        // POST: Suma una unidad a la cantidad
        void aumentarCantidad();
    
        // PRE: Recibe un valor entero
        // POST: Suma el valor ingresado a la cantidad previa
        void aumentarCantidad(int cantidad);
        
        // PRE:
        // POST: Resta una unidad a la cantidad
        void decrementarCantidad();

        // PRE: Recibe un valor entero
        // POST: Resta el valor ingresado a la cantidad previa
        void decrementarCantidad(int cantidad);

        // PRE:
        // POST: Devuelve la cantidad maxima de edificios.
        int verMaximo();
};

#endif