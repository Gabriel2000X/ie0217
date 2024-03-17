// Ejemplo de uso de punteros con arreglos
/* */

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
# include <iostream>

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;


/* Se define la función main que 
será la función principal del programa */
int main() {  
    
    /* Se crea un arreglo con entradas flotantes con longitud 3 */
    float arreglo[3];

    /* Se declara la variable *puntero que es un puntero flotante */
    float *puntero;
    cout << "Displaying adress using arrays: "  << endl;

    /* Se utiliza un ciclo for para recorrer el arreglo e imprimir
    las direcciones de memoria de los elementos, utilizando cout se imprime
    la posición del arreglo y su dirección en memoria. */
    for (int i = 0; i < 3; ++i) {
        cout << " &arreglo[" << i << "] = "  << &arreglo[i] <<  endl;
    }
    
    puntero = arreglo;

    cout << "\nDisplaying adress using pointers: "  << endl;
        
    /* Se utiliza un ciclo for para recorrer el arreglo e imprimir
    las direcciones de memoria de los elementos, utilizando cout se imprime
    el puntero sumado al numero actual del for, esto debe dar las mismas
    direcciones de memoria que el método anterior . */
    for (int i = 0; i < 3; ++i) {
        cout << " puntero + " << i << " = "  << puntero + i <<  endl;
    }

    /* se retorna un valor entero de cero finalizando
    la función main */
    return 0;
}