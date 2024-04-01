
#include <iostream> 

using namespace std;

int main() {

    /*Se declara una variable de tipo puntero entero.*/
    int* pointInt;


    /* Se declara una variable de tipo puntero flotante*/
    float* pointFloat;

    /*Se utiliza new para darles un espacio en la memoria 
    dinámica a estas variables, se debe usar new solo con
    punteros debido a que new devuelve una posición de memoria.*/
    pointInt = new int; 
    pointFloat = new float;


    /*Se utiliza la notación de de-referencia para asignar valores
    a las variables dentro de las posiciones de memoria a las que 
    apuntan los punteros*/ 
    *pointInt = 45; 
    *pointFloat = 45.45f;

    /*Se imprime el contenido de las direcciones de memoria*/
    cout << *pointInt << endl; 
    cout << *pointFloat << endl;

    /*Se libera la memoria dinámica utilizada para almacenar las variables
    anteriores.*/
    delete pointInt; 
    delete pointFloat;
    
    return 0;

}