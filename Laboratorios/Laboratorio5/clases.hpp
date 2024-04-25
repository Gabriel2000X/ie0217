/*Se incluyen las bibliotecas necesarias para desarrollar el laboratorio, 
se incluyen vector y algorithm que tienen que ver con el tema de std, vector
permite trabajar con vectores y algorith da acceso a una serie de algoritmos*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

class Libro {
public:
    std::string titulo;
    std::string autor;
    int anioPublicacion;

    Libro(std::string t, std::string a, int anio);
    bool operator<(const Libro& l) const;
};

class Biblioteca {
private:
    std::vector<Libro> libros;

public:
    void agregarLibro(const Libro& libro);

    void mostrarLibros();

    void ordenarLibrosPorAnio();

    std::vector<Libro>::iterator buscarLibroPorTitulo(const std::string& titulo);

    std::vector<Libro>::iterator end();
};