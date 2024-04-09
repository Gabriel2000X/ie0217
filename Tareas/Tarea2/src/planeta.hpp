
#ifndef PLANETA_HPP
#define PLANETA_HPP 


# include "continente.hpp"
# include "paises.hpp"
# include <string>
# include <vector>
using namespace std;


/* Se declara la clase Planeta*/
class Planeta{

    public:

        /* Se declara el constructor de la clase con los argumentos que recibirá, 
        puntero es un puntero a un arreglo de objetos de tipo Continentes, 
        arrayLongitud es un entero que corresponde a la longitud del arreglo*/    
        Planeta(Continentes* puntero, int arrayLongitud, vector<PaisPrimerMundo>& vectPrimerMundo, vector<PaisEnDesarrollo>& vectDesarrollo);
        
        /* Se definen métodos públicos para imprimir la información de 
        los continentes*/  

        void imprimirContinentes() const;
        void imprimirAvion() const;  
        vector<PaisPrimerMundo> obtenerPaisesPrimerMundo();
        vector<PaisEnDesarrollo> obtenerPaisesEnDesarrollo();
        void actualizarPaisesPrimerMundo(vector<PaisPrimerMundo>& vect);
        void actualizarPaisesEnDesarrollo(vector<PaisEnDesarrollo>& vectSub);

        /*Se definen sus atributos como privados*/
    private:

        Continentes* punteroCont;
        int arregloLongitud;
        vector<PaisPrimerMundo> vectorPrimero;
        vector<PaisEnDesarrollo> vectorEnDesarrollo;


};



# endif //PLANETA_HPP