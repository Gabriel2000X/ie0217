#include <iostream>
#include "text_processor.hpp"

/*Se define un int main que toma argc que es la cantidad de 
argumentos por línea de comandos y arg que será un arreglo puntero
a cadenas de texto con los argumentos de la línea de comandos*/
int main(int argc, char* argv[]){ 

    /*Si se dan menos de 5 argumentos por línea de comandos entonces imprime un mensaje y se detiene el programa*/
    if (argc < 5){
        std::cerr << "Usage: " << argv[0] << "-f <filename>  -o <outputfile> -search <search_pattern> -replace <replace_string>\n";

    } 

    /*Se obtienen los argumentos de la línea de comandos y se
    asignan a diferentes variables*/
    std::string filename = argv[2];
    std::string outputfile = argv[4];
    std::string search_pattern = argv[6];
    std::string replace_string = argv[8];

    /*Se crea una instancia de textProcessor y se utiliza 
    el método replace.*/
    TextProcessor processor(filename,outputfile);
    processor.replace(search_pattern,replace_string);

    return 0;


}


/*./bin/textprocessor -f data/input.txt -o data/output.txt -search "foo" -replace "bar"*/