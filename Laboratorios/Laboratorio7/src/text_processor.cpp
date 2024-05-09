#include "text_processor.hpp"

#include <fstream>
#include <regex>

/*Se define el constructor, definiendo que se guardarán los argumentos recibidos en los atributos de igual
nombre dentro de la clase*/
TextProcessor::TextProcessor(const std::string& input_filename, const std::string output_filename)
: input_filename(input_filename), output_filename(output_filename){ }

/*Se define el método TextProcessor al cual se le pasa el patrón de busqueda y el replace_string
que es el texto que se desea reemplazar*/
void TextProcessor::replace(const std::string& search_pattern, const std::string replace_string){ 

    /*Se crean dos variables, input_file de tipo ifstream y 
    output_file de tipo ofstream, estas variables se crean
    para leer del archivo de entrada y escribir un archivo de 
    salida*/
    std::ifstream input_file(input_filename);
    std::ofstream output_file(output_filename);
    
    /*Se define line, que almacena la línea actual leída del archivo*/
    std::string line;

    /*Se define pattern que es tipo regex y recibe el patrón
    de búsqueda */
    std::regex pattern(search_pattern);

    /*Se define con un if que si los archivos input_file y output_file 
    se abren de manera correcta entonces se ejecuta lo siguiente*/
    if (input_file && output_file){ 

        /*Se ejecuta el ciclo while mientras se puedan leer líneas 
        del archivo input_file*/
        while(getline(input_file,line)){ 
            
            /*Se busca en cada línea el patron pattern y se reemplaza por relplace_string*/
            std::string replaced = std::regex_replace(line,pattern,replace_string);
            
            /*Se escribe la línea reemplazada en el archivo de salida*/
            output_file << replaced << "\n";


        }

    }

}