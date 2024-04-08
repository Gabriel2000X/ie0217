# include "funciones.hpp"

using namespace std;

/* primer mundo bool tieneAeropuerto, int poblacionPais, int id, string nombre, string continente, bool tiene5G, bool centroInvest*/
PaisPrimerMundo crearPaisPrim(vector<int>& vectorInt){

    /*Se pide el nombre del país al usuario*/
    string nombre;
    cout << "Ingrese el nombre del país: ";
    cin >> nombre;

    cout << "\n";
    
    /*Se le pide al usuario expresar mediante un número si el país tiene o no un aeropuerto
    si hay uno, se le pide que introduzca un uno, si no lo hay puede introducir un dos 
    u otro número*/
    cout<< "¿El país tiene aeropuerto?\n";
    cout<< "1.Sí\n";
    cout<< "2.No\n";
    cout << "Si ingresa un número distinto también se asumirá que no tiene.\n";
    cout << "\nIngrese el número correspondiente: ";
    
    
    /*Se crean las variables que almacenan los valores correspondientes*/
    int aero;
    bool aeropuerto;

    /*Se utliza un cliclo while en el que se introduce directamente la 
    entrada en la condición, si se introduce algo no válido como una letra
    se genera un false, pero el ! lo convierte en true, haciendo que el 
    ciclo se ejecute, con cin.clear se reestablece cin a su estado vacío
    y la línea de cin.ignore se encarga de ignorar todos los caracteres en 
    el buffer de entrada hasta que se llega a una nueva línea. */  
    while (!(cin >> aero)) {
            cout << "\nError: Ingrese un valor numérico.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    /*Se declaran los casos en los que aeropuerto es true o false*/
    if (aero == 1){
        aeropuerto = true;
        }
    else {
    
        aeropuerto = false;
    }
    
    /*Se le pide al usuario la población del país como un número entero, se 
    usa el mismo fragmento de código anterior para que no se siga el programa
    si el usuario no introduce un valor entero. */
    cout << "\n";

    int poblacion;
    cout << "Ingrese la población del país: ";
    while (!(cin >> poblacion)) {
            cout << "\nError: Ingrese un valor numérico.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

    /* Se asigna de manera automática un valor primo del vector 
    diseñado para esto al parámetro id siempre que el vector no 
    esté vacío*/
        int id;
    if (!vectorInt.empty()) { //Se confirma que el vector no esté vacío
        id = vectorInt[0]; //Se le asigna la primera entrada del vector al id
        vectorInt.erase(vectorInt.begin()); // Se borra la primera entrada del vector para no repetir valores de id

    } 
    
    else {

        /*En el caso de que el límite de id primos predeterminados se alcance
        el usuario debe digitar su propio índice.*/
        cout << "\n";
        cout << "Límite de id predeternminados alcanzado\n" << endl;
        cout << "\ningrese un número primo mayor que 577: " << endl;
        cin >> id;
        while (id <= 577) {
            
            cout << "\ningrese un número válido\n" << endl;
            cin >> id;


        }
    }   
    

    /*Se le pide al usuario expresar mediante un número el continente al que 
    pertenece el país*/
    cout << "\n";
    cout<< "¿A que continente pertenece el país?\n";
    cout<< "1.América\n";
    cout<< "2.Europa\n";
    cout<< "3.Asia\n";
    cout<< "4.Oceanía\n";
    cout<< "5.África\n";
    cout << "Si ingresa un número distinto se asumirá que el continente es América.\n";
    cout << "\nIngrese el número correspondiente: ";
    
    
    /*Se crean las variables que almacenan los valores correspondientes*/
    int numero;
    string continente;

    /*Se utliza un cliclo while en el que se introduce directamente la 
    entrada en la condición, si se introduce algo no válido como una letra
    se genera un false, pero el ! lo convierte en true, haciendo que el 
    ciclo se ejecute, con cin.clear se reestablece cin a su estado vacío
    y la línea de cin.ignore se encarga de ignorar todos los caracteres en 
    el buffer de entrada hasta que se llega a una nueva línea. */  
    while (!(cin >> numero)) {
            cout << "\nError: Ingrese un valor numérico.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    /*Se declaran los casos para los números y los continentes*/
    if (numero == 1){
        continente = "América";
        
    }
    else if (numero == 2){
        continente = "Europa";
    
    }
    else if (numero == 3){
        continente = "Asia";
    
    }
    else if (numero == 4){
        continente = "Oceanía";
    
    }
    else if (numero == 5){
        continente = "África";
    
    }
    else {

        continente == "América";
    }
    
    


    
    /*Se le pide al usuario expresar mediante un número si el país tiene o no 5g
    si hay 5g, se le pide que introduzca un uno, si no lo hay puede introducir un dos 
    u otro número*/
    cout << "\n";
    cout<< "¿El país tiene 5G\n";
    cout<< "1.Sí\n";
    cout<< "2.No\n";
    cout << "Si ingresa un número distinto también se asumirá que no tiene.\n";
    cout << "\nIngrese el número correspondiente: ";
    
    
    /*Se crean las variables que almacenan los valores correspondientes*/
    int inter;
    bool banda;

    /*Se utliza un cliclo while en el que se introduce directamente la 
    entrada en la condición, si se introduce algo no válido como una letra
    se genera un false, pero el ! lo convierte en true, haciendo que el 
    ciclo se ejecute, con cin.clear se reestablece cin a su estado vacío
    y la línea de cin.ignore se encarga de ignorar todos los caracteres en 
    el buffer de entrada hasta que se llega a una nueva línea. */  
    while (!(cin >> inter)) {
            cout << "\nError: Ingrese un valor numérico: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    /*Se declaran los casos en los que banda es true o false*/
    if (inter == 1){
        banda = true;
        }
    else {
    
        banda = false;
    }
    


    /*Se le pide al usuario expresar mediante un número si el país tiene o no 5g
    si hay 5g, se le pide que introduzca un uno, si no lo hay puede introducir un dos 
    u otro número*/
    cout << "\n";
    cout<< "¿El país tiene un centro de investigación\n";
    cout<< "1.Sí\n";
    cout<< "2.No\n";
    cout << "Si ingresa un número distinto también se asumirá que no tiene.\n";
    cout << "\nIngrese el número correspondiente: ";
    
    
    /*Se crean las variables que almacenan los valores correspondientes*/
    int investigacion;
    bool centro;

    /*Se utliza un ciclo while en el que se introduce directamente la 
    entrada en la condición, si se introduce algo no válido como una letra
    se genera un false, pero el ! lo convierte en true, haciendo que el 
    ciclo se ejecute, con cin.clear se reestablece cin a su estado vacío
    y la línea de cin.ignore se encarga de ignorar todos los caracteres en 
    el buffer de entrada hasta que se llega a una nueva línea. */  
    while (!(cin >> investigacion)) {
            cout << "\nError: Ingrese un valor numérico.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    /*Se declaran los casos en los que centro es true o false*/
    if (investigacion == 1){
        centro = true;
        }
    else {
    
        centro = false;
    }
    
    /*Se crea un objeto de la clase PaisPrimerMundo con la información recibida y se retorna*/
    return PaisPrimerMundo(aeropuerto, poblacion, id, nombre, continente, banda, centro );

}

PaisEnDesarrollo crearPaisEnDes(vector<int>& vectorInt) { 

    /*Se pide el nombre del país al usuario*/
    string nombre;
    cout << "Ingrese el nombre del país: ";
    cin >> nombre;

    cout << "\n";


    /*Se le pide al usuario expresar mediante un número si el país tiene o no un aeropuerto
    si hay uno, se le pide que introduzca un uno, si no lo hay puede introducir un dos 
    u otro número*/
    cout<< "¿El país tiene aeropuerto?\n";
    cout<< "1.Sí\n";
    cout<< "2.No\n";
    cout << "Si ingresa un número distinto también se asumirá que no tiene.\n";
    cout << "\nIngrese el número correspondiente: ";
    
    
    /*Se crean las variables que almacenan los valores correspondientes*/
    int aero;
    bool aeropuerto;

    /*Se utliza un ciclo while en el que se introduce directamente la 
    entrada en la condición, si se introduce algo no válido como una letra
    se genera un false, pero el ! lo convierte en true, haciendo que el 
    ciclo se ejecute, con cin.clear se reestablece cin a su estado vacío
    y la línea de cin.ignore se encarga de ignorar todos los caracteres en 
    el buffer de entrada hasta que se llega a una nueva línea. */  
    while (!(cin >> aero)) {
            cout << "\nError: Ingrese un valor numérico: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    /*Se declaran los casos en los que aeropuerto es true o false*/
    if (aero == 1){
        aeropuerto = true;
        }
    else {
    
        aeropuerto = false;
    }

    /*Se le pide al usuario la población del país como un número entero, se 
    usa el mismo fragmento de código anterior para que no se siga el programa
    si el usuario no introduce un valor entero. */
    cout << "\n";

    int poblacion;
    cout << "Ingrese la población del país: ";
    while (!(cin >> poblacion)) {
            cout << "\nError: Ingrese un valor numérico: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

    /* Se asigna de manera automática un valor no primo del vector 
    diseñado para esto al parámetro id siempre que el vector no 
    esté vacío*/
        int id;
    if (!vectorInt.empty()) { //Se confirma que el vector no esté vacío
        id = vectorInt[0]; //Se le asigna la primera entrada del vector al id
        vectorInt.erase(vectorInt.begin()); // Se borra la primera entrada del vector para no repetir valores de id

    } 
    
    else {

        /*En el caso de que el límite de id no primos predeterminados se alcance
        el usuario debe digitar su propio índice.*/
        cout << "\n";
        cout << "Límite de id predeternminados alcanzado\n" << endl;
        cout << "\ningrese un número no primo mayor que 150: " << endl;
        cin >> id;
        while (id <= 150) {
            
            cout << "\ningrese un número válido: " << endl;
            cin >> id;


        }
    }   
    

    /*Se le pide al usuario expresar mediante un número el continente al que 
    pertenece el país*/
    cout << "\n";
    cout<< "¿A que continente pertenece el país?\n";
    cout<< "1.América\n";
    cout<< "2.Europa\n";
    cout<< "3.Asia\n";
    cout<< "4.Oceanía\n";
    cout<< "5.África\n";
    cout << "Si ingresa un número distinto se asumirá que el continente es América.\n";
    cout << "\nIngrese el número correspondiente: ";
    
    
    /*Se crean las variables que almacenan los valores correspondientes*/
    int numero;
    string continente;

    /*Se utliza un cliclo while en el que se introduce directamente la 
    entrada en la condición, si se introduce algo no válido como una letra
    se genera un false, pero el ! lo convierte en true, haciendo que el 
    ciclo se ejecute, con cin.clear se reestablece cin a su estado vacío
    y la línea de cin.ignore se encarga de ignorar todos los caracteres en 
    el buffer de entrada hasta que se llega a una nueva línea. */  
    while (!(cin >> numero)) {
            cout << "\nError: Ingrese un valor numérico: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    /*Se declaran los casos para los números y los continentes*/
    if (numero == 1){
        continente = "América";
        
    }
    else if (numero == 2){
        continente = "Europa";
    
    }
    else if (numero == 3){
        continente = "Asia";
    
    }
    else if (numero == 4){
        continente = "Oceanía";
    
    }
    else if (numero == 5){
        continente = "África";
    
    }
    else {

        continente == "América";
    }
    
    
    return PaisEnDesarrollo(aeropuerto, poblacion, id , nombre,  continente);
    

}


