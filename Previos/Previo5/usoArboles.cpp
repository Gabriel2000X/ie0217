
// Tree traversal in C++
#include <iostream>
using namespace std;

/*Se define la estructura Node, dentro de 
la cual se define un atributo entero y dos
nodo punteros, uno llamado left y otro right*/
struct Node { 
    
    int data;
    struct Node *left, *right; 
    
    /*Se define su constructor y se trabaja
    como una pseudo clase, se le asigna a data
    el valor de data con el operador flecha y 
    se le asigna NULL a ambos punteros, esto
    quiere decir que no apuntan a nada.*/
    Node(int data) { 
        this->data = data;
        left = right = NULL;
    }
};

/*Se declara una función para recorrer el árbol en 
preorden, primero la raíz, luego la izquierda y luego 
la derecha, para eso se verifica si el puntero recibibo
apunta a NULL y si lo hace se termina la función, en caso
de que no entonces se imprime el valor almacenado en la 
dirección de memoria del nodo actual con el operador
flecha, posteriormente se usa recursión para llamar 
los nodos de la izquierda y luego los de la derecha del
árbol.  
*/
void preorderTraversal (struct Node* node) { 
    if (node == NULL)
    return;

    cout << node->data << "->";
    preorderTraversal (node->left); 
    preorderTraversal (node->right);
}


/*Se declara una función para recorrer el árbol en 
postorder, primero los nodos de la izquierda
, luego los nodos de la derecha y luego la raíz, 
para eso se verifica si el puntero recibibo apunta a NULL 
y si lo hace se termina la función, en caso de que no 
entonces se imprime el valor almacenado en la dirección 
de memoria del nodo actual con el operador empezando 
por los valores de la izquiera ya que primero se llama 
de manera recursiva la función con el nodo left, luego
se hace lo mismo con right hasta llegar a la raíz.
*/
void postorderTraversal (struct Node* node) { 
    if (node == NULL) 
        return;

    postorderTraversal (node->left); 
    postorderTraversal (node->right); 
    cout << node->data << "->";

}


/*Se declara una función para recorrer el árbol en 
inorder, primero los nodos de la izquierda
, luego la raíz y los nodos de la derecha, 
para eso se verifica si el puntero recibibo apunta a NULL 
y si lo hace se termina la función, en caso de que no 
entonces se imprime el valor almacenado en la dirección 
de memoria del nodo actual con el operador empezando 
por los valores de la izquiera ya que primero se llama 
de manera recursiva la función con el nodo left, luego
se hace lo mismo con la raíz y se pasa a los nodos de 
la derecha.
*/
void inorderTraversal (struct Node* node) { 
    if (node == NULL) 
        return;
    
    inorderTraversal (node->left); 
    cout << node->data << "->"; 
    inorderTraversal (node->right);
}



/*En el main se crea un nodo raíz y se agregan 
nodos tanto a la izquierda como a la derecha usando
new para asignarlos de manera dinámica en memoria*/ 
int main() {
struct Node* root = new Node(1); 
root->left = new Node(12);
root->right = new Node(9); 
root->left->left = new Node(5); 
root->left->right = new Node(6);

cout << "Inorder traversal "; 
inorderTraversal(root);
cout << "\nPreorder traversal "; 
preorderTraversal(root);
cout << "\nPostorder traversal "; 
postorderTraversal(root);

return 0;
}