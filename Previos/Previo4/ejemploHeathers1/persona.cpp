//Archivo donde se definen la clase y sus atributos

/* Se incluye el archivo .hpp que contiene
las declaraciones de las funciones, clases y atributos*/
#include "persona.hpp" 

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;

/* Se define la clase Persona y sus atributos
utilizando la notación this->, que hace referencia a la
clase Persona, se especifica a que clase pertenecen
los métodos, se utilizan los :: para especificar a que 
clase pertenecen. */
Persona::Persona (string nombre, int edad) { 
    
    this->nombre = nombre;
    this->edad = edad;

}

string Persona::getNombre() { 
    return nombre;
}
int Persona::getEdad() {

    return edad;
}
void Persona::setEdad (int edad) { 
    this->edad = edad;
}