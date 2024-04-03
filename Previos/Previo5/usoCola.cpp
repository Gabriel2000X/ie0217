

#include <iostream> 
#define SIZE 5

using namespace std;

/*Se declara Queque con 3 atributos privados, un arreglo de 
enteros de tamaño 5, un entero llamado front y otro llamado rear
para el frente y final de la cola*/
class Queue {
    private:
        int items [SIZE], front, rear;
    
    /*Se empiezan los atributos públicos con el 
    contructor que define front y rear en -1 */
    public: 
    
    Queue() {
    
    front = -1;
    rear = -1;
    }


    /*Se define el método booleano isFull que  verifica si 
    el front es cero y rear es el tamaño -1, si esto es así 
    se devuelve true y la cola está llena, en cualquier otro 
    caso se retorna false y la cola no está llena.*/
    bool isFull() {
        if (front == 0 && rear == SIZE -1){
            return true;
        }

        return false;
    }

    /* Se define el método booleano isEmpty que verifica si
    front está en -1, si esto es así devuelve true y la cola está
    vacía, si no entonces devuelve false. y la cola está llena.*/
    bool isEmpty() {
        if (front == -1){
            return true;
        }
        else{
            return false;
        }
    }


    /* Se define el método enQueque que añade elementos a la cola,
    si la cola está llena no se añaden, pero si no lo está, se verifica
    si front está en -1 para verificar si la cola está vacía, si esto se 
    cumple, se coloca front en 0, se le aumenta uno a rear y se coloca en 
    la posición de rear el elemento nuevo.*/
    void enQueue(int element) { 
        if (isFull()) {
            cout << "Queue is full";
        } 
        
        else {
            if (front ==-1) front = 0;
                rear++;
                items [rear] = element;
                cout << endl
                    << "Inserted " << element << endl;
        }
    }
    /*Se define el método deQueque que saca elementos de 
    la cola, si la cola está vacía no se puede sacar elementos, 
    por lo que se pasa al siguiente caso, si no está vacía
    y solo queda un elemento entonces se reinicia la cola
    haciendo que tanto el front como el rear sean -1, si
    aún queda más de un elemento se le suma una posición
    al front y con eso se elimina el elemento en la primera
    posición.*/
    int deQueue() {
        int element;
        if (isEmpty()) {
            cout<< "Queue is empty" << endl;
            return (-1);
        } 
        else {
            element = items [front];
            
            if (front >= rear) {
                front = -1;
                rear = -1;
            } 
            else {
            
                front++;
            }

            cout << endl
                << "Deleted -> " << element << endl;
            return (element);
        }
    }


    /* Se define el método display que imprime los
    elementos de la cola mientras no esté vació,
    esto recorriendo el arreglo desde el front que 
    es el elemento frontal hasta rear que es el 
    elemento trasero, además imprime los índices del
    elemento frontal y trasero. */
    void display() {
    
        
        int i;
        if (isEmpty()) {
            cout << endl
                << "Empty Queue" << endl;
        } 
        
        else {
        
            cout << endl
                << "Front index-> " << front; 
                cout << endl
                    << "Items -> ";
            for (i= front; i <= rear; i++)
                cout<< items[i] << " ";
                cout << endl
                    << "Rear index-> " << rear << endl;
        }

    }
};


int main() { Queue q;
    /* Se intenta sacar un elemento de la cola pero 
    no es posible ya que está vacía.*/
    q.deQueue();

    /* Se añaden los números del 1 al cinco a la cola*/
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);
    /* Como el arreglo era de tamaño 5, la cola ya está llena y no se puede
    agregar el elemento 6*/
    q.enQueue(6);
    /*Se imprimen los elementos y los
    index de los "extremos" (frontal y trasero)*/
    q.display();
    /*Se elimina el elemento frontal*/
    q.deQueue();
    /*Se imprimen los elementos y los
    index de los "extremos" (frontal y trasero)*/
    q.display();
    return 0;

    
    }
