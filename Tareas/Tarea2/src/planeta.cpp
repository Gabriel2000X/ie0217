/**
 * @file  planeta.cpp
 * @brief Se realizan las definiciones de la clase Planeta, sus métdos y atributos.
 *
 * @author Gabriel González Rivera B93432
 * @date 9/4/2024
 * 
 * Licencia: MIT
 */


# include "planeta.hpp"
# include <iostream>
using namespace std;


/* Se define el constructor de la clase Planeta y se declara que los argumentos se guardarán dentro de los 
atributos creados*/

/**
 * @brief Constructor de la clase Planeta.
 * 
 * @param puntero es un puntero hacia un arreglo de tipo Continentes que contiene los continentes del programa, se guarda en punteroCont.
 * @param arrayLongitud es un valor entero que será la longitud del arreglo al que apunta puntero, se guarda en arregloLongitud.
 * @param vectPrimerMundo es un argumento tipo vector en el que se ubicará un vector que contenga países del primerMundo, se guarda en vectorPrimero.
 * @param vectDesarrollo es un argumento tipo vector en el que se ubicará un vector que contenga países en desarrollo, se guarda en vectorEnDesarrollo.
 */
Planeta::Planeta(Continentes* puntero, int arrayLongitud, vector<PaisPrimerMundo>& vectPrimerMundo, vector<PaisEnDesarrollo>& vectDesarrollo): 
punteroCont(puntero), arregloLongitud(arrayLongitud), vectorPrimero(vectPrimerMundo), vectorEnDesarrollo(vectDesarrollo) {}

   
    
    /*Se define el método imprimirContinentes, que imprime
    el nombre de los continentes creados, esto se logra
    mediante el recorrido de la información que está dentro
    de cada entrada del puntero que apunta al arreglo 
    que contiene los objetos de clase Continentes usando un 
    ciclo for.*/

/**
 * @brief Es un método tipo void de la clase Planeta que imprime los continentes declarados
 * en el programa usando el arreglo de continentes y el método
 * obtenerNombre.
 * 
 */
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

/**
 * @brief Es un método tipo void de la clase Planeta para verificar e imprimir si el avión pasa sobre el 
 * continente.
 * 
 */
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
    
/*Se define un método que devuelve un vector, este método
se usará para obtener el valor del vector de países del 
primer mundo que fue declarado un atributo privado en 
Planeta*/

/**
 * @brief Es un método tipo vector de la clase Planeta para obtener
 * un argumeno privado.
 * 
 * @return Retorna vectorPrimero que corresponde al vector
 * que almacena los paises de primer mundo.
 */
vector<PaisPrimerMundo> Planeta::obtenerPaisesPrimerMundo() {
        
        return vectorPrimero;
    
}

/*Se define un método que devuelve un vector, este método
se usará para obtener el valor del vector de países del 
en desarrollo que fue declarado un atributo privado en 
Planeta*/

/**
 * @brief Es un método tipo vector de la clase Planeta para obtener
 * un argumeno privado.
 * 
 * @return Retorna vectorEnDesarrollo que corresponde al vector
 * que almacena los paises en desarrollo.
 */
vector<PaisEnDesarrollo> Planeta::obtenerPaisesEnDesarrollo() {
        
        return vectorEnDesarrollo;
    
}

/*Se definen dos métodos que se utilizan para actualizar los vectores
que contienen los países, esto porque cuando se agregan o eliminan países
se debe actualizar los vectores de argumento que recibe la función imprimirInformacion.*/

/**
 * @brief Es un método tipo void de la clase Planeta que se utiliza para 
 * actualizar el contenido de vectorPrimero que corresponde al contenido
 * del vector que contiene los paises del primer mundo 
 * 
 */
void  Planeta::actualizarPaisesPrimerMundo(vector<PaisPrimerMundo>& vect){

    vectorPrimero = vect;

}


/**
 * @brief Es un método tipo void de la clase Planeta que se utiliza para 
 * actualizar el contenido de vectorEnDesarrollo que corresponde al contenido
 * del vector que contiene los paises en desarrollo.
 * 
 */
void  Planeta:: actualizarPaisesEnDesarrollo(vector<PaisEnDesarrollo>& vectSub){

    vectorEnDesarrollo = vectSub;

}