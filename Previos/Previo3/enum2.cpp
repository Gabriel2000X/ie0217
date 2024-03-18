// Ejemplo de enumeración, como ya se trató el tema en principal.cpp se considera el segundo ejemplo de este tema

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
#include <iostream>


/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;


/* se crea una enumeración llama week que contiene los días de la semana */
enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main() {
    /* Se crea una instancia de enumeración week llamada today y se le asigna 
    el valor Wednesday, cabe destacar que se asigna el valor numérico asociado
    a Wednesday */
    week today;
    today = Wednesday;

    /* Se imprime el número de un día el cual es el siguiente en la lista después
    del valor de today, por lo que debe imprimirse 4, ya que el primero que es 
    Sunday tiene la posición cero. */
    cout << "Día " << today+1;

    /* se retorna un valor entero de cero finalizando
    la función main */
    return 0;
}