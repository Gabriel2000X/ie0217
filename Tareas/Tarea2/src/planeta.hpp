
#ifndef PLANETA_HPP
#define PLANETA_HPP 


# include "continente.hpp"
# include <string>
using namespace std;


/* Se declara la clase Planeta*/
class Planeta{

    public:

        /* Se declara el constructor de la clase con los argumentos que recibirá, 
        puntero es un puntero a un arreglo de objetos de tipo Continentes, 
        arrayLongitud es un entero que corresponde a la longitud del arreglo*/    
        Planeta(Continentes* puntero, int arrayLongitud);
        
        /* Se definen métodos públicos para imprimir la información de 
        los continentes*/  

        void imprimirContinentes() const;
        void imprimirAvion() const;  

        /*Se definen sus atributos como privados*/
    private:

        Continentes* punteroCont;
        int arregloLongitud;
};



# endif //PLANETA_HPP