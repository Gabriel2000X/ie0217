// Ejemplo de un objeto como retorno de una funcion

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
#include <iostream> 

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;

/*Se crea la clase Student, que contiene 2 atributos publicos 
de tipo double*/
class Student { 
    public:
        double marks1, marks2;
};

/*Se define la clase createStudent de tipo Student*/
Student createStudent() {
    /*Se crea una instancia de Student */
    Student student;

    /*Se le asignan valores a marks1 y marks2 
    accesandolos mediante student.marks*/
    student.marks1 = 96.5; 
    student.marks2 = 75.0;
    
    /*Se imprimen los valores de marks1 y marks2
    accesandolos mediante student.marks*/
    cout << "Marks 1 = " << student.marks1 << endl;
    cout << "Marks 2 = " << student.marks2 << endl;
    
    /*Se retorna el objeto clase Student creado*/
    return student;
};


int main() {    

    /*Se declara student1 que es un objeto clase student*/
    Student student1;
    /*Se inicializa el objeto student1 asignandole el valor de 
    createStudent*/
    student1 = createStudent();
    return 0;
}