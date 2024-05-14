/**
 * @file  claseEmail.hpp
 * @brief En este archivo se declara la clase ValidadorEmail junto con sus 
 * métodos tanto públicos como privados
 *
 * @author Gabriel González Rivera B93432
 * @date 14/5/2024
 * 
 * Licencia: MIT
 */


#ifndef CLASEEMAIL_HPP
#define CLASEEMAIL_HPP

#include <regex>
#include <iostream>
#include <string>

/**
* @brief Se declara la clase ValidadorEmail que contiene todos los métodos 
* encargados de conseguir y validar las diferentes partes del correo.
*    
* 
*/
class ValidadorEmail { 


    public:

        /*Se declaran los métodos públicos de la clase ValidadorEmail*/
        void validacionNombreCorreo(const std::string& mail);
        void validacionExtensionCorreo(const std::string& mail); 
        void validacionDominioCorreo(const std::string& mail);
        bool validarCorreo(const std::string& mail);
        void validarArroba(const std::string& mail);

    
    private:

        /*Se declaran los métodos privados de la clase ValidadorEmail*/
        std::string getNombreCorreo(const std::string& mail);
        std::string getExtensionCorreo(const std::string& mail);
        std::string getDominioCorreo(const std::string& mail);







};


#endif // CLASEEMAIL_HPP