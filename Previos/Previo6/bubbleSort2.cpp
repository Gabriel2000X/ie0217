
/*Este ejemplo consiste en un algoritmo optimizado de bubbleSort*/
#include <iostream>
using namespace std;

/*Se crea una función para realizar el bubbleSort que utiliza dos 
argumentos, un arreglo de enteros y una variable entera que es
la longitud del arreglo.*/
void bubbleSort(int array[], int size) {

    /*Se utiliza un primer ciclo for para acceder a los elementos del arreglo*/
    for (int step = 0; step < (size-1); ++step) {

        /*Se define una variable entera y se le da un valor de cero,
        para verificar si se ha hecho un intercambio*/
        int swapped = 0;

        /*Se define otro ciclo for, este se define para comparar dos 
        elementos*/
        for (int i = 0; i < (size-step-1); ++i) {
            
            

            /*Se utiliza un if para verificar si la entrada actual del arreglo es mayor
            que la entrada siguiente*/ 
            if (array[i] > array[i + 1]) {

                /*Se intercambian los valores utilizando
                una variable temporal para almacenar la entrada 
                actual del arreglo, luego se le asigna el valor 
                de la siguiente entrada a la entrada actual, luego
                se almacena el valor de temp en la entrada siguiente,
                esto termina el intercambio, además se le da un valor de 
                1 a la variable swapped.*/
                int temp = array[i];

                array[i] = array[i + 1];

                array[i + 1] = temp;

                swapped = 1;
            }
        }

/*si no hay intercambio entonces la variable swapped se queda en cero, 
si se llega hasta esta sección del código con swapped igual a cero el 
ciclo se rompe porque ya estaría ordenado el arreglo.*/

        if (swapped == 0)
            break;
    }
}



/*Se define una función para imprimir 
el arreglo, se recibe el arreglo luego 
de haberlo ordenado y además su longitud,
se utiliza un for para recorrerlo e imprimirlo*/
void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i) {

        cout << " " << array[i];

    }
    
    cout << "\n";
}


int main() {

    /*Se declara el arreglo*/
    int data[] = {-2, 45, 0, 11, -9};

    /*Se calcula la longitud del arreglo y se almacena
    en size*/
    int size = sizeof(data) / sizeof(data[0]);

    /*Se utiliza bubbleSort con el arreglo y la longitud de
    argumento*/
    bubbleSort(data, size);

    /*Se imprime el arreglo*/
    cout << "Sorted Array in Ascending Order: \n"; 
    printArray(data, size);

}