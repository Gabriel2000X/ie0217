/**
 * @file  clasesYEstruct.hpp
 * @brief Se declara la clase agendaCel así como sus métodos y
 * atributos, además se define la estructura contacto.
 *
 * @author Gabriel González Rivera B93432
 * @date 15/4/2024
 * 
 * Licencia: MIT
 */


#include <string>
#include <iostream>

/*Se incluye unordered_map que proporciona una 
estructura de tabla hash*/
#include <unordered_map>

/*Se incluye cstdlib que funciona para poder utilizar malloc*/
#include <cstdlib>

#ifndef CLASESYESTRUCT_HPP
#define CLASESYESTRUCT_HPP 

using namespace std;

/*Se define la estructura contacto, es importante mencionar
que se tiene un atributo contacto puntero para enlazar la 
lista una vez que se construya.*/

/*Se declara la clase PaisEnDesarrollo que hereda de forma pública de Pais,
se define el constructor como único método público*/

/**
 * @brief Es la estructura que contiene los datos del nombre
 * y el número de cada contacto.
 * 
 * @param nombre es un string que guarda el nombre del contacto.
 * @param numero es un string que guarda el número del contacto.
 * @param siguiente es un contacto puntero que guarda la dirección de memoria
 * del siguiente objeto tipo contacto.
 * 
 * 
 * 
 */
struct contacto{ 


    string nombre;
    string numero;
    contacto* siguiente;

};


/*Se declara la clase agendaCel con la que se manejará la integración
de los datos de los contactos tanto a la lista como a la tabla*/

/**
 * @brief agendaCel es la clase principal del programa que maneja 
 * los contactos en base a una hash table y a una lista enlazada.
 * 
 */
class agendaCel {

/*Se declaran los atributos privados de la clase como un puntero de tipo 
contacto que apuntará al primer nodo de la lista, además se define una hashtable
del tipo unordered_map, se declara que las claves van a ser de tipo string
y el valor asociado a la clave será un contacto puntero.*/
private:
    contacto* primerNodo; 
    unordered_map<string, contacto*> tabla;

public:
    /*Se definen el constructor */ 
    agendaCel();

    /*El destructor se usará para liberar memoria*/
    ~agendaCel();

    
    void agregarContacto();
    void imprimirContactos(); 
    void actualizarTabla();
    void eliminarContacto();
    void imprimirCloud();
};


# endif //CLASESYESTRUCT_HPP