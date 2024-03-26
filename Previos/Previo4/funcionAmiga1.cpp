
/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
#include <iostream> 

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;

/* Se define la clase Distance */
class Distance { 
    
    /* Se definen los atributos privados y
    en privado también se define la función
    amiga addFive */
    private:
        int meter;

        // friend function
        friend int addFive (Distance);
    /* Se definen los atributos y métodos públicos
    como el constructor que le asigna cero a meter.  */
    public:
        Distance() : meter(0) {} 
};

/* Se define función addFive que recibe una instancia de Distance */
int addFive (Distance d) {
    /* Se accesa a meter que es un atributo privado
    porque addFive es una función amiga */
    d.meter += 5;
    return d.meter;
}

int main() {
    /* Se crea un objeto de instancia D 
    y se imprime la función*/
    Distance D;
    cout << "Distance: " << addFive (D);
    return 0;
}