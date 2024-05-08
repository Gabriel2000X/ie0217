#ifndef LIBRO_HPP
#define LIBRO_HPP

#include <string>

/*Se declara la clase libro junto con sus métodos y atributos*/
class Libro {

/*Se declara el constructor de la clase y el método mostrar info*/
public:
    Libro(const std::string& titulo, const std::string& autor); 
    void mostrarInfo() const;

/*Se declaran sus atributos privados*/
private:
    std::string titulo; 
    std::string autor;
};

#endif