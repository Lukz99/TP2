#include "edificio.h"
#include <string>

using namespace std;

Edificio :: Edificio(string nombreEdificio, int piedra, int madera, int metal, int maximo) {
    this -> nombreEdificio  = nombreEdificio;
    this -> piedra           = piedra;
    this -> madera            = madera;
    this -> metal           = metal;
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

int Edificio:: verMaximo() {
    return this -> maximo;
}

Edificio:: ~Edificio() {}