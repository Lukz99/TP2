#include <iostream>
#include <fstream>
#include <string>
#include "edificio.h"
#include "lista_edificios.h"

using namespace std;

void Lista_Edificios::cargar_edificios(Lista_Edificios* lista_edificios) {

    lista_edificios -> cantidad_de_edificios = 0;

    fstream archivo_edificios(PATH_EDIFICIOS, ios::in);

    if(!archivo_edificios.is_open()) {
        cout << "Error al abrir edificios.txt";
    }
    string nombre_edificio, piedra, madera, metal, maxima_cantidad_permitidos;
    Edificio* edificio;

    while (archivo_edificios >> nombre_edificio) {
        archivo_edificios >> piedra; archivo_edificios >> madera; archivo_edificios >> metal;
        archivo_edificios >> maxima_cantidad_permitidos;
        edificio = new Edificio(nombre_edificio,stoi(piedra), stoi(madera),
                                stoi(metal), stoi(maxima_cantidad_permitidos));
        agregar_edificio(lista_edificios, edificio);

    }
    archivo_edificios.close();
}

Lista_Edificios::Lista_Edificios(Edificio **edificios, int cantidad_de_edificios) {
    this -> edificios = edificios;
    this -> cantidad_de_edificios = cantidad_de_edificios;
}
