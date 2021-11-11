#include <iostream>
#include "ciudad.h"
#include "herramientas.h"
#include "mapa.h"


using namespace std;

const string PATH_MATERIALES = "../materiales.txt";
const string PATH_EDIFICIOS = "../edificios.txt";
const string PATH_UBICACIONES = "../ubicaciones.txt";
const string PATH_MAPA = "../mapa.txt";

int main() {

    Ciudad Ciudad;
    Mapa mapa;

    Ciudad.cargarMateriales(PATH_MATERIALES);
    Ciudad.cargarEdificios(PATH_EDIFICIOS);
    Ciudad.cargarUbicaciones2(PATH_UBICACIONES);

    mapa.cargarMapa(PATH_MAPA,0);
    // Ciudad.cargarMapa(PATH_MAPA); NO VA MAS

    // Ingresar una opcion valida
    int opcion;
    do {
        mostrarMenu();
        cout << endl << "Ingrese una opcion: ";
        cin >> opcion;
        opcionValida(Ciudad, mapa, opcion);
    } while (opcion != GUARDAR_Y_SALIR);

    Ciudad.guardarMateriales(PATH_MATERIALES);
    Ciudad.guardarEdificios(PATH_EDIFICIOS);

    return 0;
}