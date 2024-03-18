// Ejemplo de anidaciones en toma de decisiones 
/* El programa imprime un mensaje si el numero introducido es positivo,
otro mensaje si el numero introducido es negativo, otro si es cero y 
hay un mensaje que siempre se imprime.*/

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
# include <iostream>

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;

/* Se define la función main que 
será la función principal del programa */
int main() {  
    
    int num; 

    /* Se utiliza cout para imprimir los datos en pantalla y 
    se utiliza cin para recibir los datos del usuario */
    cout << "Introduzca un entero: ";
    cin >> num;

    //cout << "Introduzca dos números: " << endl;

    /* Se establece la condición inicial y por lo tanto, la más externa */     

    if (num != 0) {
        // Las condiciones if y else internas solo ocurren si el if externo si se cumple
        /* Se establece una condición con un if interno */
        if (num > 0) {
            cout << "El número es positivo. " << endl;

        }
        /* Se establece una condición con un else interno */

        else {

            cout << "El número es negativo. " << endl;

        }
    }

    /* Se establece una condición con un else externo que ocurre si el 
    if externo no se cumple */
    
    else {

            cout << "El número es cero y no es ni negativo ni positivo. " << endl;

        }

    /* esta lìnea siempre se imprime debido a que está por fuera de los condicionales */
    cout << "Esta linea siempre se imprime " << endl;

    /* se retorna un valor entero de cero finalizando
    la función main */
    return 0;
}