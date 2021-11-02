#ifndef TP2_MATERIALES_H
#define TP2_MATERIALES_H



class Material {
    //Atributos

protected:
    const std::string PATH_MATERIALES = "../materiales.txt";
    std::string nombre_material;
    int cantidad_material;

    //Metodos

public:
    // PRE: Los parametros deben ser validos.
    // POST: Crea un objeto Material.
    Material(std::string nombre_material, int cantida_material);


};




#endif //TP2_MATERIALES_H
