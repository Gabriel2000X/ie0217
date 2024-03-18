// Ejemplo del ciclo do-while
/* Se realiza un ejemplo de ciclo do-while en el que
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
    
    
    /* Se declara e inicializa la variable entera i como 1, sin embargo, aunque no se
    cumpliera la condición para que el ciclo while se ejecute, se ejecutaría 
    al menos una vez, ya que el do while siempre se ejecuta al menos una vez */

    int i = 1;

    /* Se declara un ciclo do-while en el que siempre se realiza una vez la suma de
    1 a i, se imprime i, posteriormente solo se sigue el ciclo si la condición de que
    i sea menor o igual que cinco se cumple, el do hace que siempre se ejecute una vez. */

    do {
        
        cout << i << " ";
        ++ i;
    }
     while (i <= 5);
    /* se retorna un valor entero de cero finalizando
    la función main */
    return 0;
}