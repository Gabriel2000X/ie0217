#include "clasesYEstruct.hpp"




    /*El constructor inicializa primerNodo como un nullptr*/
    agendaCel::agendaCel() : primerNodo(nullptr) {}


    /*El destructor libera la memoria asignada a los contactos*/
    agendaCel::~agendaCel() {

        /*Se inicializa un puntero contacto llamado actual con la
        direccion de primerNodo*/
        contacto* actual = primerNodo;
        
        /*mientras actual no apunte a la nada se realiza el siguiente
        ciclo.*/
        while (actual != nullptr) {
            
            /*Se declara un contacto puntero llamado siguienteEntrada
            y se le asigna la dirección de siguiente del puntero 
            contacto actual con el operador flecha, por lo que apunta
            al siguiente elemento de la lista. */
            contacto* siguienteEntrada = actual->siguiente;
            
            free(actual); /*Se libera la memoria que usa actual*/

            /*Se actualiza actual para apunte a la dirección a la que
            apunta siguienteEntrada, que es la del siguiente elmento
            de la lista, por lo que el siguiente elemento pasa a ser
            el actual luego de liberar la memoria del anterior elemento. */
            actual = siguienteEntrada; 
        }
    }

    /*Esta función introduce los contactos a la lista y a la tabla*/
    void  agendaCel::agregarContacto() {
        
        /*Se crean 2 variables string que tendrán los datos del contacto*/
        string nombreCont, numeroCont;

        /*Se le pide al usuario los datos del contacto y se guardan
        en las variables nombreCont y numeroCont*/
        cout << "Ingrese el nombre del nuevo contacto: ";
        cin >> nombreCont;
        cout << "Ingrese el número del nuevo contacto: ";
        cin >> numeroCont;
        
        /*Se crea objeto tipo contacto puntero llamado nuevoContacto
        y se hace casteo del puntero generado por malloc a contacto
        puntero y además se le asigna la memoria para el tamaño de un
        objeto contacto */
        contacto* nuevoContacto = (contacto*)malloc(sizeof(contacto));

        /*Se utiliza el operador flecha para asignar los valores de nombreCont
        y numeroCont a nombre y numero de nuevoContacto, además utilizando el 
        operador flecha se asigna la dirección a la que apunta primerNodo a
        el puntero siguiente de nuevoContacto. */
        nuevoContacto->nombre = nombreCont;
        nuevoContacto->numero = numeroCont;
        nuevoContacto->siguiente = primerNodo;

        /*Se asigna la dirección de nuevoContacto a primerNodo, por lo que 
        nuevoContacto es el primer nodo de la lista.*/
        primerNodo = nuevoContacto;

        /*Se genera la clave con la combinación del nombreCont y
        numeroCont que digita el usuario*/
        string clave = nombreCont + numeroCont;

        /*Se indexa el puntero nuevoContacto en la tabla con
        la clave generada.*/
        tabla[clave] = nuevoContacto;
    }

    
    
    
    /* se define el método imprimirContactos */
   void agendaCel::imprimirContactos() {
   
    /*Se declara una variable booleana llamada intercambio, con ella se 
    verificará si se realizan inercambios de posición*/
    bool intercambio = false;

    /*Se utiliza un do while para ejectura el ciclo al menos  una vez*/
    do {
        
        /*Se vuelve a declarar intercambio como false, ya que puede ser
        que se le asignara true en el ciclo*/
        intercambio = false;

        /*Se inicializan dos contacto punteros, uno para guardar la posición actual
        de la lista y se inicializa con la dirección de primerNodo, y el puntero 
        nodoSiguiente define apuntando al vacío.*/
        contacto* nodoActual = primerNodo;
        contacto* nodoSiguiente = nullptr;

        /*Este ciclo interno se realiza mientras nodoActual no sea un nullptr, por lo que
        se repite mientras nodoActual no apunte a la nada y mientras el miembro
        llamado siguiente del nodoActual sea diferente del nodoSiguiente para 
        que el ciclo se detenga cuando se tienen los valores acomodados*/
        while (nodoActual != nullptr && nodoActual->siguiente != nodoSiguiente) {
            
    
            /*Se pueden comparar cadenas string en c++ con los operadores mayor y menor,
            y en este caso se compara la cadena nombre de nodoActual con la cadena nombre
            del miembro siguiente de nodoActual letra por letra, con que la primera letra
            esté después en el abecedario se asume que es mayor y se hace el cambio.*/
            if (nodoActual->nombre > nodoActual->siguiente->nombre) {
                
                /*Tanto el número como el nombre almacenados en nodoActual se intercambian con
                los almacenados en la siguiente dirección de memoria que corresponde al siguiente
                objeto de la lista.*/
                swap(nodoActual->nombre, nodoActual->siguiente->nombre);
                swap(nodoActual->numero, nodoActual->siguiente->numero);

                
                intercambio = true;
            }

            /*Se avanza a la siguiente posición en memoria asignando la dirección en el 
            miembro siguiente de nodoActual a nodoActual*/
            nodoActual = nodoActual->siguiente;
        }

        /*Se actualiza el puntero del siguiente nodo, para no repetir
        ordenamiento de nodos ya ordenados.*/
        nodoSiguiente = nodoActual;


    } while (intercambio); /*Se repite si intercambio es true*/

    /*Se imprimen los contactos ordenados recorriendo la lista
    ordenada y se siguen imprimiendo utilizando actual mientras
    actual no apunte a la nada*/
    cout << "Contactos ordenados alfabéticamente:" << endl;
    contacto* actual = primerNodo;
    
    while (actual != nullptr) {
        cout << "Nombre: " << actual->nombre << ", Teléfono: " << actual->numero << endl;
        actual = actual->siguiente;
    }

 }