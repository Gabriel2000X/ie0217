// Ejemplo de casting

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
# include <iostream>

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;



/* Se define la función main que 
será la función principal del programa */
int main() {  
   

    /* se declara e inicializa una variable de tipo doble.*/
    double num_double = 3.56; 
    
    /* se imprime el valor de la variable de tipo doble.*/
    cout << "num_double = " << num_double << endl;
  
    /* Se declara una variable entera y se inicializa dandole
    el valor de la variable doble convertido en un entero, por 
    lo que se pierde la parte decimal, se pone el tipo de variable
    al que quiero convertir al frente del número doble. */
    int num_int1 = (int)num_double;

    /* Se imprime el valor de la variable entera creada anteriormente.*/
    cout << "num_int1 = " << num_int1 << endl;
    
    /* Se declara e inicializa una variable entera, dandole el valor de num_doble convertido
    en entero, sin embargo el número se convierte a entero de una manera diferente a la del
    ejemplo anterior, es similar a la nomenclatura de una función.*/
    int num_int2 = int(num_double);

    /* Se imprime el valor de la variable entera creada anteriormente.*/
    cout << "num_int2 = " << num_int2 << endl;

    /* se retorna un valor entero de cero finalizando
    la función main */
    return 0;
}