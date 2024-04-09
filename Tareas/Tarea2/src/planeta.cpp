# include "planeta.hpp"
# include <iostream>
using namespace std;


/* Se define el constructor de la clase Planeta y se declara que los argumentos se guardarán dentro de los 
atributos creados*/
Planeta::Planeta(Continentes* puntero, int arrayLongitud, vector<PaisPrimerMundo>& vectPrimerMundo, vector<PaisEnDesarrollo>& vectDesarrollo): 
punteroCont(puntero), arregloLongitud(arrayLongitud), vectorPrimero(vectPrimerMundo), vectorEnDesarrollo(vectDesarrollo) {}

   
    
    /*Se define el método imprimirContinentes, que imprime
    el nombre de los continentes creados, esto se logra
    mediante el recorrido de la información que está dentro
    de cada entrada del puntero que apunta al arreglo 
    que contiene los objetos de clase Continentes usando un 
    ciclo for.*/
    void Planeta::imprimirContinentes() const {
        /*Se imprime el número de continentes con la longitud del array y
        se imprimen los nombres de los continentes usando obtenerNombre
        que es un método de la clase Continentes.*/
        cout << "Planeta posee " << arregloLongitud << " continentes: ";
        for (int i = 0; i < arregloLongitud; ++i) {
            
            /*La coma solo se imprime antes del 
            nombre de un continente si la entrada es 
            diferente de cero.*/
            if (i != 0) {
                cout << ", ";
            }
            /*Al accesar un puntero de esta manera se accede directamente
            a los elementos dentro de las direcciones de memoria que guarda*/
            cout << punteroCont[i].obtenerNombre();
        }
        cout << "." << endl;
    }

    /*Se define el método imprimirAvion, que imprime
    el nombre de los continentes creados si su atributo avion
    es igual a true, esto se logra mediante el recorrido de la 
    información que está dentro de cada entrada del puntero 
    que apunta al arreglo que contiene los objetos de clase 
    Continentes usando un ciclo for.*/
    void Planeta::imprimirAvion() const {
        cout << "De estos continentes, el avión pasa por los siguientes: ";
        for (int i = 0; i < arregloLongitud; ++i) {
            /*Se utiliza  el método obtenerAvion de la clase Continentes
            para obtener el valor booleano que expresa si el avión pasa
            o no por el continente y si es true se imprime su nombre 
            en la lista usando obtenerNombre.*/
            if (punteroCont[i].obtenerAvion() == true) {
                
                if (i != 0) {
                cout << ", ";
            
                
                }
                
                /*Al accesar un puntero de esta manera se accede directamente
                a los elementos dentro de las direcciones de memoria que guarda*/
                cout << punteroCont[i].obtenerNombre();
            }


        }
        cout  << "." << endl;
    }
    

vector<PaisPrimerMundo> Planeta::obtenerPaisesPrimerMundo() {
        
        return vectorPrimero;
    
}


vector<PaisEnDesarrollo> Planeta::obtenerPaisesEnDesarrollo() {
        
        return vectorEnDesarrollo;
    
}


void  Planeta::actualizarPaisesPrimerMundo(vector<PaisPrimerMundo>& vect){

    vectorPrimero = vect;

}

void  Planeta:: actualizarPaisesEnDesarrollo(vector<PaisEnDesarrollo>& vectSub){

    vectorEnDesarrollo = vectSub;

}