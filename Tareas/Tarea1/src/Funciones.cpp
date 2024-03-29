/**
 * @file  Funciones.cpp
 * @brief Este archivo contiene las definiciones de las funciones necesarias para el 
 * funcionamiento del proyecto.
 *
 * @author Gabriel González Rivera B93432
 * @date 29/3/2024
 * 
 * Licencia: MIT
 */

#include "Funciones.hpp"

/* se incluye iostream, en este caso se usa para
imprimir texto de salida. */
#include <iostream> 
#include <random> 

/* Se utiliza namespace para no tener la necesida de escribir std::
antes de elementos como cout y endl */
using namespace std;



/**
 * @brief Función que permite al usuario elegir la dificultad del juego.
 * 
 * La función despliega un menú donde aclara los detalles de las 
 * dificultades y permite al usuario elegir la dificultad con un 
 * número del 1 al 3, el cual retorna.
 * 
 * 
 * @return retorna un entero de 1 a 3 que representa la dificultad
 */
int selectorDificultad() {

    int dificultad;

    cout<< "\n";
    cout<< "1.Fácil (7 intentos permitidos)\n";
    cout<< "2.Intermedio (5 intentos permitidos)\n";
    cout<< "3.Difícil (3 intentos permitidos)\n";
    cout<< "Ingrese el número correspondiente a su opción: ";
   
    /*Se utliza un cliclo while en el que se introduce directamente la 
    entrada en la condición, si se introduce algo no válido como una letra
    se genera un false, pero el ! lo convierte en true, haciendo que el 
    ciclo se ejecute, con cin.clear se reestablece cin a su estado vacío
    y la línea de cin.ignore se encarga de ignorar todos los caracteres en 
    el buffer de entrada hasta que se llega a una nueva línea. */
   
    while (!(cin >> dificultad)) {
            cout << "\nError: Ingrese un número válido.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    cout<< "\nDificultad seleccionada, saliendo al menú\n";
    return dificultad;
}




/**
 * @brief Esta función se encarga de añadir nuevas palabras al array creado.
 * 
 * Esta función le añade palabras al array creado para ser el diccionario 
 * del juego, esto se logra sumando una entrada a la cantidad de entradas
 * anterior del arreglo y asignandole la nueva palabra que se le pide al 
 * usuario a este espacio.
 * 
 * @param array es el arreglo que hace de diccionario.
 * @param cantidadPalabras la referencia a la variable que contiene número de entradas del arreglo.
 * 
 */
void agregarPalabra(string array[], int &cantidadPalabras) {
    
    /* le pide al usuario una nueva palabra */
    string nuevaPalabra;
    cout << "\nIngrese la palabra que desea agregar al diccionario:\n";
    cin >>  nuevaPalabra;

     /* suma una entrada al array y
    además almacena la palabra introducida en esta entrada.*/
    array[cantidadPalabras++] = nuevaPalabra;

}

/**
 * @brief Esta función imprime las palabras del diccionario en la terminal.
 * 
 * Esta función imprime en la terminal las palabras dentro del diccionario
 * acompañada con algunas oraciones para hacerla más amigable al usuario,
 * se usa cout para imprimir.
 * 
 * 
 * 
 * @param array es el arreglo que hace de diccionario, pero se pasa constante para que no se cambie.
 * @param cantidadPalabras el número de entradas del arreglo.
 * 
 */
void mostrarDiccionario( const string array[], int cantidadPalabras) {
    /*se itera sobre las palabras del array, mientras se tenga una i menor
    que cantidadPalabras se aumenta i.  */
    cout<< "El contenido del diccionario es el siguiente: \n";
    for (int i = 0; i< cantidadPalabras; ++i) {
        
        /*se imprimen las palabras sobre las cuales se iteral.*/
        cout << "Palabra: " <<array[i] << "\n";


    }

}

/**
 * @brief Esta función se encarga de inicializar el juego.
 * 
 * esta función elige una palabra al azar dentro del arreglo mediante un generador de números al azar, 
 * inicializa la palabra a adivinar con guiones e inicializa los intentos actuales y los máximos
 * según la dificultad, esta función construye el elemento de la estructura.
 * 
 * 
 * @param array es el arreglo que hace de diccionario.
 * @param cantidadPalabras es el número de entradas del arreglo.
 *  @param dificultad es el número entero que define la dificultad.
 * 
 * @return retorna un elemento de la estructura juego que contiene los atributos de esta.
 */
juego iniciarJuego( string array[], int cantidadPalabras, int dificultad ) {

    juego atributos;
    string *puntero;

    /* Proceso para hacer que se seleccione una palabra random del diccionario*/

   
    /*Se utliza random_device para asegurar que verdaderamente se generen números al azar*/
    random_device azar;
    
    /* Se define un generador de números al azar de tipo mt19937*/
    mt19937 generador(azar());

    /* Se especifica el rango que se quiere para los números enteros aleatorios, 
    va de cero a el máximo valor de indice que puede tener una palabra del 
    diccionario */
    uniform_int_distribution<int> rango(0, cantidadPalabras - 1);

    /* Se crea un número random con el rango especificado, usando el generador
    creado anteriormente*/
    int indiceRandom = rango(generador);

    /* Se asigna el puntero a la dirección de memoria
    del primer elemento del array*/
    puntero = array;

    /* Se le asigna seleccion al contenido del espacio en memoria
    dentro de puntero + indiceRandom, esta notación hace que el numero
    coincida con el contenido del índice.*/
    string seleccion = *(puntero + indiceRandom);
    
    /* Se asigna seleccion al atributo palabra*/
    atributos.palabra = seleccion;


    /* Inicialización de la palabra elegida como guiones bajos*/

    /*Se asigna un string del largo de atributos.palabra a atributos.palabraAdivinar,
    este se compone solo de guiones bajos.*/
    atributos.palabraAdivinar = string(atributos.palabra.length(), '_');

    /* Inicialización de intentos máximos permitidos y de intentos actuales*/

    /* Se utilizan if y else para determinar el número de intentos que le será
    asignado a intentosMax*/
    if (dificultad == 1) {

        int intentosPermitidos = 7;
        atributos.intentosMax = intentosPermitidos;
    }

    else if (dificultad == 2) {

        int intentosPermitidos = 5;
        atributos.intentosMax = intentosPermitidos;
    }
    
    else { 

        int intentosPermitidos = 3; 
        atributos.intentosMax = intentosPermitidos;
    
    }

    /*Se inicializa intentosActuales en cero*/

    atributos.intentosActuales = 0;
    
    return atributos;
}


/**
 * @brief Esta función se encarga de pedir una letra al usuario y verificar si es correcta.
 * 
 * Esta función verifica si las letras introducidas son correctas y se actualiza la palabra
 * que se está adivinando si la letra es correcta, además imprime un mensaje si la letra es 
 * correcta  e imprime un mensaje diferente si la letra es incorrecta, además se suma 
 * un turno a los turnos actuales con cada introducción de letra.
 * 
 * @param atributos se le pasa la estructura a la función por referencia para poder modificar. 
 * la estructura original
 * 
 */

void adivinarPalabra(juego &atributos) {

    /*Se inicializan las diferentes variables necesarias, así como 
    también se prepara el puntero para acceder a los elementos de 
    atributos.*/

    juego *puntero;

    string letra;

    puntero = &atributos;

    bool encontrada = false;
    
    
    
    /*Se le pide una letra al usuario, si introduce más
    de una letra entonces se entra en un bucle while del que no 
    se sale hasta ingresar una sola letra.*/
    cout<< "\nIngrese una letra: \n";
    cin >> letra;
    
    while (letra.length() != 1) {
        
        cout << "Por favor ingrese solo una letra: ";
        cin >> letra;
    }

    /*Se recorren las letras de palabra que es la palabra elegida*/
    for (int i = 0; i < puntero->palabra.length(); ++i ) {

        /*Si se encuentra una letra igual a la letra que introdujo el usuario
        entonces se reemplaza esa letra en palabraAdivinar y encontrada se declara
        como true*/
        if (puntero->palabra[i] == letra[0]) {
        
            puntero->palabraAdivinar[i] = letra[0];
            
            encontrada = true;
        }

        
    }

   /*Si encontrada es true se imprime el mensaje para cuando se acierta y 
   el estado de la palabra, */
    if (encontrada == true) {

        cout<< "\nAcertó!, la letra " << letra << " está en la palabra.\n";
        cout<< "El estado de la palabra es el siguiente\n";
        cout << puntero->palabraAdivinar;
        /*además se suma un intento al actual y se imprime la cantidad de intentos*/
        puntero->intentosActuales++;
        cout << "\nLos intentos utilizados son: " << puntero ->intentosActuales << "\n" ;
    }
    /*Si encontrada es false se imprime el mensaje para cuando no se acierta y el estado
    de la palabra*/
    else  {

        cout<< "\nNo acertó, la letra " << letra << " no está en la palabra.\n";
        cout<< "El estado de la palabra es el siguiente\n";
        cout << puntero->palabraAdivinar;
        /*además se suma un intento al actual y se imprime la cantidad de intentos*/
        puntero->intentosActuales++;
        cout << "\nLos intentos utilizados son: " << puntero ->intentosActuales << "\n" ;
    }
}


/**
 * @brief Esta función verifica si el juego debe terminar en cada turno.
 * 
 * Esta función verifica los diferentes eventos que pueden ocurrir en cada turno
 * y con esto se verifica si ocurre una condición para que el juego termine, si 
 * esto ocurre se termina el juego y se imprime un mensaje.
 * 
 * 
 * 
 * @param atributos se le pasa la estructura por referencia para modificarla de manera 
 * directa.
 * 
 */
void verificarJuego(juego &atributos){

    /*Se inicializan las diferentes variables necesarias, así como 
    también se prepara el puntero para acceder a los elementos de 
    atributos.*/
    juego *puntero;
    puntero = &atributos;

    string ultimaPalabra;

    /* Siempre que los intentos actuales sean menores a los máximos y la palabra a adivinar sea diferente de la palabra
    elegida, entonces se ejecuta la función adivinarPalabra*/
    while (puntero->intentosActuales < puntero->intentosMax &&  puntero->palabraAdivinar != puntero->palabra ) {

        adivinarPalabra(atributos);
        
    }

    /* Si no se cumplen las condiciones para el ciclo se abordan los demás casos*/

    /* Si los intentos actuales son iguales a los máximos y la palabra a adivinar sigue siendo diferente de la palabra 
    elegida entonces da la oportunidad de introducir la palabra completa*/
    if (puntero->intentosActuales = puntero->intentosMax &&  puntero->palabraAdivinar != puntero->palabra ) {
        
        cout<< "\n no logró completar la palabra en los intentos dados\n";
        cout<< "\n última oportunidad, introduzca la palabra completa: \n";
        cin >> ultimaPalabra;

        if (ultimaPalabra == puntero->palabra) {

            cout<< "\n ¡Felicidades! adivinó la palabra\n";
        }

        else  {

            cout<< "\n no adivinó la palabra, juego terminado\n";

        }
    }

    /*En caso de que los intentos sean menores a los máximos pero las palabras sean iguales, entonces se gana el juego*/
   else if (puntero->intentosActuales <  puntero->intentosMax &&  puntero->palabraAdivinar == puntero->palabra ) {
        
        cout<< "\n ¡Felicidades! adivinó la palabra\n";

    }
    /*En caso de que los intentos sean iguales a los máximos y la palabra sea igual se gana el juego.*/
    else if (puntero->intentosActuales ==  puntero->intentosMax &&  puntero->palabraAdivinar == puntero->palabra ) {
        
        cout<< "\n ¡Felicidades! adivinó la palabra\n";

    }
}