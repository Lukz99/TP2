#include <iostream>
#include "menu.h"
#include "clear_screen.h"
#include "herramientas.h"

using namespace std;

void mostrar_menu() {

    cout << endl << " -------- Menu Principal -------- " << endl << endl;
    cout << "1. Construir edificio por nombre." << endl;
    cout << "2. Listar los edificios construidos." << endl;
    cout << "3. Listar todos los edificios." << endl;
    cout << "4. Demoler un edificio por coordenada." << endl;
    cout << "5. Mostrar mapa." << endl;
    cout << "6. Consultar coordenada." << endl;
    cout << "7. Mostrar inventario." << endl;
    cout << "8. Recolectar recursos producidos." << endl;
    cout << "9. Lluvia de recursos." << endl;
    cout << "10. Guardar y salir." << endl;
}

int ingresar_opcion() {
    int opcion;
    cout << endl << "Ingrese una opción: ";
    cin >> opcion;

    return opcion;
}

void procesar_opcion(Lista_Materiales* lista_materiales, Lista_Edificios* lista_edificios, int opcion) {
    system(CLR_SCREEN);
    switch (opcion) {
        case LISTAR_MATERIALES:
            listar_materiales();
            break;
        case EDIFICIOS_CONSTRUIDOS:
            listar_edificios_construidos();
            break;
        case LISTAR_EDIFICIOS:
            listar_edificios();
            break;
        case DEMOLER_EDIFICIO:
            demoler_edificio();
            break;
        case MOSTRAR_MAPA:
            mostrar_mapa();
            break;
        case CONSULTAR_COORDENADA:
            consultar_coordenada();
            break;
        case MOSTRAR_INVENTARIO:
            mostrar_inventario();
            break;
        case RECOLECTAR_RECURSOS:
            recolectar_recursos();
            break;
        case LLUVIA_RECURSOS:
            lluvia_recursos();
            break;
        case GUARDAR_Y_SALIR:
            guardar_y_salir();
            break;
        default:
            cout << "Error! Opción inválida." << endl;
    }
}

bool es_opcion_valida(int opcion_elegida) {
    return (opcion_elegida >= OPCION_MINIMA && opcion_elegida <= OPCION_MAXIMA);
}