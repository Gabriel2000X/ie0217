#include <iostream> 
#include "libro.hpp"

/*Se define la clase libro*/
Libro::Libro(
    /*Se define el constructor de la clase libro con los 
    atributos en los que se guardarán los argumentos recibidos*/
    const std::string& titulo, const std::string& autor
) : titulo(titulo), autor(autor) {}

/*Se define el funcionamiento de mostrarInfor que es imprimir los
atributos de la clase.*/
void Libro::mostrarInfo() const {
    std::cout << "Titulo: " << titulo << ", Autor: " << autor << std::endl;
}