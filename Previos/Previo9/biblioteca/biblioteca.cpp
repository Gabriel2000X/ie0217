#include <iostream> 
#include "biblioteca.hpp"

/*Se define el método agregarlibro, este recibe título y
autor y los guarda en catalogo*/
void Biblioteca::agregarLibro(

    const std::string& titulo, 
    const std::string& autor
) {
    
    catalogo.emplace_back(titulo, autor);
}

/*Se define el funcionamiento del método 
mostrarCatalogo, se utiliza un for para
acceder a las entradas de catalogo del 
elemento tipo libro y mostrar su información
con el método mostrarInfo*/
void Biblioteca::mostrarCatalogo() { 
    

    for (const auto& libro : catalogo) { 
        
        libro.mostrarInfo();
    }
}