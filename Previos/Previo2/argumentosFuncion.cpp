// Ejemplo de argumentos para una función


/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
# include <iostream>

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;

/* Se crea una función que recibe dos números, uno entero y uno flotante
e imprime cual es cada uno, se pretende que el numero flotante sea doble, este 
se inicializa más adelante */
void displayNum(int n1, float n2) {
        
        cout << "El número entero es: " << n1 <<"\n";
        cout << "El número doble es: " << n2 << "\n";
    }
    



/* Se define la función main que 
será la función principal del programa */
int main() {  
    
    
    /* Se declaran e inicializan las variables
    a utilizar */

    int num1 = 5;
    double num2 = 5.5;

    /* Se llama la función utilizando num1 y num2 como argumentos */

    displayNum(num1, num2);   
     
    /* se retorna un valor entero de cero finalizando
    la función main */
    return 0;
}