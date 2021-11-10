#include "material.h"
#include <string>

using namespace std;

Material :: Material(string nombreMaterial, int cantidad) {
    this -> nombreMaterial = nombreMaterial;
    this -> cantidad = cantidad;
}

Material :: ~Material() {}

string Material :: verNombreMaterial() {
    return this -> nombreMaterial;
}

int Material :: verCantidad() {
    return this -> cantidad;
}

void Material :: incrementarCantidad() {
    this -> cantidad++;
}

void Material :: incrementarCantidad(int cantidad) {
    this -> cantidad += cantidad;
}

void Material :: decrementarCantidad() {
    this -> cantidad--;
}

void Material :: decrementarCantidad(int cantidad) {
    this->cantidad -= cantidad;
}
