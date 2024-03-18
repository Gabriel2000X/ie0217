// Ejemplo de uso de return en una función.

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
# include <iostream>

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;

/* Se crea una función que recibe dos números enteros y los suma,
luego retorna el valor de la suma de los números  */
int add(int a, int b) {
        
    return (a + b);
}
    
/* Se define la función main que 
será la función principal del programa */
int main() {  
    
    /* se declara una variable entera que contendrá el
    resultado de la suma. */
    int sum;

    /* Se inicializa la variable sum guardando el valor
    resultante de add en ella, se observa que el valor 
    que toma la función es el de la suma de los argumentos,
    esto porque se está utilizando return con ese valor. */ 
    sum = add(100, 78);

    cout << "100 + 78 = " << sum <<  endl;

    /* se retorna un valor entero de cero finalizando
    la función main */
    return 0;
}