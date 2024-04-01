
#include <iostream> 
using namespace std;

int main() {

/*Se declara la variable global num*/
int num;

/*Se pide al usuario que ingrese un valor para num
que en este caso es el numero de estudiantes*/
cout << "Ingrese el número total de estudiantes: ";
cin >> num;

/* Se declara un puntero flotante*/
float* ptr;

/*Se define que el puntero aloja las direcciones de memoria 
de un arreglo flotante de una cantidad de numeros que se 
introduce en el programa, se usa memoria dinámica*/

ptr = new float[num];

/*Se le pide al usuario que ingrese los valores
que se almacenan en cada entrada del arreglo*/
cout<<"Ingrese el GPA de los estudiantes." << endl; 

/*Con un for se van almacenando los valores en 
el arreglo y accesando al puntero con de-referencia*/
for (int i = 0; i < num; ++i) {

cout<<"Student" << i + 1 << i +1 << ": ";
cin >> *(ptr + i);

}

cout << "\nDisplaying GPA of students." << endl;

/*Con otro for se imprimen los valores registrados anteriormente*/
for (int i = 0; i < num; ++i) {

cout << "Student" << i + 1 << ":" << *(ptr + i) << endl;

}

/*La memoria dinámica que usaba ptr se libera con delete*/
delete[] ptr;
return 0;

}