
#include <iostream> 
using namespace std;

/*Se define la clase student con un atributo privado
entero y con 2 métodos públicos */
class Student { 
    
    private: 
        int age;
    
    public:
        /* El constructor inicializa age con un valor de 12 */
        Student() : age(12) {}
        
        /* con getAge se imprime la age*/
        void getAge() { 
            cout << "Age = " << age << endl;
        }
};


int main() {
    
    /*Se declara una variable tipo Student puntero y
    con la sentencia new se le asigna memoria dinámica*/ 
    Student* ptr = new Student();
    

    /* Se llama get age por puntero debido a que el objeto 
    es Student puntero*/
    ptr->getAge();
    
    /*Se libera la memoria dinámica utilizada para almacenar ptr*/
    delete ptr;
    return 0;

}