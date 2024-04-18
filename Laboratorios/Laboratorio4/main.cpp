#include "funciones.hpp"



int main(){ 

    /*Se declara la longitud del arreglo y el arreglo*/
    const int SIZE = 10000;
    int arr  [SIZE];

    /*Se utilizan las funciones creadas anteriormente para recibir el tiempo de 
    ordenamiento que tarda cada algoritmo y compararlos.*/
    generateRandomArray(arr, SIZE);
    measuringSortingTime(bubbleSort, arr, SIZE, "Bubble sort");
    
    generateRandomArray(arr, SIZE);   
    measuringSortingTime(selectionSort, arr, SIZE, "Selection sort");
    
    generateRandomArray(arr, SIZE);   
    measuringSortingTime(insertionSort, arr, SIZE, "Insertion sort");   
    
    generateRandomArray(arr, SIZE);
    measureQuickSortTime(quickSort, arr, 0, SIZE -1, "Quick sort");

} 