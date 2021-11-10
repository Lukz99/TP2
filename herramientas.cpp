#include "herramientas.h"
#include "clear_screen.h"
#include "ciudad.h"
#include <iostream>

using namespace std;

void mostrarMenu(){
    cout << endl << '\t' << "¡Bienvenido a Andypolis!" << endl;
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

void opcionValida(Ciudad &Ciudad, int opcion){
    //system(CLR_SCREEN);
    switch (opcion) {
        case CONSTRUIR_EDIFICIO:
            //Ciudad.agregarEdificio();
            break;
        case EDIFICIOS_CONSTRUIDOS:
            //Ciudad.mostrarEdificiosConstruidos();
            break;
        case LISTAR_EDIFICIOS:
            //Ciudad.mostrarEdificios();
            break;
        case DEMOLER_EDIFICIO:
            //Ciudad.demolerEdificio();
            break;
        case MOSTRAR_MAPA:
            //Ciudad.mostrarMapa();
        case CONSULTAR_COORDENADA:
            // FALTA: Ciudad.consultarCoordenada();
        case MOSTRAR_INVENTARIO:
            Ciudad.mostrarMateriales();
            break;
        /*case RECOLECTAR_RECURSOS:
            Ciudad.recolectarRecursos();
            break;
        case LLUVIA_RECURSOS:
            Ciudad.lluviaDeRecursos();
        case GUARDAR_Y_SALIR:
            Ciudad.guardarYSalir();
            break; */
        case GUARDAR_Y_SALIR:
            break; //TEMPORAL
        default:
            cout << "Error! Opción inválida." << endl;
    }
}