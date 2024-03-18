// Ejemplo 2 de estructuras

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
# include <iostream>

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;


/* Se crea una estructura llamada Person que guarda
distintos atributos de diferentes tipos, sobre una persona */
struct Person {

    char name[50];
    int age;
    float salary;
    
};



/* Se define la función main que 
será la función principal del programa */
int main() {  
   
   /* Se declara p1 como un objeto o variable de la estructura Person */
    Person p1;
   

    /* Se le solicita información personal al usuario como 
    nombre completo, edad y salario mediante cout para
    imprimir mensajes en pantalla y cin para obtener la 
    información digitada por el usuario y guardarla en los
    atributos de la estructura*/

    cout << " Introduzca su nombre completo: ";
    cin.get(p1.name, 50);
    cout << "Introduzca su edad: ";
    cin >> p1.age;
    cout << "Introduzca su salario: ";
    cin >> p1.salary;    

    /* Se imprime la información digitada por el usuario */

    cout << "\nMostrando información: " << endl;
    cout << "Nombre: " << p1.name << endl;
    cout << "Edad: " << p1.age << endl;
    cout << "Salaro: " << p1.salary << endl;

    /* se retorna un valor entero de cero finalizando
    la función main */
    return 0;
}
