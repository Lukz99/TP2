#include "materiales.h"

using namespace std;

Material::Material(string nombre_material, int cantidad_material) {
    this-> nombre_material = nombre_material;
    this-> cantidad_material = cantidad_material;
}

Material::~Material() {

}