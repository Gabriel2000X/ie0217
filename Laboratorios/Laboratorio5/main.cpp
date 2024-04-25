
#include "clases.hpp"

int main() {
    Biblioteca miBiblioteca;
    /*Se crean los objetos tipo Libro y se agregan al objeto Biblioteca mediante el método
    agregarLibro*/
    miBiblioteca.agregarLibro({"Cien años de soledad", "Gabriel García Márquez", 1967});
    miBiblioteca.agregarLibro({"1984", "George Orwell", 1949});
    miBiblioteca.agregarLibro({"El señor de los anillos", "J.R.R. Tolkien", 1954});
    miBiblioteca.agregarLibro({"Harry Potter y la cámara secreta", "J.K Rowling", 1998});
    miBiblioteca.agregarLibro({"El principito", "Antoinde de Saint-Exupéry", 1943});

    /*Se ordenan los libros por año de publicación utilizando el método 
    ordenarLibrosPorAnio*/
    miBiblioteca.ordenarLibrosPorAnio();

    std::cout<< "Los libros ordenados por año de publicación son:" << std::endl;
    std::cout<< " \n " << std::endl;
    /*Se imprimen los libros con su información con el método 
    mostrarLibros  */
    miBiblioteca.mostrarLibros();

    std::cout<< " \n  " << std::endl; 
    std::cout<< "Buscando el libro 1984: " << std::endl; 
    auto libro = miBiblioteca.buscarLibroPorTitulo("1984");
    if (libro != miBiblioteca.end()) {
        std::cout << "Libro encontrado: " << libro->titulo << std::endl;
    } else {
        std::cout << "Libro no encontrado." << std::endl;
    }

    std::cout<< "Buscando el libro Hamlet: " << std::endl; 
    auto libro2 = miBiblioteca.buscarLibroPorTitulo("Hamlet");
    if (libro2 != miBiblioteca.end()) {
        std::cout << "Libro encontrado: " << libro2->titulo << std::endl;
    } else {
        std::cout << "Libro no encontrado." << std::endl;
    }


    return 0;
}
