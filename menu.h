#ifndef TP2_MENU_H
#define TP2_MENU_H

#include "lista_edificios.h"

const int LISTAR_MATERIALES = 1;
const int OPCION_MINIMA = 1;
const int EDIFICIOS_CONSTRUIDOS= 2;
const int LISTAR_EDIFICIOS = 3;
const int DEMOLER_EDIFICIO = 4;
const int MOSTRAR_MAPA = 5;
const int CONSULTAR_COORDENADA = 6;
const int MOSTRAR_INVENTARIO = 7;
const int RECOLECTAR_RECURSOS = 8;
const int LLUVIA_RECURSOS = 9;
const int GUARDAR_Y_SALIR = 10;
const int OPCION_MAXIMA = 10;


const std::string PATH_UBICACIONES = "../ubicaciones.txt";
const std::string PATH_MAPA = "../mapa.txt";

// Precondiciones: -
// Postcondiciones: Se muestra el menu por pantalla.
void mostrar_menu();

// Precondiciones: -
// Postcondiciones: Solicitar al usuario una opcion del menu
int ingresar_opcion();

// Precondiciones: La opción es valida
// Postcondiciones: Se realiza una tarea según la opción ingresada
void procesar_opcion(Lista_Materiales* lista_materiales, Lista_Edificios* lista_edificios, int opcion);

/*
// Precondiciones:
// Postcondiciones:
void cargar_materiales(Lista_Materiales* puntero_materiales);

// Precondiciones:
// Postcondiciones:
void cargar_edificios(Lista_Edificios* puntero_edificios);
*/

// Precondiciones:
// Postcondiciones:
void cargar_ubicaciones();

// Precondiciones:
// Postcondiciones:
void cargar_mapa();

// Precondiciones: -
// Postcondiciones: Devuelve True si la opción elegida es menor o igual a la cantidad de opciones que existen en el menú, de lo contrario devuelve False.
bool es_opcion_valida(int opcion_elegida);

#endif //TP2_MENU_H
