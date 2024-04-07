# include "continente.hpp"
# include <iostream>
using namespace std;


/*Se define el constructor de Continentes, definiendo en que aatributo
de la clase se guardarán sus argumentos */
Continentes::Continentes(string nombreCont, bool avion):
    nombreContinente(nombreCont), avion(avion) {}

    /*Se definen los métodos públicos obtenerNombre y 
    obtenerAvion que se utilizan para obtener 
    los valores de los atributos privados y usarlos
    en otras clases.*/
    string Continentes::obtenerNombre() const {

        return nombreContinente;

    }

    
    
    bool Continentes::obtenerAvion() const{

        return avion;

    }


        