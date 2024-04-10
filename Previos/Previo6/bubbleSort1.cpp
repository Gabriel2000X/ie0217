/*Se incluye iostream y se declara namespace std*/
# include <iostream>
using namespace std;


/*Se declara una función tipo void y se declara con un argumento 
arrelgo entero y otro entero que representa la longitud del arreglo.*/
void bubbleSort (int array[], int size) {

    /*Se declara un ciclo for para accesar cada elemento del 
    arreglo.*/ 
    for (int step = 0; step < size; ++step) {

        /*Se declara un ciclo for para poder comparar 
        cada elemento del arreglo*/ 

        /*Se modifica el for del original de la presentación, 
        utilizando size - step -1, de esta manera si se ordena
        la lista completa y se mantienen los valores, con solo 
        size - step se perdió el 45 cuando se probó el programa.*/
        for (int i = 0; i < size - step- 1; ++i) {

            /*Se utiliza un if para ordenar los elementos en forma
            ascendente, la condición se cumple si la entrada actual es
            menor que la siguiente entrada del arreglo.*/
            if (array[i] > array[i + 1]) {

                /*Los elementos se intercambian si 
                la condición se cumple guardando el 
                actual en la variable temp, declarando 
                el valor del siguiente en el actual
                y declarando el valor de temp en el
                siguiente, el valor de temp era el de 
                la entrada actual*/
                int temp = array[i];
                array[i] = array[i + 1]; 
                array[i + 1] = temp;
            }
        }
    }
}

/*Se declara una función tipo void que recibe el 
arreglo y además recibe su tamaño, sin embargo para
cuando lo recibe el arreglo ya tiene los valores en orden.*/
void printArray(int array[], int size) {

    /*Se ordena imprimen las entradas del arreglo mediante 
    un ciclo for.*/
    for (int i = 0; i < size; ++i) {

        cout << " "<< array[i];

    }

    cout << "\n";
}


int main() {

/*Se define el arreglo int data en desorden*/
int data[] = {-2, 45, 0, 11, -9};

/*Se obtiene el largo del arreglo y se 
almacena en int size*/
int size = sizeof(data) / sizeof(data[0]);

/*Se invoca la función bubbleSort con el arreglo y su longitud*/
bubbleSort(data, size);

/*Se imprime el arreglo ordenado mediante printArray*/
cout << "Sorted Array in Ascending Order: \n"; 
printArray(data, size);

}