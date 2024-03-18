// Ejemplo de Switch-case con operadores
/* */

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
# include <iostream>

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;

/* Se define la función main que 
será la función principal del programa */
int main() {  
    
    /* Se declaran 3 variables, el oper que será el operador 
    para la operación entre los dos números y los dos 
    números que se someteran a las operaciones */ 
    char oper;
    float num1, num2;

    /* Se utiliza cout para imprimir los datos en pantalla y 
    se utiliza cin para recibir los datos del usuario */
    cout << "Introduzca un operador (+, -, *, /): ";
    cin >> oper;
    cout << "Introduzca dos números: " << endl;
    cin >> num1 >> num2;

    /* Se utiliza switch con la variable oper para que se ejecuten los 
    casos dependiendo de que se introduzca en esta variable, se tienen
    casos para +, -, * y /, además se tiene el caso default en el que 
    no se introduce ningún operador válido, el break sirve para romper
    el switch luego de cada caso si este se cumple. */
    switch (oper) {

        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
        
        cout << "Error! el operador no es correcto";
        break;

    }

    /* se retorna un valor entero de cero finalizando
    la función main */
    return 0;
}