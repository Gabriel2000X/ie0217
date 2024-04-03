

#include <cstdlib> 
#include <iostream> 
using namespace std;

int main() {

    /*Se declara un entero puntero ptr*/
    int *ptr; 

    /* Se le asigna a ptr el valor casteado a entero puntero
    de lo que devuelve calloc, a calloc se le pasa la cantidad
    de elementos que se quiere asignar y su tamaño en bytes, 
    aquí se le asigna el tamaño de un entero en memoria.*/
    ptr = (int *)calloc(5, sizeof(int)); 

    /*Como calloc devuelve un void pointer, puede tener 
    una dirección válida o si falla la asignación
    puede ser un puntero que apunta a la nada, 
    por lo que se verifica si ptr tiene valor 
    válido, si no lo tiene entonces se utiliza un valor
    de uno como salida para marcar el error*/
    if (!ptr) {

        cout << "Memory Allocation Failed"; 
        exit(1);
        
    }


    cout << "Initializing values..." << endl
    << endl;

    /*Con un for se le asignan valores a las entradas del
    array con el que se trabaja*/
    for (int i = 0; i < 5; i++) {
    
        ptr[i] = i * 2 + 1;
    }
    
    cout << "Initialized values" << endl;
    
    /*Posteriormente se imprimen estos valores*/
    for (int i = 0; i < 5; i++) {
    
        /* ptr[i] y *(ptr+i) son notaciones equivalentes */ 
        cout << *(ptr + i) << endl;
    
    }

    /*Se libera la memoria para evitar fugas de memoria.*/
    free(ptr);
    return 0;
}