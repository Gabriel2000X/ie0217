#ifndef CLASEEMAIL_HPP
#define CLASEEMAIL_HPP

#include <regex>
#include <iostream>
#include <string>

class ValidadorEmail { 


    public:

        /*Se declaran los métodos públicos de la clase ValidadorEmail*/
        void validacionNombreCorreo(const std::string& mail);
        void validacionExtensionCorreo(const std::string& mail); 
        void validacionDominioCorreo(const std::string& mail);
        bool validarCorreo(const std::string& correo);
        

    
    private:

        /*Se declaran los métodos privados de la clase ValidadorEmail*/
        std::string getNombreCorreo(const std::string& mail);
        std::string getExtensionCorreo(const std::string& mail);
        std::string getDominioCorreo(const std::string& mail);







};


#endif // CLASEEMAIL_HPP