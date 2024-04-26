
#include <iostream> 
#include <stdexcept>
using namespace std;


int main() {

    /*Se declaran tres variables enteras*/
    int numerador, denominador, resultado;
    
    /*Se le pide al usuario ingresar tanto el numerador
    como el denominador de la división */
    cout << "Ingrese el numerador: "; 
    cin >> numerador;

    cout << "Ingrese el denominador: ";
    cin >> denominador;

    /*Se utiliza un bloque try para manejar las excepciones de división por cero*/
    try {

    if (denominador == 0) {
        
        /*Se regresa una excepción de tipo runtime_error cuando el denonimador es cero*/
        throw runtime_error("Error: el denominador no puede ser cero.");
    }

    /*Si el denomindador no es cero entonces se calcula resultado y se imprime*/
    resultado = numerador / denominador;
    
    cout<<"El resultado es: " << resultado << endl;

    }   
    
    /*Se utiliza un bloque catch para capturar excepciones de tipo exception o
    derivadas y se usa e.what para obtener la descripción del error especificada en 
    throw */
    catch (const exception& e) {
        cerr << e.what() << endl;
    
    }

    return 0;
}
