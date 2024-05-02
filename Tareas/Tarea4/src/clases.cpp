#include "clases.hpp"


/*Se declara el método validadTipoDato que pertenece a la clase ValidadorDeEntrada
el cual valida que la entrada introducida por el usuario refleje un 
formato permitido */
std::string ValidadorDeEntrada::validarTipoDato(std::string input){ 
   
    /*Se utilizan if y else if para manejar los casos en los que 
    se introducen los formatos premitidos*/
    if (input == "enteros") {
            return "int";
    } 
        
    else if (input == "flotantes") {
        return "float";
    } 
        
    else if (input == "complejos") {
        return "std::complex";
    } 

    /*Se utiliza un else final para manejar el caso de que no se 
    introduzca un formato compatible, se lanza una excepción tipo 
    invalid_argument utilizando throw*/    
    else {
        throw std::invalid_argument("Tipo de dato no compatible");
    }


}

/*Se defien el método validarDimensiones, este debe un entero*/
void ValidadorDeEntrada::validarDimensiones(int tamano){ 
   
    /*Se utiliza if para lanzar la excepción siempre que algún valor involucrado en el tamaño
    de la matriz tenga un valor igual a cero o menor*/
    if (tamano  <= 0 ) {

        /*Se utiliza un throw para lanzar una excepción si el valor de tamano está fuera del rango
        permitido*/
          throw ("\nEl tamaño de la matriz no puede contener valores negativos o cero\n");  
    } 
        


}







