#ifndef TEXTPROCESSOR_HPP 
#define TEXTPROCESSOR_HPP



#include <string>

/*Se declara la clase TextProcessor*/
class TextProcessor{ 

    /*Se declaran los atributos privados de la clase*/
    private: 

        std::string input_filename;
        std::string output_filename;


    /*Se declaran los métodos públicos de la clase*/
    public:

    /*Se declara el constructor de la clase que recibe 2 argumentos el input_filename y el 
    output_filename*/
    TextProcessor(const std::string& input_filename, const std::string output_filename);

    /*Se declara el método replace que recibe dos argumentos, el seatch_pattern y el 
    replace_string, cabe destacar que se le pasan los argumentos como const
    para que el compilador realice un trabajo más eficiente porque se especifica que
    no hay que hacer cambios*/
    void replace(const std::string& search_pattern, const std::string replace_string);

};

#endif