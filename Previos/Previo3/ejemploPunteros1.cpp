// ejemplo de utilización de punteros

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
# include <iostream>

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;


/* Se define la función main que 
será la función principal del programa */
int main() {  
    
    /* Se define la variable var */
    int var = 5;

    /* Se declara la variable int* pointVar que corresponde a un puntero entero*/
    int* pointVar;

    /* Se le asigna el valor de la dirección en memoria de var a pointvar */
    pointVar = &var;

    /* Se realiza la impresión  del valor de var*/
    cout << "var = " << var << endl;

    /* Se realiza la impresión  del valor de &var*/
    cout << "Adress of var (&var)= " << &var << endl;

    /* Se realiza la impresión  del valor de pointVar que debe tener el valor de 
    &var ya que contiene la dirección de memoria */
    cout << "pointVar= " << pointVar << endl;

    /* Se realiza la impresión del valor de var, ya que al colocar un asterisco antes de pointvar se 
    accede a lo que está contenido en la dirección de memoria */
    cout << "Content of the adress pointed to by pointVar (*pointVar) = " << *pointVar << endl;
    
    /* se retorna un valor entero de cero finalizando
    la función main */
    return 0;
}