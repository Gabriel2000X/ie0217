#include <iostream>
using namespace std;

int main() {
    double numerator, denominator, divide;

    /*Se le pide al usuario que ingrese 2 valores, el numerador
    y el denominador de una fracción para dividirlos entre sí*/
    cout << "Enter numerator: ";
    cin >> numerator;

    cout << "Enter denominator: ";
    cin >> denominator;

    try {
        /*Se usa el bloque try para manejar la excepción o el error que se da
        cuando el valor del denominador es 0, cuando se usa un throw se brinca
        al bloque de catch*/ 
        if (denominator == 0)
            throw 0;

        /*En caso de que el denominador no sea cero entonces se divide el numeraodor
        entre el denominador y el valor se guarda en divide*/
        divide = numerator / denominator;
        cout << numerator << " / " << denominator << " = " << divide << endl;
}

/*Se recibe el cero de throw como agumento  e imprime el error que dice
que no se puede realizar la división.*/
catch (int num_exception) {
    cout << "Error: Cannot divide by " << num_exception << endl;
}
    return 0;
}