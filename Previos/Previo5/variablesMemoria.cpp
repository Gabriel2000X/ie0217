
#include <iostream>

/*. Se almacena en el segmento de data, esto sucede
porque es una variable global declara fuera de funciones. */ 
int globalVariable = 42;

int main() {

    /*. Se almacena en el stack, esto porque es una variable local
    que se declara dentro de la función main. */
    int stackVariable = 10;

    /* Se almacena en el heap, esto debido a que se utiliza new, esto 
    hace que se devuelva un espacio para almacenar un entero y se 
    guarde en el heap. */
    int* heapVariable = new int(20);

    /*Este código se almacena en el text segment*/
    std::cout << "Valor de globalVariable: " << globalVariable << std::endl; 
    std::cout << "Valor de stackVariable:" << stackVariable << std::endl;
    std::cout << "Valor de heapVariable: " << *heapVariable << std::endl;

    /* Liberar la memoria asignada en el heap para que si luego
    otra parte del programa necesita el espacio de memoria que usaba
    heapVariable pueda usarlo. */
    delete heapVariable;


    return 0;
}

 