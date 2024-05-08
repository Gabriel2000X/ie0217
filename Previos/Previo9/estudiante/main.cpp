#include <iostream>
#include "estudiante.hpp"

/*Se crea una instancia de estudiante en el main y
se muestran sus datos.*/
int main(){
    Estudiante estudiante("Juan", 20);
    estudiante.mostrarDatos();
    return 0;
}