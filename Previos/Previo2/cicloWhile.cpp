// Ejemplo de ciclo while
/* Se realiza un ejemplo de ciclo while en el que
se imprimen los valores de i del 1 al 5, se incluye el 5
debido a que se usa menor igual. */

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
# include <iostream>

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;

/* Se define la función main que 
será la función principal del programa */
int main() {  
    
    
    /* Se declara la variable entera i desde antes de empezar el while
    para que la condición de inicio se cumpla */

    int i = 1;

    /* Se declara un ciclo while en el que mientras i sea menor que 5 
    se imprime i, además en cada iteración del ciclo se suma 1 a i para 
    que i crezca y la condición de inicio del while sea falsa después de superar 
    5 */
    while (i <= 5) {
        
        cout << i << " ";
       ++ i;
    }

    /* se retorna un valor entero de cero finalizando
    la función main */
    return 0;
}