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


