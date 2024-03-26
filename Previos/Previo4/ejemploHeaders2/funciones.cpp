// Archivo donde se define el funcionamiento de las funciones del ejemplo.

/* se incluye funciones.hpp, donde se tiene la declaración de las
funciones. */
# include "funciones.hpp" 

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
#include <iostream>

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;

/* Se define el funcionamiento de la función calculateAverage,
esta calcula el primedio de los dos valores de la clase estudiante 
que se le dan*/
void calculateAverage (Student s1, Student s2) { 
    
    double average = (s1.marks + s2.marks) / 2;
    cout << "Average Marks = " << average << endl;

}