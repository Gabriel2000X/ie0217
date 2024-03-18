// Ejemplo de uso de la sentencia goto 

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
# include <iostream>

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;



/* Se define la función main que 
será la función principal del programa */
int main() {  
   
    /* Se declaran las variables flotantes juntas, num será los números
    introducidos, average será para guardar su promedio y en sum se 
    guardará su suma.  */
    float num, average, sum = 0.0;

    /* Se declaran las variables enteras juntas, i será el índice del bucle for
    y n será el límite del bucle */
    int i, n;

    /* Se le pide al usuario el número máximo de entradas con
    cin para que pueda obtenerse la información que digita el usuario */
    cout << "Máximo número de entradas: ";
    cin >> n; 

    /* Se declara el ciclo for, que empieza en 1 y termina en n */ 
    for(i = 1; i <= n; ++i) {

        /* Se le pide al usuario que introduzca un número  */ 
        cout << "Introduzca n = " << i << ": ";
        cin >> num;

        /* si el número es menor que cero se usa jump para saltar al promedio */
        if(num < 0.0 ) {
            goto jump;
        }

        /* Si el número es mayor que cero se añade a la suma */
        sum += num;
    }

    /* en la sección jump se tiene el promedio de los números y la impresión del mismo */ 
    jump:

    average = sum / (i - 1);
    cout <<  "\nAverage = " << average;
    

    /* se retorna un valor entero de cero finalizando
    la función main */
    return 0;
}