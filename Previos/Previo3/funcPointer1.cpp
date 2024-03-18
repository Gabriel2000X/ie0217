// ejemplo de utilización de punteros con funciones

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
#include <iostream>

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;

/* Se define la función swap que intercambia los números n1 y n2
mediante el uso de punteros, los argumentos que recie deben ser
punteros enteros */
void swap(int* n1, int* n2) {
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
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
 
/* Se imprimen las direcciones de memoria de a y b con ampersand
y se invoca la función swap con los argumentos &a y &b, que se 
refieren a las direcciones de memoria de cada variable, sin embargo
como se utiliza *variable en la función, se puede acceder a los elementos
almacenados en esas direcciones de memoria. */
cout << "&a = " << &a << endl;
cout << "&b = " << &b << endl; 
swap(&a, &b);

/* Se imprimen las variables a y b después de intercambiarlas */
cout << "\nLuego del intercambio" << endl; 
cout << "a = " << a << endl;
cout << "b = "<<b<< endl; 

/* se retorna un valor entero de cero finalizando
la función main */
return 0;

}