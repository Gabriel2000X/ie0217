#include <iostream>
using namespace std;

/*Se declara un template de una clase que recibe dos argumentos T y U y 
se define un método llamado multiply que multiplica los argumentos.*/
template <typename T, typename U>
T multiply(T a, U b){ 

    return a * b;

}


int main() {

    int a = 3;
    double b = 4.5;
    int result = multiply<int, double>(a,b);
    cout << "El resultado de la multiplicación es: " << result << endl;
}