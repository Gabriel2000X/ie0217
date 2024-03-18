// Ejemplo variavles locales
/* */

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
# include <iostream>

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;

/* Se define la función main que 
será la función principal del programa */
int main() {  
    
    /* Se declaran tres variables enteras locales: a, b y c 
    como son variables locales solo van a ser válidas dentro de la 
    función main*/
    
    int a, b;
    int c;

    /* Se inicializan las variables creadas anteriormente,
    esto se refiere a que se les asigna un valor */

    a = 10;
    b = 20;
    c = a + b;

    /* Se realiza la impresión  del valor de c utilizando cout */
    cout << c;

    /* se retorna un valor entero de cero finalizando
    la función main */
    return 0;
}