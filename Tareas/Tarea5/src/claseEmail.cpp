#include "claseEmail.hpp"

/*Se define el método getNombreCorreo que obtiene el nombre contenido en 
el correo que debe introducir el usuario. */
std::string ValidadorEmail::getNombreCorreo(const std::string& mail) {
    
    /*se utiliza size_t para guardar la posición de arroba que encuentra
    .find en mail*/
    size_t arrobaPosicion = mail.find('@');

    /*Se almacena el nombre contenido en el correo en nombre usando
    substr que extrae desde la posición cero hasta la posición de 
    la arroba*/
    std::string nombre = mail.substr(0, arrobaPosicion);
    
    /*Se retorna el nombre */
    return nombre;
}


/*Se define el método getExtensionCorreo que obtiene la extensión contenida en 
el correo que debe introducir el usuario. */
std::string ValidadorEmail::getExtensionCorreo(const std::string& mail) {

    /*Se utiliza size_t para guardar la posición del último punto que tiene 
    el correo, esto porque el nombre puede contener puntos, por lo que se necesita
    utilizar find_last_of para encontrar la posición del último punto en la cadena*/
    size_t puntoPosicion = mail.find_last_of('.');

    /*Se almacena todo lo que está luego de la posición del 
    último punto hasta el final del correo.*/
    std::string extension = mail.substr(puntoPosicion);
    return extension;
}


/*Se define el método getExtensionCorreo que obtiene la extensión contenida en 
el correo que debe introducir el usuario. */
std::string ValidadorEmail::getDominioCorreo(const std::string& mail) {

    /*se utiliza size_t para guardar la posición de arroba que encuentra
    .find en mail*/
    size_t arrobaPosicion = mail.find('@');
    
    /*Se define el limite* inicial que empieza en la posición luego de la arroba*/
    size_t limiteInicial = arrobaPosicion + 1;

    /*Se define el limite final que es la diferencia entre la posición del primer punto
    y la posición antes de la arroba*/
    size_t limiteFinal = mail.find('.') - arrobaPosicion- 1;

    /*Se guarda el dominio en la variable dominio con substr utilizando los límites del dominio*/
    std::string dominio =  mail.substr(limiteInicial, limiteFinal);
    
    
    return dominio;
}

/*Se define el método validacionNombreCorreo*/
void ValidadorEmail::validacionNombreCorreo(const std::string& mail) {
    
    /*se define una expresión tipo regex que define los caracteres permitidos en 
    el nombre, ^(?!.*([._-])\\1) esta es una expresión que utiliza un lookahead negativo
    para que no se puedan usar caracteres especiales seguidos, además se declara que se aceptan 
    caractetres desde la a la z tanto mayúsculas como minúscula, se especifica que se quieren
    15 caracteres y que no inicia ni termine con . o - */
    std::regex caracteresNombre("^(?!.*([._-])\\1)[a-zA-Z0-9](?:[a-zA-Z0-9._-]{0,15}[^.-_])?$");
    
    /*se compara la cadena recibida en mail con caracteresNombre y si mail no coincide con el 
    patrón caracteresNombre se lanza una excepción tipo invalid_argument*/

    if (!std::regex_match(getNombreCorreo(mail), caracteresNombre)) {
        throw std::invalid_argument("El nombre introducido en la dirección de correo es inválido.");
    }
}