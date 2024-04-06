
#ifndef CONTINENTE_HPP
#define CONTINENTE_HPP 



# include <string>
using namespace std;


/* Se declara la clase continente*/
class Continentes{

    public:

        /* Se declara el constructor de la clase con los argumentos que recibirá*/    
        Continentes(string nombreCont, bool avionNum);
        string nombreContinente;
        int avion;

    
};



# endif //CONTINENTE_HPP