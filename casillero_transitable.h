#ifndef TP2_CASILLERO_TRANSITABLE_H
#define TP2_CASILLERO_TRANSITABLE_H

class Casillero_Transitable : public Casillero {
    //Atributos
private:

    //Metodos
public:
    void tipo_casillero() = 0;
    void mostrar();

};

#endif //TP2_CASILLERO_TRANSITABLE_H
