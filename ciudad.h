#ifndef CIUDAD_H
#define CIUDAD_H

#include "material.h"
#include "edificio.h"
#include <string>

using namespace std;

class Ciudad {

    // Atributos
    private:
        Edificio** edificios;
        Material** materiales;

        int cantidadEdificios;
        int cantidadMateriales;
    
    // Metodos
    public:

        // PRE: Los parametros deben ser validos.
	    // POST: Crea un objeto Andypolis.
        Ciudad();

        // PRE:
        // POST: Destruye un objeto Andypolis.
        ~Ciudad();

        // PRE:
        // POST: Imprime una lista de Materiales en pantalla.
        void mostrarMateriales();

        // PRE:
        // POST: Imprime una lista de Edificios construidos en pantalla.
        void mostrarEdificiosConstruidos();

        // PRE:
        // POST: Imprime una lista de Edificios en pantalla.
        void mostrarEdificios();

        // PRE:
        // POST: Consulta el edificio por nombre e incrementa en 1
        bool agregarEdificio();

        // PRE:
        // POST: Consulta el edificio por nombre y disminuye en 1
        bool demolerEdificio();

        // PRE:
        // POST: Consulta por pantalla el nombre del Edificio y si existe retorna su posicion, de lo contrario -1.
        int edificioExistePorNombre();

        // PRE: Recibe una posicion valida.
        // POST: Devuelve True si el Edificio puede construirse en base a la cantidad de material.
        bool puedeConstruirseSegunMateriales(int posicion);
    
        // PRE: Recibe una posicion valida.
        // POST: Retorna TRUE si el Edificio puede construirse en base al maximo permitido.
        bool puedeConstruirseSegunMaximo(int posicion);

        // PRE: Recibe una posicion valida.
        // POST: Disminuye la cantidad de materiales en base a los materiales del Edificio de la posicion ingresada.
        void borrarMateriales(int posicion);

        // PRE: Recibe una posicion valida.
        // POST: Incrementa la cantidad de materiales en base a los materiales del Edificio de la posicion ingresada.
        void agregarMateriales(int posicion);

        // PRE: Recibe un objeto Material.
        // POST: Ingresa el objeto en un array dinámico.
        void crearEdificio(Edificio* edificio);

        // PRE: Recibe un objeto Material.
        // POST: Ingresa el objeto en un array dinámico.
        void crearMaterial(Material* material);

        // PRE: Recibe una ruta de archivo valida.
        // POST: Guarda cada linea en un objeto Building.
        void cargarEdificios(string rutaArchivo);

        // PRE: Recibe una ruta de archivo valida.
        // POST: Guarda cada linea en un objeto Material.
        void cargarMateriales(string rutaArchivo);

        void cargarMapa(string rutaArchivo);

        void cargarUbicaciones(string rutaArchivo);

        // PRE:
        // POST: Retorna la cantidad de Edificios.
        int verCantidadEdificios();

        // PRE:
        // POST: Retorna la cantidad de Materiales.
        int verCantidadMateriales();

        // PRE: Recibe una posicion valida.
        // POST: Retorna un objeto Edificio segun su posicion.
        Edificio* edificioPorPosicion(int posicion);

        // PRE: Recibe una posicion valida.
        // POST: Retorna un objeto Material segun su posicion.
        Material* verMaterialPorPosicion(int posicion);

        // PRE: Recibe una ruta de archivo valida.
        // POST: Guarda en dicho archivo todos los cambios producidos en el objeto Building,
        // Siguiendo el formato: nombre_edificio piedra madera metal maxima_cantidad_permitidos.
        void guardarEdificios(string rutaArchivo);

        // PRE: Recibe una ruta de archivo valida.
        // POST: Guarda en dicho archivo todos los cambios producidos en el objeto Material,
        // Siguiendo el formato: nombre_material cantidad_material.
        void guardarMateriales(string rutaArchivo);

};

#endif