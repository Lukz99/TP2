#include "mapa.h"
#include <string>
#include <fstream>
#include <iostream>

using namespace std;
/*
Mapa ::Mapa(string matrizMapa[][]) : matrizMapa(matrizMapa) {

}
 */
Mapa :: Mapa() {}

Mapa :: ~Mapa() {}

void Mapa :: cargarMapa(string rutaArchivo) {

    string terreno;
    string mapa; //NO SE ESTAN USANDO
    string linea; // NO SE ESTAN USANDO


    ifstream archivo(rutaArchivo);

    archivo >> filas >> columnas;
    string matriz[filas + 1][columnas + 1];

    if (!archivo)
        cout << "Archivo mapa no encontrado" << endl;
    else {
        for (int i = 1; i <= filas; i++) {
            for (int j = 1; j <= columnas; j++) {
                archivo >> terreno;
                matriz[i][j] = terreno;
                cout << "|||| fila: " << i << " | columna: " << j << " |contenido: " << matriz[i][j] << endl << endl;
            }
        }

    }

}

void Mapa :: mostrarMapa() {
    for (int i = 1; i <= filas; i++) {
        for (int j = 1; j <= columnas; j++) {
            //cout << "|||| fila: " << i << " | columna: " << j << " |contenido: " << matrizMapa[i][j] << endl << endl; NO IMPRIME
        }
    }
}
