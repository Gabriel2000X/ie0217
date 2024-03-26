/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
#include <iostream> 

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;

/* Se define la clase animal con el método info en público */
class Animal {
    public:
        void info() { cout << "I am an animal." << endl; }
};

/* Se define la clase Dog que hereda de la clase Animal de manera
pública, y se define el método bark de manera pública */
class Dog : public Animal {
    public:
        void bark() { cout << "I am a Dog. Woof woof." << endl; }
};

/* Se define la clase Cat que hereda de la clase Animal de manera
pública, y se define el método meow de manera pública */
class Cat : public Animal {
    public:
        void meow() { cout << "I am a Cat. Meow." << endl; }
};

int main() {

    /* Se crea una instancia de Dog llamada dog1 */
    Dog dog1;
    cout << "Dog Class: " << endl;
    
    /* Se usa el método heredado info y el método propio bark para dog1 */
    dog1.info(); 
    dog1.bark();

    /* Se crea una instancia de Cat llamada cat1 */
    Cat cat1;
    cout << "\nCat Class: " << endl;
    
    /* Se usa el método heredado info y el método propio meow para cat1 */
    cat1.info(); 
    cat1.meow();
    return 0;
}