// ejemplo de clase 2.

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
#include <iostream> 

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;

/* Se  crea la clase Molde*/
class Molde {

    /* Se define el especificador de acceso como público 
    y se definen las variables a usar o parámetros  */
    public:
    double largo;
    double ancho;
    double alto;

    /* Se crea el constructor de la clase, es el constructor porque
    tiene el mismo nombre de la clase, a este se le asignan los atributos como argumentos*/
    Molde(double largo_p, double ancho_p, double alto_p): largo(largo_p),ancho(ancho_p), alto(alto_p) {
        cout << "Probando si se puede imprimir " << endl;

    }

    /* Se crea le destructor de la clase, este se encarga de dejar el espacio en memoria limpio
    por ejemplo cerrando archivos o elmininando variables que no se usarán más*/
    ~Molde() {
        cout << "Saludos desde el destructor de la clase Molde" << endl;

    }

    
    /* Se definen los métodos que utilizará la clase, 
    uno para calcular área y otro para calcular volumen */
    double calcularArea() {
        return largo * ancho;
    
    }
    
    double calcularVolumen () {
        return largo * ancho* alto;
    }

};


int main() {

    /* Se intancia un objeto de la clase Molde llamado pared, para esto
    se deben dar los argumentos correspondientes declarados en el constructor */ 

    Molde pared(10.0, 20.0, 35.0);

    /* Se imprimen los resultados del calculo del área y del volumen. */
    
    cout << "El área es: " << pared.calcularArea() << endl;
    cout << "El volumen es: " << pared.calcularVolumen() << endl;


    
    return 0;

}