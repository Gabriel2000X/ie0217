#include <iostream>

using namespace std;


/*Se declara una clase template o un template clase, es de tipo T que
es genérico por lo que puede tomar diferentes tipos*/ 
template <class T> class Number { 
    
    /*Lo mismo sucede con sus atributos y métodos públicos y 
    privados, estos toman valores tipo T, por lo que son 
    genéricos*/
    private:
        
        T num;

    public:

        /*Se declara el constructor de la clase*/
        Number(T n) : num(n) {} 

        /*Se declara el método getNum que accesa al atributo
        privado num*/
        T getNum() {
            return num;
        }
};



int main() {
// create object with int type 
Number<int> numberInt(7);
// create object with double type 
Number<double> numberDouble (7.7);
cout << "int Number = " << numberInt.getNum() << endl;
cout << "double Number = " << numberDouble.getNum() << endl;
return 0;
}