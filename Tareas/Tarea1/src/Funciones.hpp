/**
 * @file  Funciones.hpp
 * @brief Este archivo contiene las declaraciones de las funciones necesarias 
 * para el funcionamiento del proyecto.
 *
 * @author Gabriel González Rivera B93432
 * @date 29/3/2024
 * 
 * Licencia: MIT
 */

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


/*Se declara la función que inicializa el juego, para esto elige la palabra
al azar dentro del arreglo, inicializa la palabra a adivinar e inicializa
los intentos actuales y máximos, esta función construye el elemento de la 
estructura y lo devuelve*/
juego iniciarJuego( string array[], int cantidadPalabras, int dificultad );

/*Se declara la función que pide una letra al usuario, la compara con las 
letras de la palabra elegida y actualiza la palabra a adivinar, además
actualiza el contador de intentos, se accede a atributos con ampersand
para acceder por referencia y poder realizar cambios sobre este. */
void adivinarPalabra(juego &atributos);

/*Se declara la función que verifica si el juego ha terminado en cada turno,
se accede a atributos por referencia para poder hacer cambios sobre este.*/
void verificarJuego(juego &atributos);
#endif