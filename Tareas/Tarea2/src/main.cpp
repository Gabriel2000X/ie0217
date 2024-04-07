/**
 * @file  main.cpp
 * @brief 
 *
 * @author Gabriel González Rivera B93432
 * @date 
 * 
 * Licencia: MIT
 */
# include "paises.hpp"
# include "continente.hpp"
# include "planeta.hpp"

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
#include <iostream> 

/*string permite trabajar con strings*/
#include <string>

/*Se incluye limits para evitar que el usuario introduzca
letras cuando se necesitan valores numéricos*/
#include <limits> 

#include <vector>

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
    
 
    /*Se declara un arreglo tipo continentes que contendrá la información de cada continente*/
    
    Continentes arregloCont[5] = {
        Continentes("América", true),
        Continentes("Europa", true),
        Continentes("Asia", true),
        Continentes("Oceanía", false),
        Continentes("África", false)
    };

   /*Se crea un puntero Continentes que apunta a arreglo para poder 
   acceder a sus datos desde planeta.*/
    Continentes* puntero = arregloCont;
    
    

    /*Se crea un objeto tipo planeta*/

    Planeta miPlaneta(puntero, 5);


    /*Se crea un vector donde se guardarán los países creados*/

    /*Se crea un vector de tipo PaisPrimerMundo*/
    std::vector<PaisPrimerMundo> vecPrimerMundo;
    std::vector<PaisEnDesarrollo> vecEnDesarrollo;
    
    /*Se añaden algunos países de cada continente a cada vector*/
    /*Paises de primer mundo*/
    /* primer mundo bool tieneAeropuerto, int poblacionPais, int id, string nombre, string continente, bool tiene5G, bool centroInvest*/
    vecPrimerMundo.push_back(PaisPrimerMundo(true, 300000, 2, "Estados Unidos", "América", true, true ));
    vecPrimerMundo.push_back(PaisPrimerMundo(true, 100000, 3, "Japón", "Asia", true, false ));
    vecPrimerMundo.push_back(PaisPrimerMundo(true, 145600, 5, "Italia", "Europa", false, false ));
    vecPrimerMundo.push_back(PaisPrimerMundo(false, 356876, 7, "Australia", "Oceanía", true, true ));
    vecPrimerMundo.push_back(PaisPrimerMundo(false, 103456, 11, "Egipto", "África", false, true ));
    
    /*Paises en desarrollo*/
    /*bool tieneAeropuerto, int poblacionPais, int id, string nombre, string continente*/
    vecEnDesarrollo.push_back(PaisEnDesarrollo(true, 50000, 4 , "Costa Rica",  "América"));
    vecEnDesarrollo.push_back(PaisEnDesarrollo(false, 54556, 6 , "Tailandia",  "Asia"));
    vecEnDesarrollo.push_back(PaisEnDesarrollo(true, 65433, 8 , "Serbia",  "Europa"));
    vecEnDesarrollo.push_back(PaisEnDesarrollo(true, 76543, 9 , "Burundi",  "África"));
    vecEnDesarrollo.push_back(PaisEnDesarrollo(true, 50000, 4 , "Kiribati",  "Oceanía"));
    
    
    
    

    

    /* Se imprime el menú y se pide al usuario que digite la opción que quiera 
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
            miPlaneta.imprimirContinentes();
            miPlaneta.imprimirAvion();

            for (PaisPrimerMundo& paisDesarrollado : vecPrimerMundo) {
            cout << "Nombre del país: " << paisDesarrollado.nombrePais << endl;
            }



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