// Ejemplo de uso de punteros múltiples.


/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
# include <iostream>

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;


/* Se define la función main que 
será la función principal del programa */
int main() {  
    
    /* Se declara una variable entera var con el valor de 2050 */
    int var = 2050;

    /* Se declara ptr_var que es una variable que es un puntero entero */
    int* ptr_var;

    /* Se le asigna a la variable puntero ptr_var el valor de la dirección en memoria de var */
    ptr_var = &var; 
    
    /* Se imprime el valor de la variable var y el valor de la variable
    ptr_var que corresponde al valor de la dirección en memoria de var
    utilizando cout */
    cout << "var: " << var << ", ptr_var: " << ptr_var << endl;

    /* Se declara una variable puntero doble llamada ptr_ptr_var */
    int** ptr_ptr_var;
    
    /* Se asigna el valor de la dirección en memoria de la variable puntero entero 
    ptr_var a la variable puntero doble entero ptr_ptr_var  */
    ptr_ptr_var =  &ptr_var;

    /* se imprime el valor de la variable ptr_ptr_var que corresponde a la posición en memoria
    de ptr_var */
    cout << "ptr_ptr_var: " << ptr_ptr_var << endl;
    
    /* se imprime el valor del espacio en memoria de la variable ptr_var */
    cout << "&ptr_var: " << &ptr_var << endl;

    /* se imprime el valor del espacio en memoria de la variable ptr_ptr_var */
    cout << "&ptr_ptr_var: " << &ptr_ptr_var << endl;

    /* se retorna un valor entero de cero finalizando
    la función main */
    return 0;
}