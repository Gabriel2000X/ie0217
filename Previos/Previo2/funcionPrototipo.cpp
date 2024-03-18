// Ejemplo de uso de prototipo de función.

/* Un prototipo de función sirve para poder llamar una
función en el main desde antes de definirla y poder
definirla después del main */

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
# include <iostream>

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;

/* Se crea el prototipo de la función, en el se declara su nombre 
y el tipo de datos que recibe*/

int add(int, int);


/* Se define la función main que 
será la función principal del programa */
int main() {  
    
    /* se declara una variable entera que contendrá el
    resultado de la suma. */
    int sum;

    /* Se inicializa la variable sum guardando el valor
    resultante de add en ella, se puede realizar esto
    debido a que ya se creó el prototipo de la función */ 
    sum = add(100, 78);

    /* se imprime el resultado de sum*/ 
    cout << "100 + 78 = " << sum <<  endl;

    /* se retorna un valor entero de cero finalizando
    la función main */
    return 0;
}

/* Se crea una función que recibe dos números enteros y los suma,
luego retorna el valor de la suma de los números, se declara luego
del main  */
int add(int a, int b) {
        
    return (a + b);
}
    