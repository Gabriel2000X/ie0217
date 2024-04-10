
/* Este ejemplo consiste en el uso de insertion sort*/
#include <iostream> 
using namespace std;

/* Se define una función que recibe el array y su 
longitud e imprime el arreglo entrada por entrada
utilizando un ciclo for.*/
void printArray(int array[], int size) {

    for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
    
    }

    cout << endl;
}

/* Se define una función que aplica el algoritmo 
al arreglo, recibe el arreglo y su longitud*/

void insertionSort(int array[], int size) {

    /* Se recorre el arreglo con un ciclo for desde el 
    paso 1 hasta el paso con el valor anterior al de
    la longitud del arreglo*/
    for (int step = 1; step < size; step++) {
        
        /*Se define el key como el elemento del arreglo
        del número de paso en el que se está.*/
        int key = array[step];
        
        /*Se define j como step -1*/
        int j = step - 1;

        // Compare key with each element on the left of it until an element smaller than 
        // it is found.
        // For descending order, change key<array[j] to key>array[j].

        /*Se compara key con los elementos de la izquierda, el ciclo sigue
        mientas key sea menor que el arreglo en la posición j, osea la posición 
        del step -1 y que además j sea mayor o igual a cero*/

    while (key < array[j] && j >= 0) {

        /*Se declara el valor de la entrada siguiente como el de j
        y se le resta 1 a j */
        array[j+1] = array[j];
        --j;
    }

    /*Fuera del ciclo while se declara la entrada siguiente como key para volver a iniciar el ciclo
    con el siguiente valor*/
    array[j+1] = key;
    
    }
}


// Driver code 

int main() {

/*Se define el arreglo*/
int data[] = {9, 5, 1, 4, 3};

/*Se calcula la longitud del arreglo*/
int size = sizeof(data) / sizeof(data[0]); 

/*Se utiliza la función para ordenar el arreglo 
con el algoritmo*/
insertionSort(data, size);

/*Se imprime el arreglo utilizando la función printArray*/
cout << "Sorted array in ascending order:\n"; 
printArray(data, size);

}