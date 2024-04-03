
#include <iostream> 
#include <cstdlib>
using namespace std;

int main() {

    /* Se declaran dos variables flotante puntero*/
    float *ptr, *new_ptr;

    /* se le asigna el valor de malloc casteado a 
    flotante puntero a ptr, porque malloc por defecto devuelve
    un void pointer, además, se reserva el tamaño de 5 multiplicado
    por el tamaño en bytes de un flotante. */
    ptr = (float *) malloc(5 * sizeof(float)); 

    /* Si se tiene que ptr apunta a la nada, es puntero NULL, 
    entonces se imprime un mensaje de error y se devuelve 1 
    para hacer constar el error.*/
    if (ptr == NULL) {
        
        cout << "Memory Allocation Failed"; 
        exit(1);
        
    }


    /* utilizando un for se asignan valores a los elementos
    del bloque de memoria, que se asignó con malloc. */ 
    for (int i = 0; i < 5; i++) { 
        ptr[i] = i * 1.5;

    }

    /* Se hace un rellocate de memoria, casteando realloc 
    a flotante puntero y se le da como argumento la dirección
    original y el tamaño deseado del bloque nuevo. */
    new_ptr = (float*) realloc(ptr, 10* sizeof(float)); 
    

    /* Si se tiene que new_ptr apunta a la nada, es puntero NULL, 
    entonces se imprime un mensaje de error y se devuelve 1 
    para hacer constar el error.*/
    if (new_ptr == NULL) {
    
        cout << "Memory Re-allocation Failed"; 
        exit(1);
    }


    /* Ahora se agrega el valor de los nuevos elementos 
    del bloque de memoria nuevo con un for, por lo que 
    se inicia en 5 y se sigue mientras i sea menor a 10 */ 
    for (int i = 5; i < 10; i++) {
    
        new_ptr[i] = i * 2.5;
    }

    cout << "Printing Values" << endl;

    /* Se imprimen los valores contenidos en  el nuevo 
    bloque de memoria*/    
    for (int i = 0; i < 10; i++){

        cout << new_ptr[i] << endl;
    }

    /* Se libera la memoria dinámica utilizada.*/
    free (new_ptr);
    return 0;
}
