// Ejemplo de enumeración, como ya se trató el tema en principal.cpp se considera el tercer ejemplo de este tema

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
#include <iostream> 

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;

/* Se define una enum llama suit con atributos correspondientes a signos
de cartas, y se crea una instancia de suit llamada card. */
enum suit {
    club = 0,
    diamonds = 10,
    hearts = 20, 
    spades = 3
} card;


/* Se define la función main que 
será la función principal del programa */
int main() {

    /* se le asigna el valor de club a card, por lo que se asigna un valor numérico de 0 */
    card = club;
    /* Se imprime el tamaño en bytes de la variable que esté tomando card, por lo que 
    se imprime el valor en bytes de 0 */
    cout << "Size of enum variable "  << sizeof(card) << " bytes.";

return 0;
}