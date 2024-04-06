# include "continente.hpp"
# include <iostream>
using namespace std;


/* */
Continentes::Continentes(string nombreCont, int avionNum):
    nombreContinente(nombreCont), avion(avionNum) {}

    bool Continentes::obtenerAvion() const{

        return avion == 1;
    }

        