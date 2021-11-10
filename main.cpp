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

    Ciudad.cargarMateriales(PATH_MATERIALES);
    Ciudad.cargarEdificios(PATH_EDIFICIOS);
    Ciudad.cargarUbicaciones(PATH_UBICACIONES);

    Mapa mapa;
    mapa.cargarMapa(PATH_MAPA);
    // Ciudad.cargarMapa(PATH_MAPA); NO VA MAS

    // Ingresar una opcion valida
    int opcion;
    do {
        mostrarMenu();
        cout << endl << "Ingrese una opción: ";
        cin >> opcion;
        opcionValida(Ciudad, opcion);
    } while (opcion != GUARDAR_Y_SALIR);

    Ciudad.guardarMateriales(PATH_MATERIALES); //habria que agregarlos a una unica funcion
    Ciudad.guardarEdificios(PATH_EDIFICIOS); //habria que agregarlos a una unica funcion

    return 0;
}