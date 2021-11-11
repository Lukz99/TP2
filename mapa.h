#ifndef MAPA_H
#define MAPA_H

#include <string>


class Mapa {
    // Atributos
private:
    int filas;
    int columnas;
    std::string matrizMapa;
    //std::string matrizMapa[filas][columnas];


    // Metodos
public:

    // PRE: Los parametros deben ser validos.
    // POST: Crea un objeto Mapa.
    Mapa();

    // PRE:
    // POST: Destruye un objeto Mapa
    ~Mapa();

    // PRE: Recibe una ruta de archivo valida.
    // POST: Se carga el mapa
    void cargarMapa(std::string rutaArchivo, int menu);

    // PRE: Ninguna
    // POST: Imprime por pantalla el mapa
    void mostrarMapa();

};


#endif