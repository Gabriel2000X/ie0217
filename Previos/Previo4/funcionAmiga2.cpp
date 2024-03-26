
/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
#include <iostream> 

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;


class ClassB;

/* Se define la clase A */
class ClassA {

    public:

        /* Se utiliza el constructor para inicializar
        numA con un valor de 12 */
        ClassA() : numA(12) {}
    
    private:

        /* Se declara numA como privado*/
        int numA;

        /* se declara la función amiga add */
        friend int add (ClassA, ClassB);

};

/* Se define la clase B */
class ClassB {

    /* Se utiliza el constructor para inicializar
    numB con un valor de 1 */
    public:

        ClassB() : numB(1) {}
    
    private:
        /* Se declara numB como privado*/
        int numB;
        
        /* se declara la función amiga add */
        friend int add (ClassA, ClassB);

};

/* se define la función add que suma los atributos 
numA y numB de los argumentos tipo ClassA y ClassB
pueden acceder a estos atributos aunque sean privados
porque son funciones amigas.*/
int add (ClassA objectA, ClassB objectB) { 
    return (objectA.numA + objectB.numB);
}



int main() {

/* se crea una instancia de ClassA y una de ClassB
y se usa add para sumarlas. */
ClassA objectA;
ClassB objectB;
cout << "Sum: " << add (objectA, objectB); 
return 0;

}