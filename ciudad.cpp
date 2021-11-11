#include "ciudad.h"
#include <string>
#include <fstream>

using namespace std;

Ciudad :: Ciudad(){
    this -> cantidadEdificios = 0;
    this -> cantidadMateriales = 0;
}

void Ciudad :: mostrarMateriales(){
    cout << endl << "--------------------" << endl << endl;
    cout << "Materiales de construcción: " << endl;
    for (int i = 0; i < this -> cantidadMateriales; i++) {
        cout << "- " << this -> materiales[i]-> verNombreMaterial() << " - " << this -> materiales[i] -> verCantidad() << endl;
    }
    cout << endl << "--------------------" << endl << endl;
}
/* ARREGLAR COMO VEMOS LA CANTIDAD DE EDIFICIOS
void Ciudad :: mostrarEdificiosConstruidos() {
    cout << endl << "--------------------" << endl << endl;
    cout << "Edificios construidos: " << endl;

    if(! this -> cantidadEdificios)
        cout << "No hay edificios construidos." << endl;

    for (int i = 0; i < this->cantidadEdificios; i++) {
        if (this -> edificios[i] -> verCantidad() > 0) {
            cout << "# " << this -> edificios[i] -> verNombreEdificio();
            cout << " (Construidos: " << this -> edificios[i] -> verCantidad() << ")" << endl;
        }
    }
    cout << endl << "--------------------" << endl << endl;
}
 */

void Ciudad :: mostrarEdificios() {
    cout << endl << "--------------------" << endl << endl;
    cout << "Edificios: " << endl;

    for(int i = 0; i < this->cantidadEdificios; i++){
        cout << "-> " << (i+1) << ": " << this -> edificios[i] -> verNombreEdificio() << endl;
        //cout << "Construidos: " << this -> edificios[i]-> verCantidad() << " (";
        //cout << (this -> edificios[i] -> verMaximo() - this -> edificios[i] -> verCantidad()) << " para el maximo permitido) " << endl;
        cout << endl;
    }
    cout << "--------------------" << endl << endl;
}

/*
bool Ciudad :: agregarEdificio() {
    string nombre, confirmacion;
    int posicion;

    posicion = edificioExistePorNombre();
    if (posicion == -1) return false;

    if (! puedeConstruirseSegunMateriales(posicion) || ! puedeConstruirseSegunMaximo(posicion)) return false;

    cout << "Escribe 'si' para confirmar: ";
    cin >> confirmacion;

    if (confirmacion == "si") {
        this -> edificios[posicion] -> aumentarCantidad();
        borrarMateriales(posicion);
        cout << "Confirmado" << endl;
    } else {
        cout << "Cancelado" << endl;
    }

    return (confirmacion == "si");
}

bool Ciudad :: demolerEdificio(){
    string name, confirmacion;
    int posicion;

    posicion = edificioExistePorNombre();
    if (posicion == -1) return false;

    cout << "Escribe 'si' para confirmar: ";
    cin >> confirmacion;

    if(confirmacion == "si"){
        this -> edificios[posicion] -> decrementarCantidad();
        this -> cantidadEdificios--;
        agregarMateriales(posicion);
        cout << "Confirmado" << endl;        
    } else {
        cout << "Cancelado" << endl;
    }

    return (confirmacion == "si");
}

int Ciudad :: edificioExistePorNombre(){
    string nombreEdificio;
    bool existe = false;
    int posicion = -1, contador = 0;

    cout << "Ingrese el nombre: ";
    cin >> nombreEdificio;

    while(!existe && contador < this -> cantidadEdificios){
        existe = (this -> edificios[contador] -> verNombreEdificio() == nombreEdificio);
        if(existe) posicion = contador;
        contador++;
    }

    if(posicion == -1) cout << "Error: El edificio ingresado es invalido" << endl;
    return posicion;
}

bool Ciudad :: puedeConstruirseSegunMateriales (int posicion) {
    bool cantidadPiedra = false, cantidadMadera = false, cantidadMetal = false;
    int contador = 0;

    while((!cantidadPiedra || !cantidadMadera || !cantidadMetal) && contador < this -> cantidadMateriales){
        if (this -> materiales[contador]-> verNombreMaterial() == "piedra")
            cantidadPiedra = (this -> materiales[contador] -> verCantidad() >= this -> edificios[posicion] -> verPiedra());

        if (this -> materiales[contador]-> verNombreMaterial() == "madera")
            cantidadMadera = (this -> materiales[contador] -> verCantidad() >= this -> edificios[posicion] -> verMadera());

        if (this -> materiales[contador] -> verNombreMaterial() == "metal")
            cantidadMetal = (this -> materiales[contador] -> verCantidad() >= this -> edificios[posicion]-> verMetal());

        contador++;
    }

    if(!(cantidadPiedra && cantidadMadera && cantidadMetal)){
        cout << "Error: Los materiales no son suficientes para llevar a cabo la construccion" << endl;
    }

    return (cantidadPiedra && cantidadMadera && cantidadMetal);
}

bool Ciudad :: puedeConstruirseSegunMaximo (int posicion) {
    bool condicion = (this -> edificios[posicion] -> verCantidad() < this -> edificios[posicion] -> verMaximo());

    if (!condicion) cout << "Error: Este edificio ya se construyo lo maximo permitido en la ciudad" << endl;
    return condicion;
}
*/

void Ciudad :: borrarMateriales(int posicion) {
    for (int i = 0; i < this-> cantidadMateriales; i++){
        if (this ->materiales[i] -> verNombreMaterial() == "piedra")
            this -> materiales[i] -> decrementarCantidad(this->edificios[posicion] -> verPiedra());

        if (this ->materiales[i] -> verNombreMaterial() == "madera")
            this -> materiales[i] -> decrementarCantidad(this-> edificios[posicion] -> verMadera());

        if (this ->materiales[i] -> verNombreMaterial() == "metal")
            this -> materiales[i] -> decrementarCantidad(this-> edificios[posicion] -> verMetal());
    }
}

void Ciudad :: agregarMateriales (int posicion) {
    for(int i = 0; i < this -> cantidadMateriales; i++) {
        if (this -> materiales[i] -> verNombreMaterial() == "piedra")
            this -> materiales[i] -> incrementarCantidad(this -> edificios[posicion] -> verPiedra()/2);

        if (this -> materiales[i] -> verNombreMaterial() == "madera")
            this -> materiales[i] -> incrementarCantidad(this -> edificios[posicion] -> verMadera()/2);

        if (this -> materiales[i] -> verNombreMaterial() == "metal")
            this -> materiales[i] -> incrementarCantidad(this -> edificios[posicion] -> verPiedra()/2);
    }
}

// Ciudad:: Crea un Array dinámico temporal para dimensionar el actual, reemplazandolo y borrandolo.
void Ciudad :: crearEdificio(Edificio* edificio) {

    int cantidadEdificiosAnterior = this -> cantidadEdificios;

    Edificio** nuevoEdificio = new Edificio* [cantidadEdificiosAnterior + 1];

    for (int i = 0; i < cantidadEdificiosAnterior; i++) {
        nuevoEdificio[i] = this -> edificios[i];
    }

    nuevoEdificio[cantidadEdificiosAnterior] = edificio;

    if (this -> cantidadEdificios != 0) delete[] this -> edificios;

    this -> edificios = nuevoEdificio;
    this -> cantidadEdificios++;

}


void Ciudad:: crearMaterial(Material* material) {

    int cantidadMaterialesAnterior = this -> cantidadMateriales;

    Material** nuevoMaterial = new Material* [cantidadMaterialesAnterior + 1];

    for (int i = 0; i < cantidadMaterialesAnterior; i++){
        nuevoMaterial[i] = this -> materiales[i];
    }

    nuevoMaterial[cantidadMaterialesAnterior] = material;

    if (this -> cantidadMateriales != 0)
        delete[] this -> materiales;

    this -> materiales = nuevoMaterial;
    this -> cantidadMateriales++;
}

void Ciudad :: cargarEdificios (string rutaArchivo) {

    ifstream archivo(rutaArchivo);

    string nombreEdificio;
    int piedra, madera, metal, maximo, cantidad;

    while (archivo >> nombreEdificio >> piedra >> madera >> metal >> maximo) {
        crearEdificio(new Edificio(nombreEdificio, piedra, madera, metal, maximo));
   }

    archivo.close();
}

void Ciudad :: cargarMateriales(string rutaArchivo) {

    ifstream archivo(rutaArchivo);

    string nombreMaterial;
    int cantidad;

    if(!archivo)
        cout << "Archivo no encontrado"<< endl;
    else {
        while(archivo >> nombreMaterial >> cantidad) {
            crearMaterial(new Material(nombreMaterial, cantidad));
        }
    }
	archivo.close();
}

void Ciudad :: cargarUbicaciones2 (string rutaArchivo) {
    int cantidadEscuela, cantidadObelisco, cantidadFabrica, cantidadAserradero, cantidadMina, cantidadPlantaElectrica;
    ifstream archivo(rutaArchivo);
    string nombre;

    while (archivo >> nombre) {
        if (nombre == "planta") {
            //auxiliar2 = nombre;
            //archivo >> nombre >> fila >> columna;
            cantidadEscuela = cantidadEscuela + 1;
        } else if (nombre == "obelisco") {
            cantidadObelisco += 1;
        } else if (nombre == "fabrica") {
            cantidadFabrica += 1;
        } else if (nombre == "aserradero") {
            cantidadAserradero += 1;
        }  else if (nombre == "mina") {
             cantidadMina += 1;
        } else if (nombre == "planta") {
             cantidadPlantaElectrica += 1;
        }
    }
    archivo.close();
}



void Ciudad :: cargarUbicaciones (string rutaArchivo) {

    ifstream archivo(rutaArchivo);
    string nombreEdificio, auxiliar;
    int fila, columna;

    while (archivo >> nombreEdificio) {
        if (nombreEdificio == "planta") {
            //cout << "nombreEdificio es planta" << endl;
            auxiliar = nombreEdificio;
            archivo >> nombreEdificio;
            //cout << "auxiliar es planta (  -> " << auxiliar << "   ) y nombreEdificio es ->" << nombreEdificio << endl;
            nombreEdificio = auxiliar + " " +  nombreEdificio;
            //cout << "nombre completo queda: -> " << nombreEdificio << endl << "fin" << endl;
    }   else {
        archivo >> fila >> columna;
        cout << nombreEdificio <<"fila: " << fila << "|  columna: " << columna;
        }
    }

    archivo.close();
}


int Ciudad :: verCantidadEdificios() {
    return this -> cantidadEdificios;
}

int Ciudad :: verCantidadMateriales() {
    return this -> cantidadMateriales;
}

Edificio* Ciudad :: edificioPorPosicion(int posicion) {
    return this -> edificios[posicion];
}


Material* Ciudad :: verMaterialPorPosicion(int posicion) {
    return this -> materiales[posicion];
}

void Ciudad :: guardarEdificios(string rutaArchivo) {
    ofstream archivo(rutaArchivo);

    for (int i = 0; i < this->cantidadEdificios; i++){
        archivo << this -> edificios[i] -> verNombreEdificio() << " " <<
            this -> edificios[i] -> verPiedra() << " " <<
            this -> edificios[i] -> verMadera() << " " <<
            this -> edificios[i] -> verMetal() << " " <<
            this -> edificios[i] -> verMaximo() << "\n";
        delete this -> edificios[i];
    }

    delete [] this -> edificios;
	archivo.close();
}

void Ciudad::guardarMateriales(string rutaArchivo) {
    ofstream archivo(rutaArchivo);

    for (int i = 0; i < this -> cantidadMateriales; i++){
        archivo << this -> materiales[i]-> verNombreMaterial() << " " << this->materiales[i]->verCantidad() << '\n';
        delete this -> materiales[i];
    }

    delete [] this -> materiales;
	archivo.close();
}

Ciudad:: ~Ciudad() {}