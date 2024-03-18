// Ejemplo 2 del uso de argc y argv

/* se incluye iostream, que sirve para
poder imprimir texto como salida. */
# include <iostream>

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;


/* Se define el bloque main que 
será la función principal del programa
con los argumentos necesarios en la función main,
argc dice cuantos argumentos se le dan al programa en la 
línea de comandos y argv representa los argumentos pasados
al programa */
int main(int argc, char* argv[]) {  

   

    /* Se imprimen en número de argumentos y el nombre del 
    programa mediante cout utilizando los argc y argv[0]*/ 
    cout << "Número de argumentos: " << argc << endl;
    cout << "Nombre del programa: " << argv[0] << endl;
    
    /* Se utiliza un if para condicionar que, si hay más de un argumento
    en la línea de comandos entonces estos se recorran en un ciclo 
    for y se impriman*/
    if (argc > 1) {
     
        cout << "Argumentos adicionales: " << endl;
        for (int i = 1; i < argc; ++i) {
            cout << "argv[" << i << "]: " << argv[i] << endl;
            

        }

    }

    /* se retorna un valor entero de cero finalizando
    la función main */
    return 0;

}