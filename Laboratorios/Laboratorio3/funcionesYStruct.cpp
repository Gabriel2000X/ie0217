#include "funcionesYStruct.hpp"



/*Se define la función agregarLibro que recibo como argumento 
un objeto libro puntero por referencia para poder modificarlo
directamente sin tener que accesarlo sin aritmética de punteros*/
void agregarLibro(Libro*& lista){ 

    /*Se crea una nueva instancia de libro y se guarda su
    dirección de memoria en el Libro puntero nuevoLibro*/
    Libro* nuevoLibro = new Libro;

    /*Se le pide al usuario la información del libro 
    y se guarda en el objeto al que apunta el punetro
    usando el operador flecha */
    cout << "Ingrese el título del libro: " << endl;
    cin.ignore();
    getline(cin, nuevoLibro-> titulo);

    cout << "Ingrese el autor del libro: " << endl;
    getline(cin, nuevoLibro-> autor);

    cout << "Ingrese el género del libro: " << endl;
    getline(cin, nuevoLibro-> genero);

    /*Se guarda en siguiente la información de la dirección de 
    memoria.*/
    nuevoLibro  ->  siguiente = lista;
    lista = nuevoLibro;

    cout << "Libro agregado correctamente " << endl;

}


/*Se crea una función que se utiliza para mostrar la información
de los libros creados accesando al libro puntero*/
void mostrarLibros(Libro* lista) {

    /*Si lista apunta la nada entonces se termina 
    la función*/
    if (lista == nullptr) { 

        cout << "La librería no tiene libros " << endl;
        return;
    }


    cout << "Lista de libros: " << endl;

    /*Mientras lista no apunte a la nada entonces se imprime 
    la información del libro y se avanza a la dirección de memoria
    del siguiente elemento tipo Libro que se tiene para imprimir su
    información. */
    while (lista != nullptr){ 

        cout << "Título: " << lista -> titulo << endl;
        cout << "Autor: " << lista -> autor << endl;
        cout << "género: " << lista -> genero << endl << endl;
        lista = lista -> siguiente;
    }
}

/*Se utiliza una función para liberar la memoria dinámica utilizada
, esta recibe el libro puntero por referencia.*/

void liberarMemoria(Libro*& lista){ 

    /*Si lista no apunta a la nada se guarda el primer elemento de la
    lista en una variable temporal llamada temp, se pasa al siguiente
    elemento de la lista y se eleminia la variable temporal de la memoria
    dinámica. */
    while(lista != nullptr){ 

        Libro* temp = lista;
        lista = lista -> siguiente;
        delete temp;

    }


}