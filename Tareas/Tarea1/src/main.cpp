/**
 * @file  main.cpp
 * @brief Este archivo contiene los procedimientos necesarios para utlizar las
 * funciones y estructuras de modo que el proyecto funcione como se quiere.
 *
 * @author Gabriel González Rivera B93432
 * @date 29/3/2024
 * 
 * Licencia: MIT
 */

# include "Funciones.hpp"


/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
#include <iostream> 

/*string permite trabajar con strings*/
#include <string>

/*Se incluye limits para evitar que el usuario introduzca
letras cuando se necesitan valores numéricos*/
#include <limits> 

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;


/**
 * @brief esta enumeración asigna números para construir el menú en un switch-case
 * la enumeración corresponde con los números de las opciones del menú.
 * 
 */
enum opciones { 
    DIFICULTAD = 1,
    INICIAR,
    AGREGAR,
    DICCIONARIO,
    SALIR

    };




int main() {  
   
    /* Se declaran las variables necesarias, dificultad se define con un valor de 2
    para que la dificultad por defecto sea intermedio, de esta manera si no se 
    abre el selector de dificultad, de igual manera se tiene un valor para esta, */
    
    int opcion;
    
    /* Se define numPalabras como 3, porque en un inicio se tienen 3 palabras en 
    diccionario, y para poder agregar palabras se necesita empezar desde 3 */
    int numPalabras = 3;
    
    /* dificultad se define con un valor de 2 para que la dificultad por defecto 
    sea intermedio, de esta manera si no se  abre el selector de dificultad, 
    de igual manera se tiene un valor para esta */
    int dificultad = 2;


    /* El diccionario se define con un valor de 100 para que le quepan 100 elementos como límite 
    y se añaden tres palabras predeterminadas para que se puda jugar sin añadir palabras en
    un inicio*/
    string diccionario[100] =  {"hola","mundo", "carne"};

    juego estructura;

    /*  se imprime el menú y se pide al usuario que digite la opción que quiera 
    utilizar, además se ejecuta por lo menos una vez ya que se tiene un do-while. */


    do {

        cout << "\nMenú\n";
        cout<< "1. Elegir la dificultad del juego (número de intentos)\n";
        cout<< "2. Iniciar juego\n";
        cout<< "3. Agregar palabras posibles\n";
        cout<< "4. Ver diccionario de palabras\n";
        cout<< "5. Salir del programa\n";
        cout<< "Ingrese su opcion: ";
    

        /*Se utliza un cliclo while en el que se introduce directamente la 
        entrada en la condición, si se introduce algo no válido como una letra
        se genera un false, pero el ! lo convierte en true, haciendo que el 
        ciclo se ejecute, con cin.clear se reestablece cin a su estado vacío
        y la línea de cin.ignore se encarga de ignorar todos los caracteres en 
        el buffer de entrada hasta que se llega a una nueva línea. */

        while (!(cin >> opcion)) {
            cout << "\nError: Ingrese un número válido.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        
        /* Se utiliza un switch para ejecutar las diferentes funciones que se tienen 
         en el menú según en número que el usuario introduzca en el menú, en este 
         switch se invocan las funciones creadas para cada opción. */

        switch (opcion)
        {
        case DIFICULTAD:
            cout<< "\nSelector de dificultad\n";
            dificultad = selectorDificultad();

            break;
        case INICIAR:
            cout<< "\nIniciando juego\n";
           estructura = iniciarJuego(diccionario, numPalabras, dificultad );
           verificarJuego(estructura); 
            break;

        case AGREGAR:
            agregarPalabra(diccionario, numPalabras);
            
            break;
        
        case DICCIONARIO:
            
            cout << " \nAbriendo diccionario\n";
            mostrarDiccionario(diccionario, numPalabras);
            break;

        case SALIR:
            
            cout << " \nSaliendo del programa\n";
            break;

        default:

            cout << "\nOpción no valida, intente de nuevo \n";

            break;
        }

        // Si la opción no es SALIR, entonces se vuelve a ejecutar el ciclo.
        } while (opcion != SALIR);

        

    return 0;

}