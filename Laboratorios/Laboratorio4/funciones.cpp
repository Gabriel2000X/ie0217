#include "funciones.hpp"

/*Se recibe el arreglo y un entero que es la longitud de este arreglo*/
void bubbleSort(int arr[], int n) {
    
    /*Se utiliza un arreglo for para accesar a los
    elementos del arreglo (recorrer el arreglo)*/
    for (int i = 0; i < n - 1; ++i) {

        /*Se trabaja con un ciclo for para 
        interno para comparar los elementos 
        del arreglo */
        for (int j = 0; j < n - i - 1; ++j) {
            
            /*Si la entrada actual es mayor que la 
            entrada siguiente entonces se intercambian
            las entradas utilizando una variable temporal 
            para almacenar el valor de la entrada actual del
            arreglo, almacenando el valor de la siguiente entrada
            en la entrada actual y luego almacenando el valor de la 
            entrada actual en la entrada siguiente.*/
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

/*Se recibe el arreglo y un entero que es la longitud de este arreglo*/
void selectionSort(int arr[], int n) {
    
    /*Se tiene un ciclo for para recorrer el arreglo*/
    for (int i = 0; i < n - 1; ++i) {
        
        /*Se declara que el indice mínimo es el de la
        entrada actual i*/
        int min_index = i;
        /*Se utiliza un for interno para intercambiar las entradas 
        del arreglo*/
        for (int j = i + 1; j < n; ++j) {

            /*Se verifica si la entrada con el índice mínimo es
            mayor que la entrada actual y si esto pasa la entrada
            con el índice mínimo es la actual*/
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        /*Se utiliza intercambian las entradas con el método de 
        una variable temporal visto en el bubble sort*/
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

void insertionSort(int arr[], int n) {

    /*Se tiene un ciclo for que recorre el arreglo*/
    for (int i = 1; i < n; ++i) {
        
        /*Se elige un key que será el número que se compara 
        con los demás números y se declara que j es la entrada anterior*/
        int key = arr[i];
        int j = i - 1;
        /*Si j es mayor que cero y mayor que el key entonces se desplaza*/
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key; /*Se le asigna el valor de key a j+1 cuando ya no
        se necesita desplazar ningún otro elemento*/
    }
}


int partition(int arr[], int low, int high) {
    /*Se declara el elemento pivote*/
    int pivot = arr[high];
    int i = low - 1;
    /*Si arr[j] es menor que el pivote entonces
    su valor se intercambia con el valor 
    de  arr[i]*/
    for (int j = low; j < high; ++j) {
        if (arr[j] < pivot) {
            ++i;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    /*Se intercambia el pivote con arr[i+1] para dejarlo en la posición 
    correcta .*/
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    /*Retorna la posición del pivote*/
    return i + 1;
}


void quickSort(int arr[], int low, int high) {
    
    
    if (low < high) {

        /*partition devuelve la posición del pivote*/
        int pi = partition(arr, low, high);
        
        /*Se llama recursivamente a quicksort para ordenar ambos 
        lados del arreglo (antes y después del pivote)*/
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}



void generateRandomArray(int arr[], int n){ 

    /*Se declara la semilla que es la base mediante la cual 
    se empieza a generar números aleatorios.*/
    srand(time(0));

    /*Se declara que el arreglo debe tener 10000*/
    for (int i = 0; i < n; i++){

            arr[i] = rand() % 10000; 

        }

} 

/*Se crea una función para medir el tiempo en microsegundos que tardan los algoritmos 
en ordenar el arreglo generado*/
void measuringSortingTime(void(*sortingAlgorithm)(int[],int),int arr[], int n, string algorithmName ){ 

    /*Se declara un punto de partida para el tiempo*/
    high_resolution_clock::time_point start = high_resolution_clock::now();
    sortingAlgorithm(arr,n);
    /*Se declara un punto de parada para el tiempo*/
    high_resolution_clock::time_point stop = high_resolution_clock::now();
    /*Se declara una variable que guarda la duración del ordenamiento utilizando chrono*/
    std::chrono::microseconds duration = std::chrono::duration_cast<std::chrono::microseconds>(stop-start);

    /*Se imprime la duración en microsegundos*/
    cout<< "Tiempo de " << algorithmName << ": " << duration.count() << " mircosegundos" << endl;


}


void measureQuickSortTime(void(*sortingAlgorithm)(int[],int, int),int arr[], int low, int high, string algorithmName ){ 

    /*Se utiliza un algoritmo de medida de tiempo para quicksort que sigue una lógica similar a la de la 
    función anteriro.*/
    high_resolution_clock::time_point start = high_resolution_clock::now();
    sortingAlgorithm(arr,low,high);
    high_resolution_clock::time_point stop = high_resolution_clock::now();
    std::chrono::microseconds duration = std::chrono::duration_cast<std::chrono::microseconds>(stop-start);

    cout<< "Tiempo de " << algorithmName << ": " << duration.count() << " mircosegundos" << endl;



} 