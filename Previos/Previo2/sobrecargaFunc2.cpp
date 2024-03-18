// Ejemplo 2 de sobrecarga de funciones

/* En este ejemplo se utiliza sobrecarga con funciones 
con diferentes tipos de argumentos y además con diferente
cantidad de argumentos, no deberá haber problema porque
las funciones tienen diferente tipo de argumentos y además 
una tiene diferente número de argumentos */

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
# include <iostream>

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;


/* Se crea una función de nombre display que recibe dos argumentos
uno entero y uno doble y los imprime */
void display(int var1, double var2) {
        
    cout << "Numero entero: " << var1;
    cout << " y el número doble es: " << var2 <<  endl;
}

/* Se crea una función de nombre display que recibe un argumento
de tipo doble y lo imprime */
void display(double var) {
    
    cout << " El número doble es: " << var <<  endl;
    
}


/* Se crea una función de nombre display que recibe un argumento
de tipo entero y lo imprime */
void display(int var) {
    
    cout << " El número entero es: " << var <<  endl;
    
}

/* Se define la función main que 
será la función principal del programa */
int main() {  
    
    int a = 5;
    double b = 5.5;

    /* Se llama la función con un parámetro entero */
    display(a);

    /* Se llama la función con un parámetro doble */
    display(b);

    /* Se llama la función con dos parámetros, uno entero
    y uno doble */
    display(a, b);

    /* se retorna un valor entero de cero finalizando
    la función main */
    return 0;
}

