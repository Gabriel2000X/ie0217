/**
 * @file  main.cpp
 * @brief Se utilizan los métodos de la clase agendaCel con el 
 * objeto declarado, se declara la enumeración, el switch case y el do
 * while para generar el ciclo básico del programa.
 *
 * @author Gabriel González Rivera B93432
 * @date 15/4/2024
 * 
 * Licencia: MIT
 */



#include <iostream>
#include "clasesYEstruct.hpp"
using namespace std;


/*Se utiliza una enumeración para 
los casos del switch case*/
enum opciones  { 

    AGREGAR_CONTACTO = 1,
    ELIMINAR_CONTACTO,
    IMPRIMIR_DATOS,
    MOSTRAR_CONTACTOS,
    SALIR
    

}; 


int main(){ 

    
    agendaCel miAgenda;
    int opcion;

    /*Se usa un do while para que siempre se ejecute una vez el ciclo*/
    do{ 

        cout << "Seleccione una opción" << endl;
        cout << "1. Agregar un contacto" << endl;
        cout << "2. Eliminar un contacto" << endl;
        cout << "3. Imprimir datos (cloud)" << endl;
        cout << "4. Mostrar contactos" << endl;
        cout << "5. Salir" << endl;
        cin >> opcion;

        /*Se declara un switch case para que las opciones se ejecuten dependiendo
        de lo que el usuario digite.*/
        switch (opcion)
        {
        case AGREGAR_CONTACTO:
            

            miAgenda.agregarContacto();
            miAgenda.actualizarTabla();
            cout << "Agregando contacto\n" << endl;



            break;
        
        case ELIMINAR_CONTACTO:
            miAgenda.eliminarContacto();
            miAgenda.actualizarTabla();
            cout << "Eliminando contacto\n" << endl;

            break;

        case IMPRIMIR_DATOS: 

            cout << "Imprimiendo datos: \n" << endl;
            miAgenda.imprimirCloud();

            break;
        
        case MOSTRAR_CONTACTOS:

            cout << "Mostrando contactos: \n" << endl;
            miAgenda.imprimirContactos(); 

            break;

        case SALIR:

             cout << "Saliendo del programa... \n" << endl;

            break;

        
        
        default:

            break;
        }
    }

    while(opcion != 5);

 

    return(0);

}
