#ifndef TP2_HERRAMIENTAS_H
#define TP2_HERRAMIENTAS_H
#include <string>

/* const std::string PATH_MATERIALES = "materiales.txt";
const std::string PATH_EDIFICIOS = "edificios.txt";
 const std::string PATH_UBICACIONES = "ubicaciones.txt";
 const std::string PATH_MAPA = "mapa.txt"; */
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

// Precondiciones:
// Postcondiciones:
void listar_materiales();

// Precondiciones:
// Postcondiciones:
void listar_edificios_construidos();

// Precondiciones:
// Postcondiciones:
void listar_edificios();

// Precondiciones:
// Postcondiciones:
void demoler_edificio();

// Precondiciones:
// Postcondiciones:
void mostrar_mapa();

// Precondiciones:
// Postcondiciones:
void consultar_coordenada();

// Precondiciones:
// Postcondiciones:
void mostrar_inventario();

// Precondiciones:
// Postcondiciones:
void recolectar_recursos();

// Precondiciones:
// Postcondiciones:
void lluvia_recursos();

// Precondiciones:
// Postcondiciones:
void guardar_y_salir();

// Precondiciones: -
// Postcondiciones: Se guardan los materiales y edificios en sus respectivos archivos, se libera la memoria reservada
void liberar_memoria(Lista_Materiales* lista_materiales, Lista_Edificios* lista_edificios);


#endif //TP2_HERRAMIENTAS_H
