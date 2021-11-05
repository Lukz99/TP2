#ifndef TP2_LISTA_EDIFICIOS_H
#define TP2_LISTA_EDIFICIOS_H
#include "edificio.h"
#include "lista_materiales.h"

class Lista_Edificios : public Edificio {
    //Atributos
private:
    Edificio** edificios;
    int cantidad_de_edificios;

    //Métodos

public:
    // Precondiciones: ya existe, mínimo, un edificio
    // Postcondiciones: se cargan los edificios con los datos del archivo edificios.txt
    void cargar_edificios(Lista_Edificios* lista_edificios);

    // Precondiciones: el edificio debe tener nombre, requisitos de piedra, metal, madera, edificios construidos y el maximo
    // Postcondiciones: se agrega el edificio struct Lista_Edificios
    void agregar_edificio(Lista_Edificios* lista_edificios, Edificio* edificio);

    // Precondiciones: ninguna
    // Postcondiciones: se muestran por pantalla los edificios construidos al menos una vez
    void listar_edificios_construidos(Lista_Edificios* lista_edificios);

    // Precondiciones: ninguna
    // Postcondiciones: se muestran por pantalla todos los edificios junto a sus requisitos y limitaciones de construccion
    void listar_edificios(Lista_Edificios* lista_edificios);

    // Precondiciones: ninguna
    // Postcondiciones: se construye un edificio, en algunos casos no es posible
    void construir_edificio(Lista_Edificios* lista_edificios, Lista_Materiales* lista_materiales);
};

#endif //TP2_LISTA_EDIFICIOS_H
