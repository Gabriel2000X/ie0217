// ejemplo de utilización de enumeraciones y defines

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
# include <iostream>

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;

/* Se utilizan los defines para que en tiempo de compilación se 
reemplacen todos las instancias de texto que sean iguales a la 
declarada en el define por el valor que se define, en este caso
todos los MI_PRIMER_DEFINE se reemplazan por 925 */
#define MI_PRIMER_DEFINE 925

/* Se utiliza enum seasons para crear una enumeracion llamada seasons que contiene
variables a las cuales se les asignan números para cada estación */
enum seasons {

    spring = 34,
    summer = 4,
    autnum = 9,
    winter = 32

   };

/* Se utiliza enum enumcito para crear una enumeracion llamada enumcito que contiene
variables a las cuales se les asignan números para cada objeto, en este caso solo
se le asigna un 40 a carro manualmente, por lo que se asigna automáticamente valores
ascendentes para las demás variables, casa tendrá 41, arbol 42 y patio 43 */
enum enumcito {

    carro = 40,
    casa ,
    arbol ,
    patio 

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

    /*  se imprime MI_PRIMER_DEFINE, al compilarlo se reemplaza el texto por el 
    valor de 925 y se imprime un 925*/
    cout << "Define: " << MI_PRIMER_DEFINE << endl;
   
    /* Se imprime el valor de arbol que está dentro de enumcito. debe corresponder con 42 */
    cout << "arbol " << arbol << endl;
   
   /* Se utiliza cout para imprimir el resultado de la suma así como el valor de 
   cada variable que participa en la suma. */

    /* se retorna un valor entero de cero finalizando
    la función main */
    return 0;

}