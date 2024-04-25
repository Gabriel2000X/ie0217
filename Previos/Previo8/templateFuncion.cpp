#include <iostream>

using namespace std;

/* Se le dan 2 argumentos tipo T a una 
template, estos se suman y se retorna el 
resultado*/

template <typename T>
T add(T num1,T num2){ 

    return(num1 + num2);
}


int main() {

/*Se declaran 2 variables, una entera y otra doble*/
int result1; 
double result2;

/*se guarda la suma de dos enteros en result1, pasandole
2 enteros al template y se imprime el resultadp*/ 
result1= add<int>(2, 3);
cout << result1 << endl;

 /*Se guarda la suma de dos doubles en result2 pasandole
 2 dobules al template y se imprime el resultado*/
result2 = add<double> (2.2, 3.3); 
cout << result2 << endl;

/*Se demuestra que se le pueden pasar diferentes tipos de
datos a un template y este opera de igual manera mientras
los datos puedan realizar la operación.*/

return 0;
}