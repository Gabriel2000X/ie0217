#include <iostream>
#include "funcionesYStruct.hpp"

/*Se utiliza una enumeración para 
los casos del switch case*/
enum opciones  { 

    AGREGAR_LIBRO = 1,
    MOSTRAR_LIBROS ,
    SALIR,
    OPCIONES_MAX

}; 


int main(){ 

    /*Se inicializa listaLibros con un libro puntero como 
    un nullptr osea que apunta la nada.*/
    Libro* listaLibros = nullptr;
    int opcion;

    /*Se usa un do while para que siempre se ejecute una vez el ciclo*/
    do{ 

         cout << "Seleccione su opción" << endl;
        cout << "1. Agregar un libro" << endl;
        cout << "2. Mostrar todos los libros" << endl;
        cout << "3. Salir" << endl;
        cin >> opcion;


        switch (opcion)
        {
        case AGREGAR_LIBRO:
            agregarLibro(listaLibros);
            break;
        
        case MOSTRAR_LIBROS:

            mostrarLibros(listaLibros);

            break;

        case SALIR: 

            cout << "Saliendo del programa" << endl;

            break;
        
        
        default:
            break;
        }
    }

    while(opcion != 3);

    liberarMemoria(listaLibros);

    return(0);

}

