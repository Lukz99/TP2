#ifndef CASILLERO_CONSTRUIBLE_H
#define CASILLERO_CONSTRUIBLE_H

class Casillero_Construible : public Casillero {
    //Atributos
private:

    //Metodos
public:
    void tipoCasillero() = 0;
    void mostrar();

};

#endif