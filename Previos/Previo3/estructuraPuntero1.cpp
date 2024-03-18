

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
# include <iostream>

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;

/* Se crea una estructura llamada temp que 
contiene dos elementos, un entero llamdo i 
y otro flotante llamado f */
struct temp {
    int i;
    float f;
};

/* Se define la función main que 
será la función principal del programa */
int main() { 
    
    /* Se crea un puntero hacia temp, sin embargo
    no se inicializa. */
    temp *ptr;
    
    /* se retorna un valor entero de cero finalizando
    la función main */
    return 0;
}