/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
#include <iostream> 

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;

/* Se define la clase Base y se define una función
virtual llamada print */
class Base {
    public:
        virtual void print() {
            cout << "Base Function" << endl;
    }
};

/* Se define la clase Delivered que hereda de Base de manera
pública y se sobre escribe la función virtual creada anteriormente.*/
class Derived: public Base {
    public:
        void print() {
            cout << "Derived Function" << endl;
    }
};


int main() {
    /*Se crea una instancia de Derived .*/
Derived derived1;

    /*Se define un puntero tipo base y se guarda la dirección en memoria 
    donde inicia derived1, sin embargo como se usa ampersand se puede 
    modificar o accesar al contenido .*/
    Base* base1 = &derived1;

    /*Se usa print con base1, lo que hace que se imprima la función print
    definida luego de la virtual .*/

    base1 -> print();
return 0;
}