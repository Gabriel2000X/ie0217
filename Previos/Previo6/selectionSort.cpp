/*Este es un ejemplo de slection sort en c++*/
#include <iostream> 
using namespace std;

/*Se define una función void que utiliza punteros 
enteros para intercambiar el valor de las variables
enteras a las que apuntan los punteros, se guarda el 
valor al que apunta el puntero a en temp, luego se 
guarda el valor al que apunta el puntero b en a, 
luego se guarda el variable de temp en b, y como temp
era a entonces se guarda el valor al que apuntaba a en 
b. */ 
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/*Se define una función que recibe el arreglo entero
y la longitud del arreglo e imprime el arreglo
utilizando un ciclo for.*/
void printArray(int array[], int size) {
    
    for (int i = 0; i < size; i++) {

        cout << array[i] <<  " ";
    }
    
    cout << endl;
}


/*Se define la función selectionSort para implementar el 
algoritmo, esta función recibe el arreglo de enteros y 
la longitud del arreglo*/
void selectionSort (int array[], int size) {

    /*Se itera desde cero hasta la longitud del arreglo -1 y
    se declara el indice menor en min_idx como el valor en 
    el que se empieza el paso o step.*/
    for (int step = 0; step < size - 1; step++) { 
        int min_idx = step;
    
        /* Luego se itera desde paso -1 hasta la i que es menor
        que la longitud del arreglo.*/
        for (int i = step + 1; i < size; i++) {

            
            /*Se selecciona el elemento menor del arreglo, por lo que
            la condición se activa si el actual es menor que el siguiente
            y si esto pasa min_idx se convierte en el valor actual de entrada
            sobre el que se está iterando.*/
            if (array[i] < array[min_idx])
                min_idx = i;

        }

        /*Se intercambian el primero y el último 
        elemento del arreglo*/
        swap (&array[min_idx], &array[step]);

    }
}


// driver code
int main() {

/*Se define el arreglo*/
int data[] = {20, 12, 10, 15, 2};

/*Se calcula la longitud del arreglo y se utiliza la función
del algoritmo para acomodar el arreglo.*/
int size = sizeof(data) / sizeof(data[0]); 
selectionSort(data, size);

/*Se imprime el arreglo con la función printArray.*/
cout << "Sorted array in Acsending Order: \n"; 
printArray(data, size);

}