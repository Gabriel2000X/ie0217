
#include <iostream> 
#include <cstdlib> 
using namespace std;

int main() {
    /*se crea un entero puntero llamado ptr y 
    se le asigna el valor de malloc casteado a 
    entero puntero porque malloc por defecto devuelve
    un void pointer, además, se le da el tamaño en 
    bytes de int con sizeof(int) */
    int* ptr = (int*) malloc(sizeof(int));
    
   
    /**/ 

    *ptr = 5;
    cout << *ptr;
    return 0;
    free (ptr);
}
    