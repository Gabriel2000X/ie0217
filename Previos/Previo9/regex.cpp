#include <iostream> 
#include <regex>

int main() {

    /*Se utiliza el pipe para buscar coincidencias con ambas palabras, por lo que
    se buscarán coincidencias con my regex y your regex */
    auto const regex = std::regex(" (my|your) regex");

    /*Se declara en myText una texto que contiene la coincidencia my regex*/
    auto const myText = std::string ("A piece of text that contains my regex."); 
    
    /*Se declara la variable booleana llamada myTextConatinsRegex y se le pasa
    a regex_search myText y regex para buscar coincidencias entre las declaradas
    en regex y myText*/
    bool const myTextContainsRegex = std::regex_search(myText, regex);
    
    /*Se declara yourText que contiene la coincidencia your regex */
    auto const yourText = std::string ("A piece of text that contains your regex."); 
    
    /*Se procede de manera similar a la anterior buscando con regex_search 
    las coincidencias entre yourText y regex.*/
    bool const yourTextContainsRegex = std::regex_search(yourText, regex);

    /*Se declara theirText que contiene their regex, sin embargo este no debería presentar 
    una coincidencia, luego se buscan coincidencias utilizando regex_search.*/
    auto const theirText = std::string ("A piece of text that contains their regex."); 
    bool const theirTextContainsRegex = std::regex_search(theirText, regex);

    /*utilizando cout y boolalpha se imprimen los resultados 
    de los valores booleanos como true o false, se espera 
    que solo theirTextContainsRegex de false.*/
    std::cout << std::boolalpha
                << myTextContainsRegex << '\n'
                << yourTextContainsRegex << '\n' 
                << theirTextContainsRegex << '\n';

}