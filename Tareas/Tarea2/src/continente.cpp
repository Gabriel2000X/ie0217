# include "continente.hpp"
# include <iostream>
using namespace std;


/* */
continente::continente(string nombreCont, int avionNum):
    nombreContinente(nombreCont), avion(avionNum) {}

    bool continente::obtenerAvion() const{

        return avion == 1;
    }

        