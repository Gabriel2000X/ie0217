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
        T getNum();
};

/*Se define el método getNum de la clase Number fuera
del template principal de la clase*/ 
template <class T>
T Number<T>::getNum() { 
    return num;
}


int main() {

/*Se crea un objeto Numero tipo entero llamado numberInt y 
se le pasa un 7 como argumento al constructor*/
Number<int> numberInt(7);

/*Se crea un objeto Numero tipo entero llamado numberDouble y 
se le pasa un 7.7 como argumento al constructor*/ 
Number<double> numberDouble (7.7);

/*Se imprimen los numeros guardados en num con el método getNum de ambos*/
cout << "int Number = " << numberInt.getNum() << endl;
cout << "double Number = " << numberDouble.getNum() << endl;
return 0;
}