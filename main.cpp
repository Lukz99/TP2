#include "Ciudad.h"
#include "herramientas.h"
#include <iostream>

using namespace std;

const string PATH_MATERIALES = "../materiales.txt";
const string PATH_EDIFICIOS = "../edificios.txt";
const string PATH_UBICACIONES = "../ubicaciones.txt";
const string PATH_MAPAS = "../mapa.txt";
const int SALIR_Y_GUARDAR = 6;

int main() {

    Ciudad Ciudad;

    Ciudad.cargarEdificios(PATH_EDIFICIOS);
    Ciudad.cargarMateriales(PATH_MATERIALES);

    cout << "Elija una opcion:" << endl;

    // Ingresar una opcion valida
    int opcion;
    do {
        mostrarMenu();
        cout << "Opcion: ";
        cin >> opcion;
        opcionValida(Ciudad, opcion);
    } while (opcion != SALIR_Y_GUARDAR);

    Ciudad.guardarEdificios(PATH_EDIFICIOS);
    Ciudad.guardarMateriales(PATH_MATERIALES);

    return 0;
}