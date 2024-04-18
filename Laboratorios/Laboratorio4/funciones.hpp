#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP 

/*Se incluyen las librerías necesarias para el laboratorio*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <string>

/*Se declara el uso de los espacios std y std chrono*/
using namespace std;
using namespace std::chrono;





/*Se declaran las funciones a utilizar para los algoritmos*/
void bubbleSort(int arr[], int n);
void selectionSort(int arr[], int n);
void insertionSort(int arr[], int n);
int partition(int arr[], int low, int high);
void quickSort(int arr[], int low, int high);

/*Se declaran las funciones a utilizar para generar el arreglo y medir el tiempo que tardan en 
ordenar el arreglo los diferentes algoritmos.*/
void generateRandomArray(int arr[], int n);
void measuringSortingTime(void(*sortingAlgorithm)(int[],int),int arr[], int n, string algorithmName );
void measureQuickSortTime(void(*sortingAlgorithm)(int[],int, int),int arr[], int low, int high, string algorithmName );


# endif //Funciones_HPP