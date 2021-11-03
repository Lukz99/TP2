#ifndef TP2_MATERIALES_H
#define TP2_MATERIALES_H

const std::string PATH_MATERIALES = "../materiales.txt";

class Material {
    //Atributos

protected:

    std::string nombre_material;
    int cantidad_material;

    //Metodos

public:
    // PRE: Los parametros deben ser validos
    // POST: Crea un objeto Material
    Material(std::string nombre_material, int cantidad_material);


};




#endif //TP2_MATERIALES_H
