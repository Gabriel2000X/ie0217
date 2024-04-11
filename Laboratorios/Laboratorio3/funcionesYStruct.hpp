#include <string>
#include <iostream>


#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP 

using namespace std;

/*Se define completamente la estructura Libro en el 
archivo de encabezado para evitar múltiples definiciones*/
struct Libro{ 


    string titulo;
    string autor;
    string genero;
    Libro* siguiente;

};

/*Se declaran las funciones a utilizar */
void agregarLibro(Libro*& lista);
void mostrarLibros(Libro* lista);
void liberarMemoria(Libro*& lista);



# endif //FUNCIONES_HPP