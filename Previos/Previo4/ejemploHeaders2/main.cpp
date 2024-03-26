// Archivo pricipal del ejemplo

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
#include <iostream> 

/* se incluyen los archivos de encabezado creados */
#include "clases.hpp"
#include "funciones.hpp"


/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;



int main() {
    /* se crean las instancias de Student y se les da
    el argumento necesario */
    Student student1 (88.0), student2 (56.0);

    /* se invoca calulateAverage con los objetos de clase Student */
    calculateAverage (student1, student2);
    return 0;
}