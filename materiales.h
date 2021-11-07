#ifndef TP2_MATERIALES_H
#define TP2_MATERIALES_H
#include <string>

const std::string PATH_MATERIALES = "../materiales.txt";

class Material {
    //Atributos

protected:

    std::string nombre_material;
    int cantidad_material;

    //Metodos

public:
    //virtual void mostrar() = 0;

    // PRE: Los parametros deben ser validos
    // POST: Crea un objeto Material
    Material(std::string nombre_material, int cantidad_material);

    // Precondiciones: ninguna
    // Postcondiciones: Destruye un objeto Material
    ~Material();



};




#endif //TP2_MATERIALES_H
