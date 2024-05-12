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


