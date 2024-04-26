#include <iostream>
using namespace std;

int main(){ 
    
    /*Se declaran variables incluido un arreglo de 4 entradas*/
    double numerator, denominator, arr[4] = {0.0, 0.0, 0.0, 0.0};
    int index;

    /*Se le pide al usuario ingresar un indíce del arreglo*/
    cout << "Enter array index: ";
    cin >> index;

    try { 
        
        /*Se utiliza un bloque try para generar una excepción si el indíce 
        introducido pro el usuario está fuera de los límites*/

        if (index >= 4)
            throw "Error: Array out of bounds!";

        
        
        /*Si el índice introducido por el usuario es correcto
        entonces se sigue con el programa*/

        /*Se pide el numerador*/
        cout << "Enter numerator: ";
        cin >> numerator;

        /*Se pide el denominador*/
        cout << "Enter denominator: ";
        cin >> denominator;

        /*Se genera una excepción cuando el denominador es cero*/

        if(denominator == 0)
            throw 0;

        /*si el denominador es cero entonces no se ejecuta esta parte*/
        
        /*Se incluye la división entre numerador y denominador en el índice especificado 
        del arreglo y se imprime el contenido del índice del arreglo.*/
        arr[index] = numerator / denominator;
        cout << arr[index] << endl;

    }

    /*Se captura la excepción de arreglo fuera de límites que sucede 
    cuando el usuario introduce valores de índices inexistentes*/
    catch (const char* msg){
        cout << msg << endl;
    }

    /*Se captura la excepción de división entre cero*/
    catch (int num){
        cout << "Error: Cannot divide by " << num << endl;
    }

    /*Se captura cualquier otra excepción inesperada*/
    catch (...){
        cout << "Unexpected exception " << endl;
    }

    return 0;


}