// segundo ejemplo de utilización de punteros.

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

    /* Se realiza la impresión  del valor de var */
    cout << "var = " << var << endl;

    /* Se realiza la impresión del valor de var, ya que al colocar un asterisco antes de pointvar se 
    accede a lo que está contenido en la dirección de memoria */
    cout << "*pointVar = " << *pointVar << endl
        << endl;

    /* Se imprime un mensaje que aclara que el valor de var se está cambiando a 7*/
    cout << "Changing value of var to 7:" <<  endl;

    /* Se cambia el valor de la variable var a 7 utilizando var */
    var = 7;
    
    /* Se realiza la impresión  del valor de var */
    cout << "var = " << var << endl;

    /* Se realiza la impresión del valor de var, ya que al colocar un asterisco antes de pointvar se 
    accede a lo que está contenido en la dirección de memoria */
    cout << "*pointVar = " << *pointVar << endl
        << endl;

    /* Se imprime un mensaje que aclara que el valor de *pointVar se está cambiando a 16*/
    cout << "Changing value of *pointVar to 16:" <<  endl;

    /* Se cambia el valor de *pointvar a 16, cambiando el valor de var también porque se está cambiando
    lo que está adentro de la dirección de memoria. */
    *pointVar = 16;

    /* Se realiza la impresión  del valor de var */
    cout << "var = " << var << endl;

    /* Se realiza la impresión del valor de var, ya que al colocar un asterisco antes de pointvar se 
    accede a lo que está contenido en la dirección de memoria */
    cout << "*pointVar = " << *pointVar << endl;
        

    /* se retorna un valor entero de cero finalizando
    la función main */
    return 0;
}