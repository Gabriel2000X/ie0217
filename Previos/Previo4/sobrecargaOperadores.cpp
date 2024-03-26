//Ejemplo de uso de sobrecarga de operadores para sumar fracciones

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
#include <iostream> 

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;

/* Se crea la clase fracción y dos atributos enteros */
class Fraccion {
    int numerador, denominador;
    public:

    /* Se crea el constructor de la función, el cual recibe n y d
    y con esos parámetros inicializa numerador y denominador */
    Fraccion(int n, int d): numerador (n), denominador (d) {}
    
    /*Se declara la sintaxis que se usa para sumar fracciones */
    Fraccion operator+ (const Fraccion &f) {

        /* Se crea un objeto resultado que es una instancia de fracción, este 
        recibe el numerador y denominador de las dos fracciones y hace la suma de 
        fracciones, se declara el numerador y denominador de la suma */
        Fraccion resultado(

            numerador * f.denominador + f.numerador * denominador, 
            denominador * f.denominador

        );
    return resultado;
    }
    
    void imprimir() {

        cout << numerador << "/" << denominador << endl;
    }

};

int main() {

    /* Se crean los objetos de tipo fracción con sus respectivos 
    argumentos */
    Fraccion f1(1, 2);
    Fraccion f2(3, 4);

    /* Se suman las fracciones utilizando la sobrecarga creada */
    Fraccion f3 = f1 +f2;
    
    f3.imprimir();
    return 0;
}