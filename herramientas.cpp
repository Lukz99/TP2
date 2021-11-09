#include "herramientas.h"
#include <iostream>

using namespace std;

void showMenu(){

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

void selectedOption(Ciudad &Ciudad, int opcion){
    switch (opcion) {
        case 1:
            Ciudad.agregarEdificio();
            break;
        case 2:
            Ciudad.mostrarEdificiosConstruidos();
            break;
        case 3:
            Ciudad.mostrarEdificios();
            break;
        case 4:
            Ciudad.borrarEdificio();
            break;
        case 5:
            // FALTA: Ciudad.mostrarMapa();
        case 6:
            // FALTA: Ciudad.consultarCoordenada();
        case 7:
            Ciudad.mostrarMateriales();
            break;
    }
}