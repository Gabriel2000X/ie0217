/*Si no está definido FUNCIONES_HPP
este se define */

#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP 


#include <string>
#include "estructura.hpp"

using namespace std;
/* Se declara la función del selector de dificultad*/
int selectorDificultad();

/* Se declara la función que agrega palabras al diccionario, se pasa
el segundo elemento con referencia a la función para poder modificarlo
dentro de la función y que la modificación persista fuera de la función
aunque no se retorne la variable*/
void agregarPalabra(string array[], int &cantidadPalabras);

/* Se delcara la función que muestra el diccionario, se pasa array como
conts para que no sea modificable y no se necesita usar la referencia de 
cantidadPalabras porque tampoco se modificará*/
void mostrarDiccionario( const string array[], int cantidadPalabras);

juego iniciarJuego( string array[], int cantidadPalabras, int dificultad );

#endif