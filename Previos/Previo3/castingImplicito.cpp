// Ejemplo 2 de estructuras

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
# include <iostream>

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;



/* Se define la función main que 
será la función principal del programa */
int main() {  
   
  
    /* Se declara una variable entera y se inicializa. */
    int num_int = 9;
   
    /* se declara una variable de tipo doble  pero no se 
    inicializa.*/
    double num_double; 

    /* Se realiza una conversión implicita, en ella se asigna el 
    valor de la variable entera a la variable doble.*/
    num_double = num_int;
    
    /* Se imprimen los valores de ambas variables.*/
    cout << "num_int = " << num_int << endl;
    cout << "num_double = " << num_double << endl;
   
    /* se retorna un valor entero de cero finalizando
    la función main */
    return 0;
}
