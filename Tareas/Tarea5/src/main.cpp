/**
 * @file  main.cpp
 * @brief Se utilizan los métodos y funciones declarados 
 * en los demás archivos para lograr generar un menú 
 * funcional de acciones destinadas a matrices
 *
 * @author Gabriel González Rivera B93432
 * @date 6/5/2024
 * 
 * Licencia: MIT
 */

#include "claseEmail.hpp"
#include <iostream>

using namespace std;


/*Se utiliza una enumeración para 
los casos del switch case*/
enum opciones  { 

    INGRESAR_CORREO = 1,
    SALIR
    

}; 



int main(){ 

    /*Se utiliza int opcion para guardar el número escogido en el menú*/
    int opcion;

    /*Se crea una instancia de validadorEmail*/
    ValidadorEmail validadorMail;

    /*Se crea una variable llamada mail donde se almacenará el correo digitado*/
    
    string mail;

    /*Se usa un do while para que siempre se ejecute una vez el ciclo*/
    do{ 

        cout << "Seleccione una opción." << endl;
        cout << "1. Ingresar el correo eléctronico" << endl;
        cout << "2. Salir del programa" << endl;
        cin >> opcion;

        /*Se declara un switch case para que las opciones se ejecuten dependiendo
        de lo que el usuario digite.*/
        switch (opcion)
        {
        case INGRESAR_CORREO:

            cout << "Ingrese el correo electrónico: " << endl;
            cin >> mail;
            
            if (validadorMail.validarCorreo(mail) == true){ 

                
                cout << "La dirección de correo tiene un formato correcto" << endl;


            }

            else { 

                 cout << "La dirección de correo tiene un formato incorrecto" << endl;


            }

            break;
        
        

            
        case SALIR:

             cout << "Saliendo del programa... \n" << endl;

            break;

        
        
        default:

            break;
        }
    }

    while(opcion != 2);

 

    return(0);

}
