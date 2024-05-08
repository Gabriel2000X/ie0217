#ifndef ESTUDIANTE_HPP 
#define ESTUDIANTE_HPP

#include <string>

/*Se declara la clase estudiante*/
class Estudiante {

/*Se declaran los métodos públicos que son el constructor
y mostrarDatos*/
public:

    Estudiante (const std::string& nombre, int edad); 
    void mostrarDatos();

private:


    /*Se declaran los miembros o atributos privados*/
    std::string nombre;
    int edad;
    int edad2;
};

#endif