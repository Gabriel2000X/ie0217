# include "funciones.hpp"

using namespace std;

/* Se crea una función que genera todos los atributos que se necesitan para
crear un elemento de la clase PaisPrimerMundo, esta recibe un vector como argumento, esto
para asignar el id de los países desarrollados */
PaisPrimerMundo crearPaisPrim(vector<int>& vectorInt){

    /*Se pide el nombre del país al usuario*/
    string nombre;
    cout << "Ingrese el nombre del país: ";
    /*Se utiliza cin.ignore para asegurar que el buffer 
    de entrada esté limpio antes de leer la entrada de texto,
    y se usa getline para que se almacene la entrada de cin 
    en nombre, esto se hace para prevenir que los países con 
    nombres de dos palabras causen errores.*/
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin,nombre);

    cout << "\n";
    
    /*Se le pide al usuario expresar mediante un número si el país tiene o no un aeropuerto
    si hay uno, se le pide que introduzca un uno, si no lo hay puede introducir un dos 
    u otro número*/
    cout<< "¿El país tiene aeropuerto?\n";
    cout<< "1.Sí\n";
    cout<< "2.No\n";
    cout << "Si ingresa un número distinto también se asumirá que no tiene.\n";
    cout << "\nIngrese el número correspondiente: ";
    
    
    /*Se crean las variables que almacenan los valores correspondientes
    para la selección de aeropuerto*/
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
    
    
    /*Se crean las variables que almacenan los valores correspondientes
    para la asignación del continente*/
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
    /*Se declaran los casos para los números y la asignación de los continentes*/
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

/*Similarmente se crea una función para generar un objeto de tipo 
PaisEnDesarrollo*/
PaisEnDesarrollo crearPaisEnDes(vector<int>& vectorInt) { 

    /*Se pide el nombre del país al usuario y similarmente
    se utiliza cin.ignotr y getline para evitar errores
    con países cuyo nombre tenga dos palabras.*/
    string nombre;
    cout << "Ingrese el nombre del país: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin,nombre);

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
    
    /*Se retorna el objeto PaisEnDesarrollo*/
    return PaisEnDesarrollo(aeropuerto, poblacion, id , nombre,  continente);
    

}

/*Como los países creados se almacenan en vectores de diferente tipo según el tipo de país
entonces se define una función que busca y elimina un país del vector que lo contenga*/
void EliminarPais(vector<PaisPrimerMundo>& vectorPrimerMundo, vector<PaisEnDesarrollo>& vectorTercerMundista){

    /* Se le pide al usuario el nombre del país que quiere eliminar 
    de manera similar a las anteriores, esto evita errores
    para países con nombres con más de una palabra. */
    string nombrePais;
    cout << "Ingrese el nombre del país: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin,nombrePais);

    
    /* Se tiene un ciclo for que recorre uno de los vectores recibidos como
    argumento con respecto a su tamaño usando .size*/
     for (size_t i = 0; i < vectorPrimerMundo.size(); ++i) {

        /* Si el nombre del pais que se digita coincide con el 
        nombre de un país del vector se borra la entrada del vector
        que contiene ese país usando .begin para ir a la primera
        entrada y se le suma i para llegar a la posición actual y 
        eliminarla.*/
        if (nombrePais == vectorPrimerMundo[i].nombrePais) {
            vectorPrimerMundo.erase(vectorPrimerMundo.begin() + i);
            --i; /*Se retrocede el índice para compensar el borrado*/
        }
     }
    
    /*Se tiene la misma lógica anterior pero para el vector de países 
    no desarrollados*/
        for (size_t i = 0; i < vectorTercerMundista.size(); ++i) {
            if (nombrePais == vectorTercerMundista[i].nombrePais) {
                vectorTercerMundista.erase(vectorTercerMundista.begin() + i);
                --i; 
            }
        }  




}

/*Se crea una función que convierte los objetos PaisPrimerMundo y PaisEnDesarrollo en
objetos tipo Pais.*/
Pais convertir(vector<PaisPrimerMundo>& vectorPrimerMundo, vector<PaisEnDesarrollo>& vectorTercerMundista){

    string nombrePais;
    cout << "\nIngrese el nombre del país que quiere comparar: ";
    cin >> nombrePais;
    
    /* Se tiene un ciclo for que recorre uno de los vectores recibidos como
    argumento con respecto a su tamaño usando .size*/
     for (size_t i = 0; i < vectorPrimerMundo.size(); ++i) {

        /* Si el nombre del pais que se digita coincide con el 
        nombre de un país del vector se asigna el país 
        almacenado en esa entrada a paisEncontrado*/
        if (nombrePais == vectorPrimerMundo[i].nombrePais) {
            PaisPrimerMundo paisEncontrado = vectorPrimerMundo[i];

            /*Se convierte PaisEncontrado en un objeto tipo País.*/
            Pais paisConvertido = static_cast<Pais>(paisEncontrado);
            
            /*Se retorna el objeto tipo País.*/
            return paisConvertido;
        }
     }
    
    /*Se tiene la misma lógica anterior pero para el vector de países 
    no desarrollados*/
        for (size_t i = 0; i < vectorTercerMundista.size(); ++i) {

        if (nombrePais == vectorTercerMundista[i].nombrePais) {
            PaisEnDesarrollo paisEncontrado = vectorTercerMundista[i];
            Pais paisConvertido = static_cast<Pais>(paisEncontrado);
            return paisConvertido;
        }
     }

        /*Si el país no se encuentra se retorna un paisGenerico porque no se pudo 
        hacer la conversión*/
        cout << "No se encontró país que busca.\n";
        cout << "se generará un país genérico, por lo que la comparación no será confiable.\n";
        Pais paisGenerico(false, 0, 0, "Generico", "Generico");

        return paisGenerico;
    } 

/*Se define una función que llama al operador 
sobrecargado == para comparar dos países*/
bool comparar(Pais primerPais, Pais segundoPais){


    bool valor = primerPais == segundoPais;
    return valor;
    } 



/*Se define una función para imprimir la información de todos los 
países existentes en el programamediante un objeto Planeta.*/
void imprimirInformacion(Planeta argPlaneta) {

    /*Se definen variables enteras para guardar el número de países 
    que de cada continente tanto desarrollados como en desarrollo*/
    int desarrolladosAmerica = 0;
    int desarrolladosAsia = 0;
    int desarrolladosEuropa = 0;
    int enDesarrolloAmerica = 0 ;
    int enDesarrolloAsia = 0;
    int enDesarrolloEuropa = 0;

    /*Se cuentan los países desarrollados de cada continente utilizando el 
    método obtenerPaisesPrimerMundo de la clase Planeta, que regresa 
    el vector que contiene los valores de los países desarrollados, 
    esto se hace con un ciclo for que recorre todo el vector y se le 
    suma un 1 a la variable respectiva si se detecta que el continente coincide.*/
    vector<PaisPrimerMundo> vectDesarrollado = argPlaneta.obtenerPaisesPrimerMundo();
    for (size_t i = 0; i < vectDesarrollado.size(); ++i) {


        if ( vectDesarrollado[i].continentePais == "América" ) {
            desarrolladosAmerica++;
        } 
        else if (vectDesarrollado[i].continentePais == "Europa") {
            desarrolladosEuropa++;
        }
        else if (vectDesarrollado[i].continentePais == "Asia") {
            desarrolladosAsia++;
        }  
    
    }

    /*Se cuentan los países en desarrollo de cada continente utilizando el 
    método obtenerPaisesEnDesarrollo de la clase Planeta, que regresa 
    el vector que contiene los valores de los países en desarrollo, esto se 
    hace con un ciclo for que recorre todo el vector y se le suma un 1 a la
    variable respectiva si se detecta que el continente coincide.*/
    vector<PaisEnDesarrollo> vectSubDesarrollado = argPlaneta.obtenerPaisesEnDesarrollo();
    for (size_t i = 0; i < vectSubDesarrollado.size(); ++i) {

        if ( vectSubDesarrollado[i].continentePais == "América" ) {
            enDesarrolloAmerica++;
        } 
        else if (vectSubDesarrollado[i].continentePais == "Europa") {
            enDesarrolloEuropa++;
        }
        else if (vectSubDesarrollado[i].continentePais == "Asia") {
            enDesarrolloAsia++;
        }  
    
    }

    /*Se imprime la información de los continentes utilizando los métodos
    imprimirContinentes e imprimirAvion.*/
    cout<< "\nImprimiendo información de los países\n";
    argPlaneta.imprimirContinentes();
    argPlaneta.imprimirAvion();

    /*Se imprime la cantidad de países en desarrollo de cada continente por el que pasa el avión*/
    cout<< "\nInformación sobre los Países\n";
    cout<< "América posee " << desarrolladosAmerica << " países del primer mundo y " << enDesarrolloAmerica << " países en desarrollo.\n";
    cout<< "Europa posee " << desarrolladosEuropa << " países del primer mundo y " << enDesarrolloEuropa << " países en desarrollo.\n";
    cout<< "Asia posee " << desarrolladosAsia << " países del primer mundo y " << enDesarrolloAsia << " países en desarrollo.\n";

    /* Se crean variables string para almacenar lo que se debe imprimir si 
    se cumple o no el valor booleano que se almacena en sus respectivos atributos
    de los objetos PaisPrimerMundo.*/
    string aeropuerto;
    string banda5G;
    string centro;

    cout<< "\nInformación sobre los Países del primer mundo\n";
    
    /*Se declaran los mensajes que se guardan en aeropuerto dependiendo
    de si el valor aeropuerto es verdadero o falso, se revisan 
    todas las entradas del vectorDesarrollado que es el 
    vector que guarda los países de primer mundo, con un 
    ciclo for*/
    for (size_t i = 0; i < vectDesarrollado.size(); ++i) {

        if (vectDesarrollado[i].aeropuerto == true){

            string aeropuerto = ", Tiene aeropuerto";
        }
        else {

            string aeropuerto = " , No tiene aeropuerto";

        }

        /*Se sigue una lógica parecida para el valor booleano 
        que guarda la condición del 5g, esto se hace utilizando
        el método getBandaAncha que devuelve el valor del 5G 
        en la clase PaisPrimerMundo*/
        if (vectDesarrollado[i].getBandaAncha() == true){

            string banda5G = " y Tiene 5G";
        }
        else {

            string banda5G = " y No tiene 5G";

        }

        /*Se sigue la misma lógica con el valor booleano 
        que guarda la condición del centro de investigación, se
        accesa con .getCentroInvest que es un método de 
        la clase PaisPrimerMundo que devuelve el valor
        booleano que guarda esta información.*/
        if (vectDesarrollado[i].getCentroInvest() == true){

            string centro = ", Tiene un centro de investigación";
        }
        else {

            string centro = " , No tiene un centro de investigación";

        }


        /*Se imprime la información completa de los países desarrollados.*/
        cout << "El país " << vectDesarrollado[i].nombrePais << " Pertenece al continente " << vectDesarrollado[i].continentePais  <<
        ", Posee una población de " << vectDesarrollado[i].habitantes << ", Posee un PIB de: " << vectDesarrollado[i].PIB()  << aeropuerto << centro << ", su id es: " << vectDesarrollado[i].getId()   
        << banda5G << "\n"; 
          
    
    }

    /*Se sigue la misma lógica de asignación de strings 
    para el elemento aeropuerto pero esta vez para 
    el vectSubDesarrollado que guarda la información de los
    países en desarrollo.*/
    cout<< "\nInformación sobre los Países en desarrollo\n";
    
    for (size_t i = 0; i < vectSubDesarrollado.size(); ++i) {

        if (vectSubDesarrollado[i].aeropuerto == true){

            string aeropuerto = ", Tiene aeropuerto";
        }
        else {

            string aeropuerto = " , No tiene aeropuerto";

        }





        /*Se imprime la información de los países en desarrollo.*/
        cout << "El país " << vectSubDesarrollado[i].nombrePais << " Pertenece al continente " << vectSubDesarrollado[i].continentePais  <<
        ", Posee una población de " << vectSubDesarrollado[i].habitantes << ", Posee un PIB de: " << vectSubDesarrollado[i].PIB()  << aeropuerto << " y su id es: " << vectSubDesarrollado[i].getId() << "\n"; 
          
    
    }




}  