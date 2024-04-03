
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

/*Se crea una clase llamada nodo, se crean atributos, 
uno entero que contendrá el valor del elemento actual, 
además se crea un nodo puntero con la información del 
siguiente.  */
class Node { 
    public:

        int value; 
        Node* next;
};


int main() { 
    /*Se declaran cuatro nodo punteros, se inicializan 
    solo one, two y three, head se queda declarado.*/
    Node* head;
    Node* one = NULL;
    Node* two = NULL;
    Node* three = NULL;
    /*Se usa new para alojarlos en el heap*/
    one = new Node();
    two = new Node();
    three = new Node();


    /*Se les asignan valores a los elementos de la lista
    usando el operador flecha para asignar valores a lo que
    está dentro de las direcciones de memoria de los punteros.*/
    one->value = 1;
    two->value = 2; 
    three->value = 3;
    
    /*Se enlazan los nodos al siguiente elemento,
    three se enlaza a NULL porque three es el último*/ 
    one->next = two;
    two->next = three;
    three->next = NULL;
    
    /*Se declara one como head o la cabeza, es el 
    primer valor de la lista.*/
    head = one;
    /*mientras head sea diferente de NULL entonces
    se imprime el valor de head y se declara head como
    el siguiente, esto para imprimir toda la lista 
    hasta llegar a NULL que marca el final de la lista. */
    while (head != NULL) {
        cout << head->value << "\n" ;
        head = head->next;
        
    }


}
