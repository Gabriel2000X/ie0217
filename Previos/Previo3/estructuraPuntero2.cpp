// Ejemplo de utilización de punteros en estructuras

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
#include <iostream> 

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;

/* Se crea una estructura llamada Distance que 
contiene dos elementos, un entero llamdo feet 
y un flotante llamado inch */
struct Distance {
    int feet;
    float inch;
};

/* Se define la función main que 
será la función principal del programa */
int main() {

    /* Se crea una variable distancia puntero o Distance puntero 
    que es ptr, además se crea una instancia de Distance llamada d */
    Distance *ptr, d;

    /*Se utiliza el ampersand para asignarle al puntero los espacios en memoria de d los elementos de d */
    ptr = &d;

    /* Se le pide al usuario que ingrese un valor en pies*/
    cout << "Ingrese un valor en pies: ";

    /*Este valor se guarda en el elemento feet de Distance utilizando 
    *ptr que permite manipular el elemento contenido en la dirección de memoria
    y se accesa a feet con .feet */
    cin >> (*ptr).feet;

    /* Se le pide al usuario que ingrese un valor en pulgadas*/
    cout << "Ingrese un valor en pulgadas: ";

    /*Este valor se guarda en el elemento inch de Distance utilizando 
    *ptr que permite manipular el elemento contenido en la dirección de memoria
    y se accesa a inch con .inch */
    cin >> (*ptr).inch;

    /* Se imprime la información de los datos recopilados en pantalla */
    cout<< "Displaying information." << endl;
    cout << "Distancia = " << (*ptr). feet <<" pies y " << (*ptr).inch << " pulgadas";

/* se retorna un valor entero de cero finalizando
la función main */
return 0;
}