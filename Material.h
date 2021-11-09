#ifndef MATERIAL_H
#define MATERIAL_H

#include <string>
#include <iostream>

using namespace std;

class Material {

    // Attributes
    private:
        string nombreMaterial;
        int cantidad;

    // Methods
    public:

        // Precondiciones: Los parametros deben ser validos
	    // Postcondiciones: Crea un objeto Material
        Material(string nombreMaterial, int cantidad);

        // Precondiciones:
        // Postcondiciones: Destruye un objeto Material.
        ~Material();

        // Precondiciones:
        // Postcondiciones: Devuelve el nombre del material
        string verNombreMaterial();

        // Precondiciones:
        // Postcondiciones: Devuelve la cantidad
        int verCantidad();
        
        // Precondiciones:
        // Postcondiciones: Suma una unidad a la cantidad
        void incrementarCantidad();
    
        // Precondiciones: Recibe un valor entero
        // Postcondiciones: Suma el valor ingresado a la cantidad anterior
        void incrementarCantidad(int cantidad);
        
        // Precondiciones:
        // Postcondiciones: Resta una unidad a la cantidad
        void decrementarCantidad();

        // Precondiciones: Recibe un valor entero
        // Postcondiciones: Resta el valor ingresado a la cantidad anterior
        void decrementarCantidad(int cantidad);
};

#endif