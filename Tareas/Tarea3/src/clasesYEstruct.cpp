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
                objeto de la lista, esto se realza mediante swap, que viene incluida en 
                unordered_map*/
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


void agendaCel::actualizarTabla() {
    /*La tabla creada anteriormente se limpia, dejándola vacía*/
    tabla.clear();

    /*Se define nodoActual como un contacto puntero que apunta a primerNodo*/
    contacto* nodoActual = primerNodo;
    
    /*El ciclo se ejecuta mientras nodoActual no apunte a la nada*/
    while (nodoActual != nullptr) {
        
        
        /*Se genera de nuevo la clave para la tabla*/
        string clave = nodoActual->nombre + nodoActual->numero;

        /* Se asgina la clave generada a una entrada en la tabla que
        tendrá la información de nodoActual y se suigue con el siguiente
        nodo*/
        tabla[clave] = nodoActual;
        nodoActual = nodoActual->siguiente;
    }
}


/*Para eliminar un contacto se utiliza la siguiente función*/
void agendaCel::eliminarContacto() {
    
    /*Se declaran las variables que no son punteros, se declara eliminarCloud como
    falso por defecto para que no se elimine de la memoria si el usuario mete un valor
    diferente de s */
    bool eliminarCloud = false;
    string nombreEliminar;
    string nube;
    /*Se le pide al usuario el nombre del contacto que quiere eliminar*/
    cout << "Introduzca el nombre del contacto que quiere eliminar: ";
    cin >> nombreEliminar;

   /*Se le pide al usuario que introduzca s para borrar los datos de la nube*/
    cout << "\nIntroduzca la letra s para borrar los datos de la nube";
    cout << "\nIntroduzca otra letra para no borrar los dato de la nube";
    cout << "\nIntroduzca la opción que desee: ";
    cin >> nube;

    /*Si el usuario introduce una s entonces eliminarCloud es true */
    if (nube == "s"){
        eliminarCloud = true;
    }
   


    /*Se definen dos contacto punteros uno llamado nodoActual que 
    se inicializa con la dirección de primerNodo, luego se declara
    nodoAnterior que se inicializa como un nullptr */
    contacto* nodoActual = primerNodo;
    contacto* nodoAnterior = nullptr;

    /*si nodo actual no apunta a la nada y el miembro nombre de nodoActual
    contiene un nombre diferente del nombre a eliminar entonces*/
    while (nodoActual != nullptr && nodoActual->nombre != nombreEliminar) {
        
        /*Se asigna la dirección de nodoActual a nodoAnterior
        y se asigna la dirección del siguiente nodo al nodoActual*/
        nodoAnterior = nodoActual;
        nodoActual = nodoActual->siguiente;
    }

    /*Si nodoActual no apunta a la nada y se llega a esta parte del código es 
    porque se encontró el nombre en la lista*/
    if (nodoActual != nullptr) {
        
        /*Si se tiene una dirección en el nodoAnterior entonces
        se enlaza con el nodo siguiente utilizando el operador flecha.*/
        if (nodoAnterior != nullptr) {
            nodoAnterior->siguiente = nodoActual->siguiente;
        } else {
            /*Si el nodo a eliminar es el primero entonces
            se le asigna a primerNodo la dirección del siguiente*/
            primerNodo = nodoActual->siguiente;
        }

        /*Si eliminarCloud es true entonces la clave del nodo actual
        se genera y se borra el elemento de la tabla asociado con la clave*/
        if (eliminarCloud) {
            string clave = nodoActual->nombre + nodoActual->numero;
            tabla.erase(clave);
            
        }

        /*Se libera la memoria del elemento*/
        free(nodoActual);
    }
}


void agendaCel::imprimirCloud() {
    cout << "Datos cloud:" << endl;

    /*Se itera sobre los elementos de la tabla utilizando pair
    que declara que cada entrada de la tabla tiene 2 valores
    el primero es la clave que es un string y el segundo es 
    un contacto puntero*/
    for (const pair<string, contacto*>& entrada : tabla) {
        
        /*Se le asigna el valor de entrada.first que vendría siendo la clave
        asociada a cada elemento, a la variable claveElemento y además se 
        asigna entrada.second a nodoActual, entrada.second corresponde
        a la dirección a los datos asociados a la clave actual.*/
        string claveElemento = entrada.first;
        contacto* nodoActual = entrada.second;

        /*Se imprime clave elemento*/
        cout << "Clave: " << claveElemento << endl;

        /*Si nodoActual no es un nullptr entonces se imprime la información del contacto
        asociado que se saca del puntero entrada.second que se asignó a nodoActual y se asigna
        la dirección del siguiente nodo a nodoActual*/
        if (nodoActual != nullptr) {
            cout << "Los datos del elemento asociado son los siguientes:" << endl;
            cout << "    Nombre: " << nodoActual->nombre << ", Teléfono: " << nodoActual->numero << endl;
            nodoActual = nodoActual->siguiente;
        }
    }
}