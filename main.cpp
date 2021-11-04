#include <iostream>
#include "herramientas.h"
#include "materiales.h"
#include "lista_materiales.h"
#include "edificios.h"
#include "lista_edificios.h"

using namespace std;

int main() {

    Lista_Materiales* lista_materiales = new Lista_Materiales;
    Lista_Edificios* lista_edificios = new Lista_Edificios;

    int opcion = 0; //CAMBIAR ESTO

    cargar_materiales(lista_materiales);
    cargar_edificios(lista_edificios);
    cargar_ubicaciones();
    cargar_mapa();

    mostrar_menu();
    opcion = ingresar_opcion();

    while (opcion != GUARDAR_Y_SALIR) {

        procesar_opcion(lista_materiales, lista_edificios, opcion);

        mostrar_menu();
        opcion = ingresar_opcion();

    }

    liberar_memoria(lista_materiales, lista_edificios);

    delete lista_materiales;
    delete lista_edificios;
    return 0;
}
