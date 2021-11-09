#ifndef HERRAMIENTAS_H
#define HERRAMIENTAS_H

#include "ciudad.h"

const int CONSTRUIR_EDIFICIO = 1;
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

// Precondiciones: ninguna
// Postcondiciones: Imprime el menu en pantalla.
void mostrarMenu();

// Precondiciones: Recibe la Ciudad y una opcion
// Postcondiciones: Devuelve True si la opcion es valida y llama al metodo correspondiente
void opcionValida(Ciudad &Ciudad, int opcion);

#endif