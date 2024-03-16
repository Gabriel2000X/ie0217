// Ejemplo de uso de Switch-Case

/* se incluye iostream, que sirve para
poder imprimir texto como salida, como
el hola mundo. */
# include <iostream>

/* Se define el bloque main que 
será la función principal del programa */
int main() {  

    /* Se utiliza std::cout para imprimir 
    el Hola Mundo, estudiantes de ie0217! seguido de un salto de página
    en la consola, el operador << tiene la función de enviar datos al std::cout*/
    std::cout << "Hola Mundo, estudiantes de ie0217!\n";
    
    /* Se declara var1 como un entero y se inicializa asignandole
    el valor de 52, durante el ejemplo se cambió de valor probar diferentes casos */
    int var1 = 52;
    
    /* Se declara el switch case para var1, por lo que
    dependiendo de que valor tenga esta variable se ejecuta 
    uno de los casos que se declaran, cada caso que se declara
    corresponde a un valor que puede tomar la variable var1, por ejemplo,
    el case 1 se ejecuta cuando var1 tiene un valor de 1, funciona de la misma
    manera para los demás casos. Además para cada caso se imprime un mensaje 
    aclarando cual caso es, inclusive para el caso default, que se da cuando 
    la variable no tiene ninguno de los valores especificados en los demás casos,
    para el case 2 y case 3 se quiere imprimir lo mismo, por lo que se
    declaran uno seguido del otro y luego se imprime Case Final!\n,
    es importante utilizar el break al final de cada case para omitir 
    los demás casos si el actual se cumple. */
    switch (var1) {
        case 1:
            std::cout << "Case 1!\n";
            break;
        case 2:
        case 3:
            std::cout << "Case Final!\n";
            break;
        default:
            std::cout << "Case Default!\n";
            break;
        }
    /* se retorna un valor entero de cero finalizando
    la función main */
    return 0;

}