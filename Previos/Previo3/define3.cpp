// ejemplo de uso de define, se considera el segundo ejemplo, ya que el primero se realizó en principal.cpp

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
#include <iostream> 

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;

/* El valor de BOOK_ID_MAX se reemplazará por 10  en 
toda sus instancias a la hora de compilar gracias al define */
#define BOOK_ID_MAX 10

/* se crea una enumeración con atributos que tienen nombre de 
casas y apellidos familiares, a estas se les asignan valores 
automáticos del cero al 3 ya que no se les asignan manualmente, 
casa Max guarda el valor 3, no corresponde a un apellido porque
guarda la cantidad de casas que hay. */
enum {
    CASA_BADILLA,
    CASA_ALVARADO,
    CASA_SOLANO,
    CASA_MAX
} casas_t;


/* Se define la función main que 
será la función principal del programa */
int main() {

/* Se imprime el valor de BOOK_ID_MAX que será 10 debido que ya se ha 
reemplazado para cuando se imprime. */ 
cout << "El valor de Book ID Max es: " << BOOK_ID_MAX << endl;

/* Se imprime el valor de CASA_MAX que guarda el valor de la cantidad
de casas que hay */ 
cout << "La cantidad de casas en el condiminio es: " << CASA_MAX << endl;

/* se retorna un valor entero de cero finalizando
la función main */
return 0; 
}
