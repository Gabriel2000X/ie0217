#ifndef CLASEEMAIL_HPP
#define CLASEEMAIL_HPP

#include <regex>
#include <iostream>
#include <string>

class ValidadorEmail { 


    public:

        void validacionNombreCorreo(const std::string& mail);
        void validacionExtensionCorreo(const std::string& mail); 
   


    
    private:

        std::string getNombreCorreo(const std::string& mail);
        std::string getExtensionCorreo(const std::string& mail);
        std::string getDominioCorreo(const std::string& mail);







};


#endif // CLASEEMAIL_HPP