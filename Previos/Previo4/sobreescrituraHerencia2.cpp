// Ejemplo 2 de sobre escritura de funciones en herencia, se ejemplifica como accesar a las 2 funciones


/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
#include <iostream>

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;

/* Se crean 2 clases, una llamada Base y la otra llamada Derived
la clase Derived hereda la parte pública de Base. */
class Base { 
    public:
        void print() {
            cout << "Base Function" << endl;
        }
};

class Derived : public Base {
    public:
        void print() {
            cout << "Derived Function" << endl;
        }
};


int main() {

    /* Se crean 2 instancias de Derived */
    Derived derived1, derived2;

    /* Se imprime con el último método establecido */
    derived1.print();
    
    /* Se accede manualmente al método print de Base*/
    derived2.Base::print();
    return 0;
}