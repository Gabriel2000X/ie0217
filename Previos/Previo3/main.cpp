// ejemplo de utilización de archivos de encabezado
// para compilarlo utilizar g++ -o sum.exe ./main.cpp ./sum.cpp

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
# include <iostream>

/* se incluye el archivo de encabezado que contiene la 
declaración de la función.*/
# include "sum.hpp"

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;

/* Se define la función main que 
será la función principal del programa */
int main() {  

   /* Se definen las variables necesarias para el uso
   de la función, num1, num2 y result que utiliza
   la función sum con num1 y num2 como argumentos */
   int num1 = 9;
   int num2 = 3;
   int result = sum(num1, num2);

   /* Se utiliza cout para imprimir el resultado de la suma así como el valor de 
   cada variable que participa en la suma. */
   cout << "El resultado de " << num1 << " + " << num2 << " es igual a: " << result << endl;



    /* se retorna un valor entero de cero finalizando
    la función main */
    return 0;

}