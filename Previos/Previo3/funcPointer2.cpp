// ejemplo de utilización de punteros con funciones

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
#include <iostream>

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;

/* se le pasan los parámetros a la función por su referencia
o espacio en memoria utilizando el ampersand*/
void swap(int &n1, int &n2) {
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

/* Se define la función main que 
será la función principal del programa */
int main() {


/* Se inicializan las variables enteras a y b. */
int a = 1, b = 2;

/* Se imprimen las variables a y b antes de intercambiarlas */
cout << "Antes del intercambio" << endl; 
cout << "a = " << a << endl;
cout << "b = " << b << endl;
 
/* Se realiza el intercambio de las variables a y b, no es necesario
usar el ampersand para pasarlas a la hora de invocar la función ya que
la función en si accede a su referencia*/ 
swap(a, b);

/* Se imprimen las variables a y b después de intercambiarlas */
cout << "\nLuego del intercambio" << endl; 
cout << "a = " << a << endl;
cout << "b = "<<b<< endl; 

/* se retorna un valor entero de cero finalizando
la función main */
return 0;

}