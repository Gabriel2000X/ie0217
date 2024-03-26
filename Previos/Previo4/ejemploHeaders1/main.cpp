// Archivo main donde se realiza el trabajo utilizando los demás archivos

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
#include <iostream> 

/* Se incluye el archivo .hpp que contiene
las declaraciones de las funciones, clases y atributos*/
#include "persona.hpp"

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;


int main() {

    /* Se crea una instancia de la clase Persona con sus respectivos atributos */
    Persona p("Juan", 25);
    cout << "Nombre: " << p.getNombre() << endl;
    cout << "Edad: " << p.getEdad() << endl;

    /* Se accesa a setEdad y se cambia su valor, cabe destacar que se cambia 
    la edad a base de setEdad porque edad es un atributo privado, por lo que 
    se cambia mediante un método de la misma clase, pero no mediante p.edad  */ 
    p.setEdad (26);

    cout << "Nueva edad: " << p.getEdad() << endl; return 0;
}