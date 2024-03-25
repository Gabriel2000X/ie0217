// ejemplo de clase

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
    double altura;

    /* Se crea el constructor de la clase, es el constructor porque
    tiene el mismo nombre de la clase */
    Molde(){
   
        cout << "Esto se ejecuta en cada instanciacion" << endl; 
        cout << "Iniciando un objeto de la clase Molde" << endl;
        
        }

    /* Se definen los métodos que utilizará la clase, 
    uno para calcular área y otro para calcular volumen */
    double calcularArea() {
        return largo * ancho;
    
    }
    
    double calcularVolumen () {
        return largo * ancho* altura;
    }

};


int main() {

    /* Se intancia un objeto de la clase Molde llamado pared */ 

    Molde pared;

    /* Se le asginan los valores a los atributos de pared utilizando
    pared.atributo para guardar estos valores en cada atributo. */
    
    pared.largo = 400.5;
    pared.ancho = 20.8;
    pared.altura = 315.2;


    /* Se calculan el área y el volumen de pared y se imprimen
    en pantalla. */
    cout << "Area = " << pared.calcularArea() << endl;
    cout << "Volumen" << pared.calcularVolumen() << endl;
    return 0;

}