
// ejemplo de uso de recursividad con factoriales

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
#include <iostream> 

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;

/* Se crea un prototipo de función de tipo entero llamada factorial que recibe un entero
como argumento*/
int factorial(int);

/* Se define la función main que 
será la función principal del programa */
int main() {

    /* Se declaran las variables enteras n y result */
    int n, result;

    /* Se pide al usuario un número positivo y se almacena en n usando 
    cin */
    cout << "Ingrese un número que no sea negativo: "; 
    cin >> n;

    /* Se inicializa la variable result almacenando el valor de 
    factorial de n en ella. */
    result = factorial(n);
    cout<<"Factorial of " << n << " = " << result;

    /* se retorna un valor entero de cero finalizando
    la función main */
    return 0;
}

/* se define la función factorial que se llama a si misma en su cuerpo
para encontras los factoriales anteriores al actual y así construir el
factorial que se pide de manera recursiva si el número es positivo. */
int factorial (int n) {
    if (n > 1) {
        return n * factorial(n - 1);
    } 
    
    else {
    
    /* si el número es negativo se retorna un 1. */
    return 1;
    
    }
}
