//Tarea 1

# include "Funciones.hpp"


/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
#include <iostream> 

#include <string>

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;

// Se crea la enumeración para darle un número correspondiente a las opciones
// del menú
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
    
   
    
    /* dificultad se define con un valor de 2 para que la dificultad por defecto 
    sea intermedio, de esta manera si no se  abre el selector de dificultad, 
    de igual manera se tiene un valor para esta */
    int dificultad = 2;


    


    /*  se imprime el menú y se pide al usuario que digite la opción que quiera 
    utilizar, además se ejecuta por lo menos una vez ya que se tiene un do-while. */
    do {

        cout<< "\nMenú\n";
        cout<< "1. Elegir la dificultad del juego (número de intentos)\n";
        cout<< "2. Iniciar juego\n";
        cout<< "3. Agregar palabras posibles\n";
        cout<< "4. Ver diccionario de palabras\n";
        cout<< "5. Salir del programa\n";
        cout<< "Ingrese su opcion: ";
        cin >>  opcion;

        // Se utiliza un switch para ejecutar las diferentes funciones que se tienen 
        // en el menú según en número que el usuario introduzca en el menú, en este 
        // switch se invocan las funciones creadas para cada opción.

        switch (opcion)
        {
        case DIFICULTAD:
            cout<< "\nSelector de dificultad\n";
            

            break;
        case INICIAR:
            cout<< "\nIniciando juego\n";
            
            
            break;

        case AGREGAR:
            
            
            break;
        
        case DICCIONARIO:
            
            cout << " \nAbriendo diccionario\n";
            
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