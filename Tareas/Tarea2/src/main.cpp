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
# include "funciones.hpp"
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
    
    /*Se inicializan dos instancias de Pais de manera genérica
    para luego llenarlas con los datos relevantes en la opcion 2 del
    menú*/
    Pais primerPais(true, 2,  1, "Generico", "Generico");
    Pais segundoPais(true, 2,  1, "Generico", "Generico");
    bool comparacion;


    /*Se crea un vector donde se guardarán los países creados*/

    /*Se crea un vector de tipo PaisPrimerMundo*/
    vector<PaisPrimerMundo> vecPrimerMundo;
    vector<PaisEnDesarrollo> vecEnDesarrollo;
    
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
    vecEnDesarrollo.push_back(PaisEnDesarrollo(true, 50000, 10 , "Kiribati",  "Oceanía"));
    
    
    
    
    /*Se crea un vector de números primos para poder establecerlos como Id de países desarrollados*/

     vector<int> vecPrimos = {17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 
                            113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 
                            227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 
                            337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419, 421, 431, 433, 439, 443, 
                            449, 457, 461, 463, 467, 479, 487, 491, 499, 503, 509, 521, 523, 541, 547, 557, 563, 569, 571, 
                            577};
    


    /*Se crea un vector de números no primos para poder establecerlos como Id de funciones de países en desarrollo*/
    
    vector<int> vecNoPrimos = {12, 14, 15, 16, 18, 20, 21, 22, 24, 25, 26, 27, 28, 30, 32, 33, 34, 35, 
                                36, 38, 39, 40, 42, 44, 45, 46, 48, 49, 50, 51, 52, 54, 55, 56, 57, 58, 
                                60, 62, 63, 64, 65, 66, 68, 69, 70, 72, 74, 75, 76, 77, 78, 80, 81, 82, 
                                84, 85, 86, 87, 88, 90, 91, 92, 93, 94, 95, 96, 98, 99, 100, 102, 104, 
                                105, 106, 108, 110, 111, 112, 114, 115, 116, 117, 118, 119, 120, 121, 122, 
                                123, 124, 125, 126, 128, 129, 130, 132, 133, 134, 135, 136, 138, 140, 141, 
                                142, 143, 144, 145, 146, 147, 148, 150};
       
    

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
        
            for (PaisEnDesarrollo& paisEnDes : vecEnDesarrollo) {
            cout << "Nombre del país: " << paisEnDes.nombrePais << endl;
            }

            break;
        case COMPARAR:
            
            primerPais = converir(vecPrimerMundo, vecEnDesarrollo);
            segundoPais = converir(vecPrimerMundo, vecEnDesarrollo);
            comparacion =comparar( primerPais,segundoPais);
            
            if (comparacion){

                cout<< "Ambos países tienen aeropuerto";
            }
            else {
                
                cout<< "Alguno de los dos países no tiene aeropuerto";
            }
            cout<< "\nComparando países\n";
            
           
            break;

        case AGREGAR:

        int constante;
            
        cout << "¿Que tipo de país está creando?\n";
        cout << "1.Un país desarrollado.\n";
        cout << "2.Un país subdesarrollado.\n";
        cout << "\nIngrese el valor deseado\n";
        while (!(cin >> constante)) {
            cout << "\nError: Ingrese un valor numérico.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

            if (constante == 1) {
                
                vecPrimerMundo.push_back(crearPaisPrim(vecPrimos));
            }

            else {

                 vecEnDesarrollo.push_back(crearPaisEnDes(vecPrimos));
            }

           
            cout<< "\nAgregando país\n";
            
            break;
        
        case ELIMINAR:
            
            EliminarPais(vecPrimerMundo, vecEnDesarrollo);
            cout << " \nSi el país no existe no se eliminará\n";
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