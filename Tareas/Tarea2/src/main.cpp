/**
 * @file  main.cpp
 * @brief 
 *
 * @author Gabriel González Rivera B93432
 * @date 
 * 
 * Licencia: MIT
 */



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
    IMPRIMIR = 1,
    COMPARAR,
    AGREGAR,
    ELIMINAR,
    SALIR

    };




int main() {  
   
    /* Se declara la variable que contendrá la opción introducida por el 
    usuario. */
    
    int opcion;
    
 


   

    /*  se imprime el menú y se pide al usuario que digite la opción que quiera 
    utilizar, además se ejecuta por lo menos una vez ya que se tiene un do-while. */


    do {

        cout << "\nMenú\n";
        cout<< "1. Imprimir información de todos los países\n";
        cout<< "2. Comparar dos países\n";
        cout<< "3. Agregar país\n";
        cout<< "4. Eliminar país\n";
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
         en el menú según en número que el usuario introduzca en el menú. */

        switch (opcion)
        {
        case IMPRIMIR:
            cout<< "\nImprimiendo información de los países\n";
           

            break;
        case COMPARAR:
            cout<< "\nComparando países\n";
           
            break;

        case AGREGAR:
            cout<< "\nAgregando país\n";
            
            break;
        
        case ELIMINAR:
            
            cout << " \nEliminando país\n";
            
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