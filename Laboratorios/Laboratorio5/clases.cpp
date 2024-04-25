#include "clases.hpp"

/*Se define el constructor de la clase Libro, definiendo en que stributo de la clase se guardarán sus argumentos*/
Libro::Libro(std::string t, std::string a, int anio) : titulo(t), autor(a), anioPublicacion(anio) {}

/*Se define un método booleano que sobrecarga el operador < para
comparar dos objetos de tipo Libro según su año de publicación,
compara un objeto tipo libro con otro que recibe como argumento
y devuelve true si el valor del año de publicación del elemento 
utilizado es menor que el del objeto que se pasa como argumento.
*/
bool Libro::operator<(const Libro& l) const {
        return anioPublicacion < l.anioPublicacion;
    }


/*Se definen los métodos de la clase biblioteca*/

/*Se define el método llamado agregarLibro, que recibe un 
objeto Libro por referencia y lo agrega al vector libros 
usando push_back.*/
void Biblioteca::agregarLibro(const Libro& libro) {
    libros.push_back(libro);
}

/*Se define el método llamado mostrarLibros que utiliza un for que itera sobre las
variables contenidas en libros, la función deduce el tipo de la variable libro
automaticamente por el uso de "auto", además se pasa la variable por referencia
para no hacer copias innecesarias, además por el uso de "const" no se modifica libro,
al iterar sobre cada elemento del vector se pueden imprimir sus atributos accesandolos
con la notación punto.*/
void Biblioteca::mostrarLibros() {
    for (const auto& libro : libros) {
        std::cout << libro.titulo << ", " << libro.autor << ", " << libro.anioPublicacion << std::endl;
        }
}

/*Se define el método ordenarLibrosPorAnio,sort ordena los elementos
en un rango, que sería de libros.begin() que apunta a la primera entrada
del vector a libros.end() que apunta al elemento siguiente del elemento final
por lo que apunta a la nada para declarar que ya se terminó el vector, sort utiliza
el operador < para comparar los objetos, y como este se sobrecargó antes entonces
se utilizará para comparar los años de publicación*/
void Biblioteca::ordenarLibrosPorAnio() {
    std::sort(libros.begin(), libros.end());
}

/*Se define un método tipo iterador sobre un vector de elementos tipo Libro, necesita un
argumento tipo string para funcionar que será el tìtulo del libro a buscar, se usa find_if 
para encontrar el primer elemento que coincida con el título especificado dentro del rango
del vector de elementos Libro, con return l.titulo == titulo; se declara que solo se devuelve
un iterador apuntando a un elemento del vector si se encuentra un título que coincida.*/
std::vector<Libro>::iterator Biblioteca::buscarLibroPorTitulo(const std::string& titulo) {
        return std::find_if(libros.begin(), libros.end(), [&titulo](const Libro& l) {
            return l.titulo == titulo;
        });
}

/*Se define el método tipo iterador sobre un vector de elementos tipo Libro llamado end, 
devuelve un iterador apuntando al elemento después del final del elemento final del 
vector para marcar el final de las entradas válidas del vector*/
std::vector<Libro>::iterator Biblioteca::end() {
        return libros.end();
    }