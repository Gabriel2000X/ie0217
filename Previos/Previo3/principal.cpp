// ejemplo de utilización de enumeraciones.

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
# include <iostream>

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;

/* Se utiliza enum seasons para crear una enumeracion llamada seasons que contiene
variables a las cuales se les asignan números para cada estación */
enum seasons {

    spring = 34,
    summer = 4,
    autnum = 9,
    winter = 32

   };


/* Se define la función main que 
será la función principal del programa */
int main() {  
    
    /* Se declara una variable s que debe asignarse a un elemento de seasons */
    seasons s;

    /* Se le asigna el valor de summer a la variable s  */
    s = summer;

    /* utilizando cout se imprime el valor de summer, si se cambia el valor de la estación en 
    la variable s entonces se imprimirá un valor distinto */
    cout << "Summer = " << s << endl;

   
   
   
   /* Se utiliza cout para imprimir el resultado de la suma así como el valor de 
   cada variable que participa en la suma. */

    /* se retorna un valor entero de cero finalizando
    la función main */
    return 0;

}