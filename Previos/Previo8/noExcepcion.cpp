/*Se tiene un ejemplo sin el uso de excepciones para entender 
como no codificar*/

#include <iostream>
#include <stdexcept>
using namespace std;


int main() {
    /*Se declaran tres variables enteras para almacenar 
    numerador, denominador y resultado*/
    int numerador, denominador, resultado;
    
    /*Se le pide al usuario que ingrese el numerador
    y denominador*/
    cout << "Ingrese el numerador: ";
    cin >> numerador;

    cout << "Ingrese el denominador: ";
    cin >> denominador;

    /*Se calcula el resultado sin usar excepciones, por lo que 
    se puede caer */
    resultado = numerador / denominador;

    cout << "El resultado es: " << resultado << endl;
return 0;
}