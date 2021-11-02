#include <iostream>
#include <fstream>
#include "lista_materiales.h"
#include "materiales.h"

using namespace std;

void Lista_Materiales::cargar_materiales(Lista_Materiales* lista_materiales) {
    lista_materiales -> cantidad_de_materiales = 0;


    fstream archivo_materiales(PATH_MATERIALES, ios::in);


    if (!archivo_materiales.is_open()) {
        cout << "Error al abrir materiales.txt";
    }
    string nombre_material, cantidad_material;
    Material* material;


    while (archivo_materiales >> nombre_material) {
        archivo_materiales >> cantidad_material;

        material = new Material(nombre_material, stoi(cantidad_material));

        agregar_material(lista_materiales, material);
    }

    archivo_materiales.close();
}


void Lista_Materiales::listar_materiales(Lista_Materiales* lista_materiales) {
    cout << endl << endl << "Lista de Materiales de Construccion" << endl;

    for(int i = 0; i < lista_materiales -> cantidad_de_materiales; i++){
        cout << endl;
        cout << "Nombre del material: " << lista_materiales -> materiales[i] -> nombre_material << endl;
        cout << "Stock del material: " << lista_materiales -> materiales[i] -> cantidad_material << endl;
    }
}

Material::Material(string nombre_material, int cantidad_material){
    this-> nombre_material = nombre_material;
    this-> cantidad_material = cantidad_material;
}
