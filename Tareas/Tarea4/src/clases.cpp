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