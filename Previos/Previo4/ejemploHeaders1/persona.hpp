//Archivo.hpp de declaración de clases, funciones y atributos

/* Si no está definido PERSONA_HPP
este se define */
#ifndef PERSONA_HPP
#define PERSONA_HPP


#include <string>

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;

/* Se declara la clase Persona, junto con sus métdos y atributos
tanto públicos como privados, no se los inicializa en este archivo. */
class Persona {

    private:
        string nombre;
        int edad;

public:
    Persona (string nombre, int edad); string getNombre();
    int getEdad();
    void setEdad (int edad);
};

#endif // PERSONA_H