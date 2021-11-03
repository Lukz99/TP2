#ifndef TP2_HERRAMIENTAS_H
#define TP2_HERRAMIENTAS_H
#include <string>

/*

struct Material {
    std::string nombre_material;
    int cantidad_material;
};

struct Lista_Materiales {
    Material** materiales;
    int cantidad_de_materiales;
};

struct Edificio {
    std::string nombre_edificio;
    int piedra;
    int madera;
    int metal;
    int cantidad_construidos;
    int maxima_cantidad_permitidos;
};

struct Lista_Edificios {
    Edificio** edificios;
    int cantidad_de_edificios;
};
*/

// Precondiciones: ninguna
// Postcondiciones: se muestra el menu por pantalla con sus 6 opciones
void mostrar_menu();

// Precondiciones: ninguna
// Postcondiciones: solicitar al usuario una opcion del menu
int ingresar_opcion();

// Precondiciones: la opcion es valida
// Postcondiciones: se realiza una tarea segun la opcion ingresada
void procesar_opcion(Lista_Materiales* lista_materiales, Lista_Edificios* lista_edificios, int opcion);


// Precondiciones: ninguna
// Postcondiciones: se guardan los materiales y edificios en sus respectivos archivos, se libera la memoria reservada
void liberar_memoria(Lista_Materiales* lista_materiales, Lista_Edificios* lista_edificios);


#endif //TP2_HERRAMIENTAS_H
