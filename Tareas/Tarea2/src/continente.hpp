
#ifndef CONTINENTE_HPP
#define CONTINENTE_HPP 



# include <string>
using namespace std;


/* Se declara la clase continente*/
class Continentes{

    public:

        /* Se declara el constructor de la clase con los argumentos que recibirá,
        nombreCont corresponde al nombre del continente y avion a un valor 
        booleano que si es true significa que el avión pasa sobre el continente
        y si fuera false, quiere decir que no pasa sobre el continente.*/    
        Continentes(string nombreCont, bool avion);
        string obtenerNombre() const;
        bool obtenerAvion() const;
    

    private:

        
        string nombreContinente;
        bool avion;
};  



# endif //CONTINENTE_HPP