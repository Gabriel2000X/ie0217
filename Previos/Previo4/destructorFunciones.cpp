// ejemplo de uso de destructor para cerrar archivos

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
#include <iostream> 

/* se incluye fstream, que se usa para poder
manejar archivos. */
#include <fstream>

/* Se crea la clase archivo. */
class Archivo {

    /* se declaran los especificadores de acceso, uno corresponde
    al archivo con el que se trabaja y el otro corresponde al
    nombre de este. */
    private:
        std::fstream archivo;
    public:

    /* se declara el constructor de la función con un atributo que 
    corresponde al nombre del archivo */
    Archivo (std::string nombre_archivo) {
    
     /* se intenta abrir el archivo, en modo de escritura y de lectura. */   
     archivo.open(nombre_archivo, std::ios::in | std::ios::out | std::ios::app); 

     /* si el archivo no puede abrirse se imprime un mensaje. */   
    if (!archivo.is_open()) {

        std::cout << "No se pudo abrir el archivo " << nombre_archivo << std::endl;

        }
    }

    /* se declara el destructor de la clase Archivo, si el archivo está abierto,
    al llegar al final del programa se cierra */
    ~Archivo() {
        if (archivo.is_open()) {
            archivo.close();
        }
    }
};



int main() {
    
    /* se instancia un objeto llamado mi_archivo que es de tipo
    archivo y que tiene como argumento el nombre del archivo*/
    Archivo mi_archivo("datos.txt");

    // hacer algo con el archivo
    
    return 0;
}