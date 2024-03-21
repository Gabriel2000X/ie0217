// Si no está definido FUNCIONES_HPP
// este se define

#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP 


# include "Contacto.hpp"

// en agregar contacto se utiliza la referencia en memoria 
// para modificar la lista original de numContactos, como se 
// envía desde la declaración, entonces no se debe usar el 
// ampersand a la hora de invocar la función
void agregarContacto(contacto listaContactos[], int &numContactos);

// para las demás funciones solo se les pasa una copia de numContactos
// y se les pasa listaContactos como constrante, porque no se desea 
// modificar la lista.
void mostrarContactos( const contacto listaContactos[], int numContactos);
void buscarContacto(const contacto listaContactos[], int numContactos);

#endif