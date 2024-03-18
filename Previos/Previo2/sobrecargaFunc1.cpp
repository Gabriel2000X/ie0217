// Ejemplo de sobrecarga de funciones


/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
# include <iostream>

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;


/* Se crea una función que recibe un valor flotante y retorna su 
valor absoluto. */
float absolute(float var) {
        
    if (var < 0.0)
        var = -var;
    return var;
}

/* Se crea una función con el mismo nombre de la anterior, pero esta 
recibe un valor entero, por lo que no habrá problemas al utilizar las 
funciones debido a que se está usando sobrecarga. */
int absolute(int var) {
        
    if (var < 0)
        var = -var;
    return var;
}


/* Se define la función main que 
será la función principal del programa */
int main() {  
    
    /* Se imprime el valor absoluto de -5 usando la función absolute para enteros. */ 
    cout << "El valor absoluto de -5 es = " << absolute(-5) <<  endl;

    /* Se imprime el valor absoluto de 5.5 usando la función absolute para flotantes. */ 
    cout << "El valor absoluto de 5.5 es = " << absolute(5.5f) <<  endl;
    
    /* se retorna un valor entero de cero finalizando
    la función main */
    return 0;
}

