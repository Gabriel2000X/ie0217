
/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
#include <iostream>

/* se incluye string, que sirve para manejar caracteres
de texto. */
#include <string>

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;


/* Se declara la clase Animal con atributos y métodos tanto privados
como protegidos como públicos*/
class Animal {
    private:
        string color;
    protected:
        string type;
    public:
        void run() { cout << "I can run -- BASE!" << endl; }
        void eat() { cout << "I can eat!" << endl; }
        void sleep() { cout << "I can sleep!" << endl; } 
        void setColor(string clr) { color = clr; }
        string getColor() { return color; }
};

/* Se hereda la parte pública de la clase Animal en la clase Dog, se redefine el método 
run y además se define el método setType, el método displayInfo y el método bark*/
class Dog : public Animal {
    public:
        void run() { cout << "I can run -- DERIVED!" << endl; }

        /* Se puede usar type debido a que la clase Dog es derivada de 
        la clase Animal, y los atributos protegidos se pueden usar en clases
        derivadas*/
        void setType(string tp) { type = tp; }
        void displayInfo(string c) {
            cout << "I am a " << type << endl;
            cout << "My color is " << c << endl;
            
        }
        void bark() { cout << "I can bark! Woof woof!!" << endl; }
};

int main() {
    /* Se crea una instancia de Dog llamada dog1*/
    Dog dog1;
    /* Se utlizan los métodos declarados en Animal para dog1, sin 
    embargo el método run se redefie en Dog por lo que debe tener el
    comportamiento de su redefinición*/
    dog1.run();
    dog1.eat();
    dog1.sleep();
    dog1.setColor("black");

    /* Se utilizan los métodos declarados en Dog para dog1*/
    dog1.bark();
    dog1.setType("Doberman");
    dog1.displayInfo(dog1.getColor());
    return 0;
}
