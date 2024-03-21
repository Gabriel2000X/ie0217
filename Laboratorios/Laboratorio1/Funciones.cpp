#include "Funciones.hpp"

void agregarContacto(contacto listaContactos[], int &numContactos) {
    // Se le pide al usuario ingresar el nombre y el número 
    // del contacto con cin y se guardan estos valores en los elementos
    // correspondientes de la estructura.
    contacto nuevoContacto;
    std::cout << " Ingrese el nombre del contacto: ";
    std::cin >>  nuevoContacto.nombre;
    std::cout << " Ingrese el número de teléfono: ";
    std::cin >>  nuevoContacto.telefono;

    // Se le suma una entrada a numContactos y se almacena
    // nuevoContacto 
    listaContactos[numContactos++] = nuevoContacto;

}

void mostrarContactos( const contacto listaContactos[], int numContactos) {
    // se itera sobre la lista de contactos, mientras se tenga una i menor
    // que numContactos se aumenta i.
    std::cout<< "Lista de contactos:\n";
    for (int i = 0; i< numContactos; ++i) {
        
        // se imprime el nombre y el teléfono de cada contacto de listaContactos
        // utilizando la i como número de la lista 
        std::cout<< "Nombre: " << listaContactos[i].nombre << ", Teléfono: " << listaContactos[i].telefono << "\n";


        }

    }


void buscarContacto(const contacto listaContactos[], int numContactos) {
    // Se recibe el nombre que se buscará como nombreBusqueda que introduce 
    // el usuario, se crea una variable booleana llamada encontrado con un 
    // valor de false


    std::string nombreBusqueda;
    std::cout << " Ingrese el nombre a buscar: ";
    std::cin >> nombreBusqueda;
    bool encontrado = false;

    // Utilizando un for, se itera sobre listaContactos mientras i sea menor que numContactos
    // si el nombre del contacto es igual al nombre de busqueda, se imprime la información 
    // del contacto, se declara encontrado como true y se rompe el for. 
    for (int i = 0; i < numContactos; i++) {

        if (listaContactos[i].nombre == nombreBusqueda ) {

            std::cout<< "Nombre: " << listaContactos[i].nombre << ", Teléfono: " << listaContactos[i].telefono << "\n";
            encontrado = true;
            break;
    
            }

        }
        // si encontrado no es true entonces el contacto no se encontró
        // por lo que se imprime contacto no encontrado
        if (!encontrado) {

            std::cout << "Contacto no encontrado\n ";
            }


      }