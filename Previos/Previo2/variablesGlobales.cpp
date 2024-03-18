// Ejemplo variavles globales
/* */

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
# include <iostream>

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;

/* Se declara  la variable global g, como se crea de manera global
funcionará sin importar si se llama dentro de una función */

int g;

/* Se define la función main que 
será la función principal del programa */
int main() {  
    
    /* Se declaran dos variables enteras locales: a y b, 
    como son variables locales solo van a ser válidas dentro de la 
    función main*/
    
    int a, b;
    

    /* Se inicializan las variables creadas anteriormente,
    esto se refiere a que se les asigna un valor */

    a = 10;
    b = 20;
    g = a + b;

    /* Se realiza la impresión  del valor de g utilizando cout */
    cout << g;

    /* se retorna un valor entero de cero finalizando
    la función main */
    return 0;
}