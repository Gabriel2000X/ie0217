
#include <iostream> 

using namespace std;

int main() {

/* Se declaran y definen las variables enteras */
int var1 = 3;
int var2 = 24;
int var3 = 17;


/* Se imprimen las direcciones en memoria de las variables 
var1, var2 y var3 utilizando el signo ampersand antes de sus nombres, esto
hace que se acceda no a la variable como tal si no a su ubicación en memoria */
cout << "Dirección de var1: "<< &var1 << endl;
// print address of var2
cout << "Dirección de var2: " << &var2 << endl;
// print address of var3
cout << "Dirección de  var3: " << &var3 << endl;

return 0;

}