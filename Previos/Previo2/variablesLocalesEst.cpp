// Ejemplo de variables locales estáticas.

/*  */

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
# include <iostream>

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;


/* Se utiliza una función llamada test en la que se declara
e inicializa una variable estática llamada var, se inicializa
con un valor de cero y la variable empieza a existir una vez que 
se usa la función por primera vez */
void test() {
        
    static int var = 0;
    ++var;
    cout << var << endl;
    
}


/* Se define la función main que 
será la función principal del programa */
int main() {  
    
    /* Al llamar la función dos veces entonces el valor de var
    debe subir a 2, porque la inicialización en cero solo ocurre
    la primera vez que se corre la función, posteriormente su valor
    queda guardado. */
    test();
    test();
   
    /* se retorna un valor entero de cero finalizando
    la función main */
    return 0;
}
