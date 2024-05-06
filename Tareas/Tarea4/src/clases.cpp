/**
 * @file  clases.cpp
 * @brief Se definen las clases que no son templates
 *
 * @author Gabriel González Rivera B93432
 * @date 6/5/2024
 * 
 * Licencia: MIT
 */


#include "clases.hpp"


/*Se declara el método validadTipoDato que pertenece a la clase ValidadorDeEntrada
el cual valida que la entrada introducida por el usuario refleje un 
formato permitido */

/**
* @brief El método validarTipoDato de la clase ValidadorDeEntrada se encarga de verificar que el tipo introducido 
* por el usuario sea un tipo de dato válido, para esto se declara que se retorne el mismo tipo si es válido y si 
* el tipo introducido por el usuario no es válido entonces se regresa una excepción. 
* 
* @param input es un parámetro tipo string que se utiliza para poder validar que el tipo introducido por el usuario 
* sea uno de los tipos permitidos
* 
*/
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

/**
* @brief El método validarDimensiones de la clase ValidadorDeEntrada es el método encargado de verificar que ninguno de lo
* valores que introduce el usuario sea negativa o cero debido a que estas serán las dimensiones de la matriz, esto se logra
* mediante una comparación usando condicionales, además se lanza una excepción si no se cumple con la condición.
* 
* @param tamano es un parámetro tipo entero que se utiliza para verificar que ninguna entrada asociada con el tamaño sea 
* negativa o cero.
* 
*/
void ValidadorDeEntrada::validarDimensiones(int tamano){ 
   
    /*Se utiliza if para lanzar la excepción siempre que algún valor involucrado en el tamaño
    de la matriz tenga un valor igual a cero o menor*/
    if (tamano  <= 0 ) {

        /*Se utiliza un throw para lanzar una excepción si el valor de tamano está fuera del rango
        permitido*/
          throw ("\nEl tamaño de la matriz no puede contener valores negativos o cero\n");  
    } 
        


}







