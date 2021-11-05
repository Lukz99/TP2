#include <iostream>
#include "menu.h"
#include "herramientas.h"
#include "materiales.h"
#include "lista_materiales.h"
#include "edificio.h"
#include "lista_edificios.h"o

using namespace std;

int main() {

    Lista_Materiales* lista_materiales = new Lista_Materiales;
    Lista_Edificios* lista_edificios = new Lista_Edificios;
    int opcion_elegida;

    cargar_materiales(lista_materiales);
    cargar_edificios(lista_edificios);
    cargar_ubicaciones();
    cargar_mapa();

    cout << endl << "¡Bienvenido/a a Andypolis!" << endl;

    while (opcion_elegida != GUARDAR_Y_SALIR) {

        mostrar_menu();
        opcion_elegida = ingresar_opcion();

        while (!es_opcion_valida(opcion_elegida)) {
            cout << "El número de opción ingresado no es correcto, intente nuevamente: ";
            cin >> opcion_elegida;
            cout << endl;
        }
        procesar_opcion(lista_materiales, lista_edificios, opcion_elegida);

    }

    liberar_memoria(lista_materiales, lista_edificios);

    delete lista_materiales;
    delete lista_edificios;

    return 0;
}