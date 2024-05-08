#ifndef BIBLIOTECA_HPP 
#define BIBLIOTECA_HPP


#include <vector>
#include "libro.hpp"

/*Se declara la clase biblioteca*/
class Biblioteca {

public:
    
    /*Se declara el método agregar libro
    y el método agregar catalogo*/
    void agregarLibro(

        const std::string& titulo, 
        const std::string& autor
    );
    
    
    void mostrarCatalogo();

private:

/*Se definen los atributos privados, en este caso solo está
el atributo catalogo que es un vector de objetos tipo Libro*/
    
    std::vector<Libro> catalogo;
};

#endif