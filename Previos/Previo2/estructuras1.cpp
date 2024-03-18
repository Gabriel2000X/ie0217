// Ejemplo de estructuras

/*  */

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
# include <iostream>

/* se incluye cstring que se usa para manipular 
cadenas de caracteres */
# include <cstring>

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;


/* Se crea una estructura llamada Books que almacenará
atributos específicos que se le pueden atribuir a
futuros elementos de esta estructura, los valores dentro
de los paréntesis cuadrados representan el tamaño máximo
de los arreglos de carácteres que se pueden guardar en 
esos atributos */
struct Books {

    char title[50];
    char author[50];
    char subject[100];
    int book_id;
     
};



/* Se define la función main que 
será la función principal del programa */
int main() {  
   
   /* Se declaran dos estructuras del tipo Books */

   struct Books Book1;
   struct Books Book2;

    /* Se declara el contenido de los atributos de Book1 
    utilizando strcpy que se encarga de almacenar una cadena
    de caracteres proporcionada en una variable, en este caso
    almacena las cadenas en los atributos de las estructuras */

    strcpy(Book1.title, "Learn C++ Programing");
    strcpy(Book1.author, "Chand Miyan");
    strcpy(Book1.subject, "C++ Programing");
    Book1.book_id = 6495700;
   
    /* Se declara el contenido de los atributos de Book2 de manera
    similar a como se declararon los atributos de Book1*/

    strcpy(Book2.title, "Telecom Billing");
    strcpy(Book2.author, "Yakit Singha");
    strcpy(Book2.subject, "Telecom");
    Book2.book_id = 6495700 ;

    /* Se imprime la información de Book1 utilizando cout y
    accesando sus atributos con Book1.atributo*/

    cout << " Título del libro 1: " << Book1.title <<  endl;
    cout << " Autor del libro 1 " << Book1.author <<  endl;
    cout << " Tema del libro 1: " << Book1.subject <<  endl;
    cout << " id del libro 1: " << Book1.book_id <<  endl;

    /* Se imprime la información de Book2 utilizando cout y
    accesando sus atributos con Book2.atributo*/
    cout <<  "\n";
    cout << " Título del libro 2: " << Book2.title <<  endl;
    cout << " Autor del libro 2 " << Book2.author <<  endl;
    cout << " Tema del libro 2: " << Book2.subject <<  endl;
    cout << " id del libro 2: " << Book2.book_id <<  endl;

    /* se retorna un valor entero de cero finalizando
    la función main */
    return 0;
}

