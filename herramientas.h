#ifndef HERRAMIENTAS_H
#define HERRAMIENTAS_H

#include "Ciudad.h"

// Precondiciones: ninguna
// Postcondiciones: Imprime el menu en pantalla.
void mostrarMenu();

// Precondiciones: Recibe la Ciudad y una opcion
// Postcondiciones: Devuelve True si la opcion es valida y llama al metodo correspondiente
void opcionValida(Ciudad &Ciudad, int answer);

#endif