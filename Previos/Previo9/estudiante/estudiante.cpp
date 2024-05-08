#include <iostream> 
#include "estudiante.hpp"


/*Se define el constructor de la clase Estudiante*/
Estudiante::Estudiante(

    /*Se define en que atributos guardará los argumentos que 
    recibe*/
    const std::string& nombre, int edad
) : nombre (nombre), edad (edad) {}

/*Se define el método mostrarDatos que imprime los atributos 
nombre y edad*/
void Estudiante::mostrarDatos() {
    std::cout << "Nombre: " << nombre;
    std::cout << ", Edad: " << edad << std::endl;
}