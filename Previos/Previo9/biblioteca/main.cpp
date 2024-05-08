#include "biblioteca.hpp"

int main() {

    /*Se crea una instancia de biblioteca*/
    Biblioteca biblioteca;

    /*Se utiliza el método agregarLibro para agregar dos libros*/
    biblioteca.agregarLibro ("El Gran Gatsby", "F. Scott Fitzgerald"); 
    biblioteca.agregarLibro("1984", "George Orwell");

    /*Se muestra el catálogo*/
    biblioteca.mostrarCatalogo();
    
    return 0;
}