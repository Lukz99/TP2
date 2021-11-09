#include "edificio.h"
#include <string>

using namespace std;

Edificio :: Edificio(string nombreEdificio, int piedra, int madera, int metal, int cantidad, int maximo) {
    this -> nombreEdificio  = nombreEdificio;
    this -> piedra           = piedra;
    this -> madera            = madera;
    this -> metal           = metal;
    this -> cantidad        = cantidad;
    this -> maximo             = maximo;
}

string Edificio:: verNombreEdificio() {
    return this -> nombreEdificio;
}

int Edificio:: verPiedra() {
    return this -> piedra;
}

int Edificio:: verMadera() {
    return this -> madera;
}

int Edificio:: verMetal() {
    return this -> metal;
}

int Edificio:: verCantidad() {
    return this -> cantidad;
}

void Edificio::aumentarCantidad() {
    this -> cantidad++;
}

void Edificio:: aumentarCantidad(int cantidad) {
    this -> cantidad = this -> cantidad + cantidad;
}

void Edificio::decrementarCantidad() {
    this -> cantidad--;
}

void Edificio:: decrementarCantidad(int cantidad) {
    this -> cantidad = this -> cantidad - cantidad;
}

int Edificio:: verMaximo() {
    return this -> maximo;
}

Edificio:: ~Edificio() {}