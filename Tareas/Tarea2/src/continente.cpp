/**
 * @file  continente.cpp
 * @brief Se realizan las definiciones de la clase Planeta, sus métdos y atributos.
 *
 * @author Gabriel González Rivera B93432
 * @date 9/4/2024
 * 
 * Licencia: MIT
 */




# include "continente.hpp"
# include <iostream>
using namespace std;


/*Se define el constructor de Continentes, definiendo en que atributo
de la clase se guardarán sus argumentos */

/**
 * @brief Constructor de la clase Continentes.
 * 
 * @param nombreCont es un valor tipo string que guarda el nombre del continente, se guarda en nombreContinente.
 * @param avion es un valor tipo booleano que es true si el avión pasa por el continente y es falso si el avión no pasa, se guarda en avion.
 */
Continentes::Continentes(string nombreCont, bool avion):
    nombreContinente(nombreCont), avion(avion) {}

    /*Se definen los métodos públicos obtenerNombre y 
    obtenerAvion que se utilizan para obtener 
    los valores de los atributos privados y usarlos
    en otras clases.*/

/**
 * @brief método tipo string de la clase Continentes que obtiene el valor de nombreContinente que es un atributo privado de la clase continentes..
 * 
 * @return Se retorna el valor de nombreContinente.
 */
    string Continentes::obtenerNombre() const {

        return nombreContinente;

    }

    
/**
 * @brief método tipo bool de la clase Continentes que obtiene el valor de avion que es un atributo privado de la clase Continentes.
 * 
 * @return Se retorna el valor de avion.
 */
    bool Continentes::obtenerAvion() const{

        return avion;

    }


        