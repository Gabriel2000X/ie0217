# include <iostream>
# include "Contacto.hpp"
# include "Funciones.hpp"
// Se cambia en precompilación la palabra 
// MAX_CONTACTOS por el número 100
# define MAX_CONTACTOS 100

// Se crea la enumeración para darle un número correspondiente a las opciones
// del menú
enum opciones { 
    AGREGAR = 1,
    MOSTRAR,
    BUSCAR,
    SALIR

    };

int main() {  
    // Se inicializa una instancia de tipo 
    // contacto llamada listaContactos
    // tiene 100 elementos 
    contacto listaContactos [MAX_CONTACTOS];

    // se declara e inicializa numContactos y se declara
    // opcion
    int numContactos = 0;
    int opcion;

    // se imprime el menú y se pide al usuario que digite la opción que quiera utilizar.
    // además se ejecuta por lo menos una vez ya que se tiene un do-while.
    do {

        std::cout<< "\nMenú\n";
        std::cout<< "1. Agregar contacto\n";
        std::cout<< "2. Mostrar contactos\n";
        std::cout<< "3. Buscar contacto\n";
        std::cout<< "4. Salir\n";
        std::cout<< "Ingrese su opcion: ";
        std::cin >>  opcion;

        // Se utiliza un switch para ejecutar las diferentes funciones que se tienen 
        // en el menú según en número que el usuario introduzca en el menú, en este 
        // switch se invocanlas funciones creadas para cada opción.

        switch (opcion)
        {
        case AGREGAR:
            agregarContacto(listaContactos, numContactos);
            
            break;
        case MOSTRAR:
            mostrarContactos(listaContactos, numContactos);
            
            break;

        case BUSCAR:
            buscarContacto(listaContactos, numContactos);
            
            break;
        
        case SALIR:
            
            std::cout << " Saliendo del programa ....\n";
            break;

        default:

            std::cout << "Opción no valida, intente de nuevo \n";

            break;
        }

        // Si la opción no es SALIR, entonces se vuelve a ejecutar el ciclo.
        } while (opcion != SALIR);




    return 0;

}