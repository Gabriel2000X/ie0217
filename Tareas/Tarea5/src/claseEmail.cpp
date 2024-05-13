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
    size_t limiteFinal = mail.find_last_of('.') - arrobaPosicion- 1;

    /*Se guarda el dominio en la variable dominio con substr utilizando los límites del dominio*/
    std::string dominio =  mail.substr(limiteInicial, limiteFinal);
    
    
    return dominio;
}

/*Se define el método validacionNombreCorreo*/
void ValidadorEmail::validacionNombreCorreo(const std::string& mail) {
    
    std::string nombre = getNombreCorreo(mail);
    
    /*se define una expresión tipo regex que define los caracteres permitidos en 
    el nombre, ^(?!.*([._-])\\1) esta es una expresión que utiliza un lookahead negativo
    para que no se puedan usar caracteres especiales seguidos, además se declara que se aceptan 
    caractetres desde la a la z tanto mayúsculas como minúscula, se especifica que se quieren
    15 caracteres y que no inicia ni termine con . o - */
    std::regex caracteresNombre("^(?!.*([._-])\\1)[a-zA-Z0-9](?:[a-zA-Z0-9._-]{0,15}[^.-_])?$");
    
    /*se compara la cadena recibida en mail con caracteresNombre y si mail no coincide con el 
    patrón caracteresNombre se lanza una excepción tipo invalid_argument*/

    /*Se verifica si el nombre introducido tiene más de 15 caracteres y si los tiene se lanza una excepción tipo invalid 
    argument*/
    if (nombre.length() > 15) {
        throw std::invalid_argument("El nombre en el correo electrónico no puede tener más de 15 caracteres.");
    }

    /*Se verifica si el nombre empieza o termina con punto, guión o guión bajo y si esto sucede se lanza una excepción*/
    if (nombre.front() == '.' || nombre.back() == '.'|| nombre.front() == '-'|| nombre.back() == '-'|| nombre.front() == '_'|| nombre.back() == '_') {
        throw std::invalid_argument("El nombre en el correo electrónico no puede empezar o terminar con un punto, guión o guión bajo.");
    }

    /*Si hay dos caracteres especiales en el nombre entonces se lanza una excepción*/
    if (std::regex_search(nombre, std::regex("[._-]{2}"))) {
        throw std::invalid_argument("El nombre en el correo electrónico no puede tener dos caracteres especiales consecutivos. (._-)");
    }

    /*comparando nombre con caracteresNombre, si se encuentra algo que no sea permitido aparte de las excepciones anteriores entonces 
    se lanza la siguiente excepción. */
    if (!std::regex_match(nombre, caracteresNombre)) {
        throw std::invalid_argument("El nombre introducido en la dirección de correo es inválido.");
    }
}

/*Se define el método ValidadorEmail*/
void ValidadorEmail::validacionExtensionCorreo(const std::string& mail) {
    
    /*Se define extensión como el resultado de gerExtensionCorreo al recibir mail */
    std::string extension = getExtensionCorreo(mail); 
    
    /*Se definen los caracteres permitidos para la extensión usando una variable tipo regex
    llamada caracteresExtension */
    std::regex caracteresExtension("^([a-zA-Z]{2,6}|\\.[a-zA-Z]{2,6})(\\.[a-zA-Z]{2,6}){0,2}$");

    
    /*Se verifica que la extension este dentro de los limites permitidos*/
    
    if (extension.length() > 6 || extension.length() < 2) {
        throw std::invalid_argument("La extensión no puede tener más de 6 letras ni menos de dos.");
 
    }

    /*comparando extension con caracteresExtension, si se encuentra algo que no sea permitido aparte de las excepciones anteriores entonces 
    se lanza la siguiente excepción. */
    if (!std::regex_match(extension, caracteresExtension)) {
        throw std::invalid_argument("La extension introducida en el correo es inválida (contiene números o caracteres especiales).");
    }


}




void ValidadorEmail::validacionDominioCorreo(const std::string& mail) {
    
    std::string dominio = getDominioCorreo(mail);
    std::regex caracteresDominio("^([a-zA-Z]+\\.[a-zA-Z]+)(\\.[a-zA-Z]+)*$");
    
    /*Se declara una variable llamada longitudDominio que cuenta todos los char
    que no son puntos dentro de dominio utilizando un ciclo for*/
    size_t longitudDominio = 0;
    for (char c : dominio) {
        if (c != '.') {
            longitudDominio++;
        }
    }

    /*Si se utiliza la variable longitudDominio para tener la longitud sin los puntos y se utiliza un if 
    para comparar esta variable con los limites deseados y si se sale de los límites se lanza una excepción */
    if (longitudDominio > 30 || longitudDominio < 3) {
        
        throw std::invalid_argument("El dominio no puede tener más de 30 caracteres ni menos de 3 (excluyendo los puntos).");
    }

    /*Si se tiene un punto en el principio o final del dominio entonces se lanza una excepción*/
    if (dominio.front() == '.' || dominio.back() == '.') {
        throw std::invalid_argument("El dominio no puede comenzar o terminar con un punto.");

    }

    /*Si se tiene dos segmentos separados por un punto entonces se lanza una excepción*/
    if (dominio.find("..") != std::string::npos) {
        throw std::invalid_argument("El dominio no puede contener segmentos consecutivos separados por un único punto.");
    }
    /*comparando dominio con caracteresDominio, si se encuentra algo que no sea permitido aparte de las excepciones anteriores entonces 
    se lanza la siguiente excepción. */
    if (!std::regex_match(dominio, caracteresDominio)) {
        throw std::invalid_argument("El dominio introducido en el correo es inválido.");
    }

    
}

bool ValidadorEmail::validarCorreo(const std::string& mail) {
    try {
        

        validacionNombreCorreo(mail);
        validacionExtensionCorreo(mail);
        validacionDominioCorreo(mail);
        return true;
        
    } 
    
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return false;
    }
}