//Ejemplo de sobreescritura de funciones en herencia

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
#include <iostream> 

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;

/* Se definen dos clases, una llamada Base y otra
llamada Derived que hereda de Base, en las dos clases
se define un metodo llamado print. */
class Base { 
    public:
        void print() {
            cout << "Base Function" << endl;
        }
};

class Derived: public Base {
    public:
        void print() {
            cout << "Derived Function" << endl;
        }
};

int main() {
    Derived derived1; 
    /* Se utiliza print, en la instancia de Derived, como se declaró dos veces
    se utiliza el último método declarado, el cual es el de Derived */
    derived1.print();
    return 0;

}
