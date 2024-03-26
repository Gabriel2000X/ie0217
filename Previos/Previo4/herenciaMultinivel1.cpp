/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
#include <iostream> 

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;

/* Se define la clase A que contiene el método público 
void display.  */
class A {
    public:
        void display() {
            cout<<"Base class content.";
    }
};

/* Se define la clase B, que hereda la clase A de manera pública
y luego se define la clase C, que hereda la clase B de manera pública.  */
class B : public A {};
class C : public B {};

int main() {

    /* Se crea una instancia de C llamada objeto y se usa el método
    display que se hereda de A a B, y de B a C  */
    C obj; 
    obj.display();
    return 0;
}