
#include <iostream>
using namespace std;

/*Se define un template para una clase que recibe tres agrumentos, 
T, U y V, si no se proporciona V se utiliza un char*/ 
template <class T, class U, class V = char>
class ClassTemplate {
    /*Se declarn los atributos de la clase de tipos T, U y V que son genéricos*/
    private: 
        T var1;
        U var2;
        V var3;
    public:
    
        /*Se declara el constructor de la clase y guarda los valores 
        de los atributos dados a la hora de crear objetos de la clase.*/
        ClassTemplate (T v1, U v2, V v3): var1(v1), var2(v2), var3(v3) {}

        /*Se declara un método público para accesar a los atributos privados
        de la clase e imprimirlos*/
        void printVar() {
        cout << "var1 = " << var1 << endl;
        cout << "var2 = " << var2 << endl;
        cout << "var3 = " << var3 << endl;
    }
};

int main() {

    /*Se define un objeto con argumentos tipo entero, doble y char
    y luego se imprimen sus atributos, no se declara el tercer tipo 
    de atributo porque es un char por defecto*/ 
    ClassTemplate<int, double> obj1(7, 7.7, 'c'); 
    cout << "obj1 values: " << endl;
    obj1.printVar();

    /*Se define un objeto con argumentos tipo doble, char y bool, 
    se declara el tercer tipo de atributo como bool para caerle encima
    al atributo opcional*/
    ClassTemplate<double, char, bool> obj2(8.8, 'a', false); 
    cout << "\nobj2 values: " << endl;
    obj2.printVar();
    return 0;
}