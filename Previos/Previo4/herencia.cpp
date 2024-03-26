// Ejemplo de uso de herencia en clases 

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
#include <iostream> 

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;


class Animal { 
    
    public:

        void eat() {
            cout << "I can eat!" << endl;
        }

        void sleep() {
            cout << "I can sleep!" << endl;
        }
};

/* Se define una clase llamada Dog que hereda los métodos y 
atributos públicos de la clase Animal, en este caso solo se
tienen métodos */
class Dog: public Animal {

    /* Además de heredar de Animal, se declaran los propios 
    métodos */
    public:
        void bark() {
        cout << "I can bark! Woof woof!!" << endl;
        }
};

int main() {
    
    Dog dog1;
    /*Se llama a los métodos heredados de Animal */
    dog1.eat();
    dog1.sleep();
    
    /*Se llama al método creado en perro */
    dog1.bark();
    
    return 0;
}