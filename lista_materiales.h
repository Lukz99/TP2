#ifndef TP2_LISTA_MATERIALES_H
#define TP2_LISTA_MATERIALES_H
#include "materiales.h"


class Lista_Materiales : public Material {
    //Atributos

protected:

    Material** materiales;
    int cantidad_de_materiales;

    //Metodos

public:
    // Precondiciones: ya existen, al menos, la piedra, la madera y el metal, en ese orden
    // Postcondiciones: se cargan los materiales con los datos del archivo materiales.txt
    void cargar_materiales(Lista_Materiales* lista_materiales);

    // Precondiciones: el material debe tener un nombre y una cantidad
    // Postcondiciones: se agrega el material junto a su nombre y stock en el struct Lista_Materiales
    void agregar_material(Lista_Materiales* lista_materiales, Material* material);

    // Precondiciones: ninguna
    // Postcondiciones: se muestran por pantalla el nombre y stock de los materiales del archivo materiales.txt
    void listar_materiales(Lista_Materiales* lista_materiales);

    // Constructor
    // Precondiciones:
    // Postcondiciones:
    Lista_Materiales(Material** materiales, int cantidad_de_materiales);
};


#endif //TP2_LISTA_MATERIALES_H
