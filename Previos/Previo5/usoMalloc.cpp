
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
    
   
    /*Se asigna un 5 por de-referencia dentro de 
    la dirección de memoria.*/ 
    *ptr = 5;
    cout << *ptr;
    return 0;
    /*Luego de imprimir el contenido de la dirección de memoria que aloja
    a ptr se libera la memoria utilizada por ptr*/
    free (ptr);
}
    