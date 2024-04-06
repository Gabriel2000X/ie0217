
#ifndef CONTINENTE_HPP
#define CONTINENTE_HPP 



# include <string>
using namespace std;


/* Se declara la clase continente*/
class Continentes{

    public:

        /* Se declara el constructor de la clase con los argumentos que recibirá*/    
        Continentes(string nombreCont, int avionNum);
        string nombreContinente;
        int avion;
    

        /* Se declaran los métodos de la clase, estos serán públicos*/
        bool obtenerAvion() const;   //Este método devolverá un valor booleano dependiendo de si el avión pasa o no por el continente.
    
};



# endif //CONTINENTE_HPP