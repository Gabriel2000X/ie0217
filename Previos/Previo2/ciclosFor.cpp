// Ejemplo de ciclos for
/* Se incluye un ejemplo de for que aumenta el numero en cada iteración 
y otro que recorre los valores de un arreglo*/

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
# include <iostream>

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;

/* Se define la función main que 
será la función principal del programa */
int main() {  
    
    
    /* Se utiliza un ciclo for para que se impriman todos los números enteros
    del uno al cinco, se inicia en 1 y se suma un número en cada iteración
    hasta llegar a 5 */
    for (int i = 1; i<= 5; ++i) {
        
        cout << i << " ";
       
    }

        cout << "\n";
    /* Se declara e inicializa un arreglo de numeros enteros */
    int num_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    /* Se utiliza un ciclo for para que se impriman todos los números presentes
    en el arreglo creado anteriormente, el for recorre el arreglo*/
    for (int n : num_array) {

        cout << n << " ";

    }


    /* se retorna un valor entero de cero finalizando
    la función main */
    return 0;
}