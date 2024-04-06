
#ifndef PLANETA_HPP
#define PLANETA_HPP 



# include <string>
using namespace std;


/* Se declara la clase continente*/
class continente{

    public:

        /* Se declara el constructor de la clase con los argumentos que recibirá*/    
        continente(string nombreCont, int avionNum);
        
    

        /* Se declaran los métodos de la clase, estos serán públicos*/
        string obtenerNombre();  // Este método devolverá el nombre del continente
        bool obtenerAvion ();   //Este método devolverá un valor booleano dependiendo de si el avión pasa o no por el continente.
    
};



# endif //PLANETA_HPP