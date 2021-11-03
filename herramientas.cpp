#include <iostream>
#include <fstream>
#include "herramientas.h"
#include "lista_materiales.h"
#include "lista_edificios.h"

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
    switch (opcion) {
        case 1:
            listar_materiales(lista_materiales);
            break;
        case 2:
            construir_edificio(lista_edificios, lista_materiales);
            break;
        case 3:
            listar_edificios_construidos(lista_edificios);
            break;
        case 4:
            listar_edificios(lista_edificios);
            break;
    }
}





void agregar_material(Lista_Materiales* lista_materiales, Material* material) {
    int anterior_tope = lista_materiales -> cantidad_de_materiales;
    Material** nuevo_vector_materiales = new Material*[anterior_tope + 1];

    for(int i = 0; i < lista_materiales -> cantidad_de_materiales; i++){
        nuevo_vector_materiales[i] = lista_materiales -> materiales[i];
    }
    nuevo_vector_materiales[anterior_tope] = material;

    if(lista_materiales -> cantidad_de_materiales != 0){
        delete[] lista_materiales -> materiales;
    }

    lista_materiales -> materiales = nuevo_vector_materiales;
    lista_materiales -> cantidad_de_materiales++;

}

void agregar_edificio(Lista_Edificios* lista_edificios, Edificio* edificio) {
    int anterior_tope = lista_edificios -> cantidad_de_edificios;
    Edificio** nuevo_vector_edificios = new Edificio*[anterior_tope + 1];

    for(int i = 0; i < lista_edificios -> cantidad_de_edificios; i++){
        nuevo_vector_edificios[i] = lista_edificios -> edificios[i];
    }
    nuevo_vector_edificios[anterior_tope] = edificio;

    if(lista_edificios -> cantidad_de_edificios != 0){
        delete[] lista_edificios -> edificios;
    }

    lista_edificios -> edificios = nuevo_vector_edificios;
    lista_edificios -> cantidad_de_edificios++;
}

void listar_materiales(Lista_Materiales* lista_materiales) {
    cout << endl << endl << "Lista de Materiales de Construccion" << endl;

    for(int i = 0; i < lista_materiales -> cantidad_de_materiales; i++){
        cout << endl;
        cout << "Nombre del material: " << lista_materiales -> materiales[i] -> nombre_material << endl;
        cout << "Stock del material: " << lista_materiales -> materiales[i] -> cantidad_material << endl;
    }
}

void listar_edificios_construidos(Lista_Edificios* lista_edificios) {
    cout << endl << endl << "\t" <<"Edificios construidos al menos una vez" << endl << endl;
    for (int i = 0; i < lista_edificios->cantidad_de_edificios; i++) {
        if (lista_edificios -> edificios[i] -> cantidad_construidos >= 1) {
            cout << "Nombre del edificio: " << lista_edificios -> edificios[i] -> nombre_edificio << endl;
            cout << "Hay " << lista_edificios -> edificios[i] -> cantidad_construidos << " edificios construidos de este tipo" << endl << endl;
        }
    }
}

void listar_edificios(Lista_Edificios* lista_edificios) {
    cout << endl << endl << "Edificios construidos" << endl;

    for(int i = 0; i < lista_edificios -> cantidad_de_edificios; i++){
        int diferencia = (lista_edificios -> edificios[i] -> maxima_cantidad_permitidos) - (lista_edificios -> edificios[i] -> cantidad_construidos);
        cout << endl;
        cout << "Nombre del edificio: " << lista_edificios -> edificios[i] -> nombre_edificio << endl;
        cout << "Piedra, madera y metal requeridos (respectivamente): " <<
        lista_edificios -> edificios[i] -> piedra << ", " <<
        lista_edificios -> edificios[i] -> madera << " y " <<
        lista_edificios -> edificios[i] -> metal << endl;
        cout << "Cantidad de " << lista_edificios -> edificios[i] -> nombre_edificio << "s construidos: " <<
        lista_edificios -> edificios[i] -> cantidad_construidos << endl;
        if (diferencia == 1) {
            cout << "Se puede construir un " << lista_edificios -> edificios[i] -> nombre_edificio << " mas" << endl;
        }
        if (diferencia == 0){
            cout << "No se pueden construir mas " << lista_edificios -> edificios[i] -> nombre_edificio << "s" << endl;
        }
        if (diferencia != 0 && diferencia != 1) {
            cout << "Se puede construir " << diferencia << " " << lista_edificios -> edificios[i] -> nombre_edificio << "s mas" << endl;
        }
    }
}

void construir_edificio(Lista_Edificios* lista_edificios, Lista_Materiales* lista_materiales) {
    string edificio_a_construir;
    const int PIEDRA = 0;
    const int MADERA = 1;
    const int METAL = 2;
    int materiales_suficientes = 0;
    int i = 0;
    int construido = 0;

    cout << endl << endl << "Ingrese nombre del edificio a construir: ";
    cin >> edificio_a_construir;



    while(i < lista_edificios -> cantidad_de_edificios && construido != 1) {

        if (((lista_edificios -> edificios[i] -> piedra) < (lista_materiales -> materiales[PIEDRA] -> cantidad_material))
            && ((lista_edificios -> edificios[i] -> madera) < (lista_materiales -> materiales[MADERA] -> cantidad_material))
            && ((lista_edificios -> edificios[i] -> metal) < (lista_materiales -> materiales[METAL] -> cantidad_material))) {
            materiales_suficientes = 1;
        }

        if (edificio_a_construir == lista_edificios -> edificios[i] -> nombre_edificio) {
            if ( (lista_edificios -> edificios[i] -> cantidad_construidos) < (lista_edificios -> edificios[i] -> maxima_cantidad_permitidos) ) {
                if (materiales_suficientes == 1) {
                    lista_edificios -> edificios[i] -> cantidad_construidos += 1;
                    construido = 1;
                } else {
                    construido = -1;
                }
            } else {
                construido = -1;
            }
        } else {
            construido = -1;
        }
        i++;
    }

    switch (construido) {
        case 1:
            cout << endl << '\t' << "Edificio " << edificio_a_construir << " construido correctamente" << endl;
            break;
        case -1:
            cout << "No se pudo construir el edificio";
            break;
    }

}



void liberar_memoria(Lista_Materiales* lista_materiales, Lista_Edificios* lista_edificios) {
    ofstream archivo_materiales(PATH_MATERIALES);
    ofstream archivo_edificios(PATH_EDIFICIOS);

    int cantidad_de_materiales = lista_materiales -> cantidad_de_materiales;
    int cantidad_de_edificios = lista_edificios -> cantidad_de_edificios;

    // Escritura en materiales.txt
    for(int i = 0; i < cantidad_de_materiales; i++){

        archivo_materiales <<
        lista_materiales -> materiales[i] -> nombre_material << ' ' <<
        lista_materiales -> materiales[i] -> cantidad_material  << '\n';

        delete lista_materiales -> materiales[i];
        lista_materiales -> cantidad_de_materiales--;
    }
    // Escritura en edificios.txt
    for(int i = 0; i < cantidad_de_edificios; i++){

        archivo_edificios <<
        lista_edificios -> edificios[i] -> nombre_edificio << ' ' <<
        lista_edificios -> edificios[i] -> piedra  << ' ' << lista_edificios -> edificios[i] -> madera << ' ' <<
        lista_edificios -> edificios[i] -> metal << ' ' << lista_edificios -> edificios[i] -> cantidad_construidos << ' ' <<
        lista_edificios -> edificios[i] -> maxima_cantidad_permitidos << '\n';

        delete lista_edificios -> edificios[i];
        lista_edificios -> cantidad_de_edificios--;
    }

    delete[] lista_materiales -> materiales;
    delete[] lista_edificios -> edificios;
    lista_materiales -> materiales = nullptr;
    lista_edificios -> edificios = nullptr;

}