//Ejemplo de tipos de accesos en clases

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
#include <iostream> 

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;

/* Se crea la clase Animal */
class Animal { 
    
    /* Se declaran como public el métood setEdad y el método
    getEdad, por lo que pueden ser accesadas por clases externas
    esta clase y clases derivadas */
    public:
        /* SetEdad recibe un parámetro entero y se lo asigna a edad */
        void setEdad (int age) {
        edad = age;
        }
        /* getEdad solo retorna edad */
        int getEdad() {
        return edad;
        }

    /* Se declara como protected la variable nombre, por lo que 
    no puede ser accesada por clases externas */
    protected:

        string nombre;
    
    /* Se declara como private la variable edad, por lo que solo
    puede ser accesada por la misma clase. */
    private:
        int edad;
};

/* Se crea una clase llamada perro, que hereda
todo lo que sea publico de la clase Animal */
class Perro : public Animal {
    
    /* Se declaran como public los métodos llamados setNombre, 
    y getNombre esta clase puede accesar a nombre porque es una 
    clase derivada, tiene herencia de la clase Animal  */
    public:

        /* setNombre recibe un string y se lo asigna a nombre */
        void setNombre (string n) { 
            nombre = n;
        }

        /* getNombre solo retorna nombre */
        string getNombre() {
        return nombre;
        }
};

int main() {
    
    /* se instancia miPerro, que es un objeto de tipo Perro */ 
    Perro miPerro;

    /* se declaran su nombre y su edad y se imprimen */
    miPerro.setNombre("Toby"); miPerro.setEdad (3);
    cout << "Mi perro se llama " << miPerro.getNombre() << endl; 
    cout << "y tiene " << miPerro.getEdad () <<" años." << endl;
    return 0;
}