
/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
#include <iostream> 

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;


class ClassB;

/* Se define la clase A */
class ClassA {

     private:

        /* Se declara numA como privado*/
        int numA;

        /* se declara ClassB como clase amiga */
        friend class ClassB;

    public:

        /* Se utiliza el constructor para inicializar
        numA con un valor de 12 */
        ClassA() : numA(12) {}
    
   
};

/* Se define la clase B */
class ClassB {

     private:
        /* Se declara numB como privado*/
        int numB;

    /* Se utiliza el constructor para inicializar
    numB con un valor de 1 y se  */
    public:

        ClassB() : numB(1) {}
    
        /* Se declara el método add que define una instania de la ClassA
        y suma numA y numB, esta clase es capaz de acceder a atributos
        privados de ClassA debido a que es su función amiga */
        int add() {
        
        ClassA objectA;
        return objectA.numA + numB;
        
        }
};



int main() {

/* Se declara una instancia de la ClassB y
se utiliza el método add de Class B para obtener
el valor de la suma de numA y numB */
ClassB objectB;
cout << "Sum: " << objectB.add(); 
return 0;

}