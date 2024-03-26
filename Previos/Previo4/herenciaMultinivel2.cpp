
/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
#include <iostream> 

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;

/* Se crea la clase Mammal y su constructor de manera pública */
class Mammal { 
    public:
        Mammal() {
            cout << "Mammals can give direct birth." << endl;
        }
};

/* Se crea la clase WingedAnimal y su constructor de manera pública */
class WingedAnimal {
    public:
        WingedAnimal() {
            cout << "Winged animal can flap." << endl;
        }
};

/* la clase Bat hereda de la clase Mammal y de la clase WingedAnimal de manera pública */
class Bat: public Mammal, public WingedAnimal {};

int main() {

    /* Se crea una instancia de la clase Bat
    que deberá imprimir lo que imprimen los constructores
    de ambas clases anteriores. */
    Bat b1;
    return 0;
}
