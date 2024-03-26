// Ejemplo de uso de objetos como parámetros de una función.

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
#include <iostream> 

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;


/*  Se crea la clase Student, con un atributo público y un 
método público */
class Student {

    public:
        double marks;

        Student (double m) { 
            marks = m;

        }
};

/* Se define la función calulateAverage que calcula 
e imprime el promedio de dos argumentos recibidos, estos
deben ser de la clase Student */
void calculateAverage (Student s1, Student s2) { 
    
    double average = (s1.marks + s2.marks) / 2;
    cout << "Average Marks = " << average << endl;

}

int main() {
    /* se crean las instancias de Student y se les da
    el argumento necesario */
    Student student1 (88.0), student2 (56.0);

    /* se invoca calulateAverage con los objetos de clase Student */
    calculateAverage (student1, student2);
    return 0;
}