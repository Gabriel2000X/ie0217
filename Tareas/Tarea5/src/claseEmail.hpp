#ifndef CLASEEMAIL_HPP
#define CLASEEMAIL_HPP

#include <regex>
#include <iostream>
#include <string>

class ValidadorEmail { 


    public:

    
    
    private:

        std::string getNombreCorreo(const std::string& correo);
        std::string getExtensionCorreo(const std::string& correo);
        std::string getDominioCorreo(const std::string& correo);







};


#endif // CLASEEMAIL_HPP