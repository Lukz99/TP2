#ifndef TP2_CASILLERO_CONSTRUIBLE_H
#define TP2_CASILLERO_CONSTRUIBLE_H

class Casillero_Construible : public Casillero {
    //Atributos
private:

    //Metodos
public:
    void tipo_casillero() = 0;
    void mostrar();

};

#endif //TP2_CASILLERO_CONSTRUIBLE_H
