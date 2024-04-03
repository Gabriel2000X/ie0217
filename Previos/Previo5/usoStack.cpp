
/*Implementación de stack en c++*/
#include <stdlib.h>
#include <iostream>
using namespace std;

/*Se definen las variables globales necesarias*/
#define MAX 10
int stackSize = 0;


/*Se crea una estructura llamada stack que tiene
dos atributos, un arreglo entero y un entero*/
struct stack {

    int items [MAX];
    int top;

};

/*Se define que st es un tipo nuevo que 
se refiere a un struct stack*/
typedef struct stack st;

/*Se define una función que crea una pila vacía, recibe
un puntero tipo st y almacena -1 en top, usando el 
operador flecha, cuando top es -1 la pila está vacía.*/
void createEmptyStack(st *s) { 
    s->top = -1;
}

/*Algunas funciones enteras de las declaradas
a continuación devuelven 1 o 0, si se 
devuelve 1 se debe interpretar como true
y se devuelve 0 como false.*/

/*Se define una función que verifica si 
el stack está lleno, recibe un puntero tipo st,
como se va de 0 a 9 en el arreglo, se verifica
si el top está en 9, se retorna un 1, si ese 
no fuera el caso se retorna un cero.*/
int isfull(st *s) {
    if (s->top == MAX - 1)
        return 1;
    else
        return 0;
}


/* Se define una fución que verifica si la pila 
está vacía,  esto sucede si top es -1, en ese caso
se devuelve un 1, en cualquier otro caso se 
devuelve un cero, recibe un puntero tipo st.*/
int isempty(st *s) {
    if (s->top == -1)
        return 1;
    else
        return 0;
}

/*Se define una función para  agregar elementos 
a la pila, que recibe un puntero tipo st y el valor
entero del nuevo elemento, verifica si la pila está
llena y si no lo está suma uno  top y almacena
el nuevo elemento en top, posteriormente se agranda el 
stackSize sumandole un valor de 1. */
void push(st *s, int newitem) {

    if (isfull(s)) {

    cout << "STACK FULL";
} 

    else {
        s->top++;
        s->items [s->top] = newitem;
    
}

    stackSize++;
}

/*Se define una función para  quitar elementos 
de la pila, que recibe un puntero tipo st, verifica 
si la pila está vacía y si no lo está entonces se 
elimina el elemento en top y se resta el índice de 
top en uno para que top quede en el elemento anterior,
además el valor de stackSize disminuye en 1 */
void pop(st *s) {
    if (isempty(s)) {
    cout << "\n STACK EMPTY \n";
} 
else {

    cout << "Item popped= " << s->items [s->top];
    s->top--;
}
    stackSize--;
    cout << endl;

}



/*Se define una función que imprime los valores
presentes en el stack, para esto recibe un puntero 
tipo st, y con un for recorre todas las
entradas del arreglo items para luego imprimirlas.*/ 
void printStack(st *s) { 
    printf("Stack: ");

    for (int i = 0; i < stackSize; i++) { 
        cout << s->items[i] << " ";

    }
    cout << endl;
}



int main() { 


    int ch;
    /*Se utiliza un malloc para asignar un bloque de memoria en 
    el heap al puntero s, se castea a tipo st y se le da el tamaño 
    en memoria de un elemento st*/
    st *s = (st *)malloc(sizeof(st));

    /* Se crea uns pila vacía*/
    createEmptyStack(s);

    /* Se añaden valores del 1 al 4 a la pila 
    mediante push. */
    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);

    /*Se imprime la pila con printStack*/
    printStack(s);
    
    /*Se elimina el elemento de top */
    pop(s);
    cout << "\nAfter popping out\n";
    /*Se vuelve a imprimir la pila*/
    printStack(s);

}