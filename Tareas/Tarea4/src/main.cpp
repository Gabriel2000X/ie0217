#include <iostream>
#include "clases.hpp"
using namespace std;


/*Se utiliza una enumeración para 
los casos del switch case*/
enum opciones  { 

    TAMANO_VALORES = 1,
    TIPO_DATOS,
    OPERACION_DESEADA,
    DATOS_ALEATORIOS,
    MOSTRAR_MATRICES,
    EJECUTAR_OPERACION,
    SALIR
    

}; 

/*Se declaran diferentes instancias de la clase Matriz según el tipo necesario usando 
el constructor vacío de la clase Matriz, esto para que cuando se llenen de valores
usando condicionales más adelante se puedan utilizar esos cambios fuera de los 
condicionales.*/
Matriz<int> matrizUnoInt;
Matriz<float> matrizUnoFloat;
Matriz<std::complex<float>> matrizUnoComplex;
Matriz<int> matrizDosInt;
Matriz<float> matrizDosFloat;
Matriz<std::complex<float>> matrizDosComplex;

int main(){ 


    /*Se declaran las intancias de clases*/
    ValidadorDeEntrada validador;
    
    /*Se declaran las variables necesarias*/
    
    /*Se utiliza int opcion para guardar el número escogido en el menú, en tipoDeDato se guarda el tipo de 
    dato deseado que introduce el usuario el por defecto es enteros y en datoValidado se guarda el valor 
    devuelto por validarTipoDato*/
    int opcion;
    std::string tipoDeDato;
    std::string datoValidado = "int";
    int filasUno;
    int columnasUno;
    int filasDos;
    int columnasDos;
  
    
   
    

    /*Se usa un do while para que siempre se ejecute una vez el ciclo*/
    do{ 

        cout << "Seleccione una opción." << endl;
        cout << "1. Ingresar el tamaño y los valores de ambas matrices." << endl;
        cout << "2. Ingresar el tipo de datos a recibir." << endl;
        cout << "3. Ingresar la operación que se desea realizar." << endl;
        cout << "4. Generar datos aleatorios para llenar las matrices." << endl;
        cout << "5. Mostrar las matrices ingresadas." << endl;
        cout << "6. Ejecutar la operación ingresada." << endl;
        cout << "7. Finalizar programa." << endl;
        cin >> opcion;

        /*Se declara un switch case para que las opciones se ejecuten dependiendo
        de lo que el usuario digite.*/
        switch (opcion)
        {
        case TAMANO_VALORES:
            

            /*Se ingresa y verifica la validez del valor de las filas de la primera 
            matriz mediante la utilización del método validarDimensiones de la clase ValidadorDeEntrada
            en un bloque try, si se lanza una excepción entonces se maneja mediante el bloque catch
            que recibe el texto generado por la excepción y lo imprime.*/
            cout << "\n Ingrese la cantidad de filas de la primera matriz: ";
            cin >> filasUno;

            try{ 
                validador.validarDimensiones(filasUno);       
            }

            catch (const char* msg){
            cout << msg << endl;
            break;
            }

            /*Se ingresa y verifica la validez del valor de las columnas de la primera 
            matriz mediante la utilización del método validarDimensiones de la clase ValidadorDeEntrada
            en un bloque try, si se lanza una excepción entonces se maneja mediante el bloque catch
            que recibe el texto generado por la excepción y lo imprime.*/
            cout << "\n Ingrese la cantidad de columnas de la primera matriz: ";
            cin >> columnasUno;

            try{ 
                    validador.validarDimensiones(columnasUno);        
            }
                        
            catch (const char* msg){
            cout << msg << endl;
            break;
            }


            /*Se utiliza una instancia de Matriz de acuerdo con el tipo introducido por el usuario
            utilizando bloques if y else if, esto se hace dentro de un bloque try, esto porque se 
            necesita que si setDimensiones dispara una excepción entonces esta se maneje por el 
            bloque catch siguiente, siempre se activa setDimensiones porque está dentro del 
            contructor, en realidad no debería disparar excepciones nunca debido a que el método
            validarDimensiones verifica de antemano que no se introduzcan dimensiones inválidas*/



            try{ 

                if (datoValidado == "int"){
                    
                    matrizUnoInt = Matriz<int>(filasUno, columnasUno, datoValidado);    
                    
                }    

                else if  (datoValidado == "float"){
                    matrizUnoFloat = Matriz<float>(filasUno, columnasUno, datoValidado);    
                }    

                else if  (datoValidado ==  "std::complex"){
                   matrizUnoComplex = Matriz<std::complex<float>>(filasUno, columnasUno, datoValidado);    
                }  
            }   
           
                        
            catch (const std::invalid_argument& e){
            std::cerr << "Error: " << e.what() << '\n';
            break;
            }



            /*Se ingresa y verifica la validez del valor de las filas de la segunda 
            matriz mediante la utilización del método validarDimensiones de la clase ValidadorDeEntrada
            en un bloque try, si se lanza una excepción entonces se maneja mediante el bloque catch
            que recibe el texto generado por la excepción y lo imprime.*/
            cout << "\n Ingrese la cantidad de filas de la segunda matriz: ";
            cin >> filasDos;

            try{ 
                    validador.validarDimensiones(filasDos);        
            }
                        
            catch (const char* msg){
            cout << msg << endl;
            break;
            }
            
            
            /*Se ingresa y verifica la validez del valor de las columnas de la segunda 
            matriz mediante la utilización del método validarDimensiones de la clase ValidadorDeEntrada
            en un bloque try, si se lanza una excepción entonces se maneja mediante el bloque catch
            que recibe el texto generado por la excepción y lo imprime.*/
            cout << "\n Ingrese la cantidad de columnas de la segunda matriz: ";
            cin >> columnasDos;

            try{ 
                    validador.validarDimensiones(columnasDos);        
            }
                        
            catch (const char* msg){
            cout << msg << endl;
            break;
            }
            
            /*Se utiliza una instancia de Matriz de acuerdo con el tipo introducido por el usuario
            utilizando bloques if y else if, esto se hace dentro de un bloque try, esto porque se 
            necesita que si setDimensiones dispara una excepción entonces esta se maneje por el 
            bloque catch siguiente, siempre se activa setDimensiones porque está dentro del 
            contructor, en realidad no debería disparar excepciones nunca debido a que el método
            validarDimensiones verifica de antemano que no se introduzcan dimensiones inválidas*/
            try{ 

                if (datoValidado == "int"){
                    matrizDosInt = Matriz<int>(filasDos, columnasDos, datoValidado);    
                }    

                else if  (datoValidado == "float"){
                    matrizDosFloat = Matriz<float>(filasDos, columnasDos, datoValidado);    
                }    

                else if  (datoValidado ==  "std::complex"){
                    matrizDosComplex = Matriz<std::complex<float>>(filasDos, columnasDos, datoValidado);    
                }  
            }   
           
             catch (const std::invalid_argument& e){
                std::cerr << "Error: " << e.what() << '\n';
                break;
            }


            break;
        
        case TIPO_DATOS:

            /*Se le pide la usuario introducir el tipo de valor deseado
            y se guarda en tipoDeDato*/
            cout << "\n Formatos permitidos: enteros, flotantes y complejos\n" << endl;
            cout << "Ingrese el tipo de datos deseado: ";
            
            
            cin >> tipoDeDato;

            /*Se usa un bloque try para usar el método validarTipoDato 
            y guardar su valor en datoValidado y poder detectar si 
            se lanza una excepción*/
            try{ 

                datoValidado = validador.validarTipoDato(tipoDeDato);

            }
            
            /*Se atrapa la excepción con un bloque catch y se usa e.what para obtener 
            la descripción del error especificada en throw */
            catch(const std::invalid_argument& e) {
                std::cerr << "Error: " << e.what() << '\n';
            }

            cout << datoValidado << endl;
            break;

        case OPERACION_DESEADA: 

            cout << "Imprimiendo datos: \n" << endl;
            

            break;
        
        case DATOS_ALEATORIOS:

            cout << "Asignando datos aleatorios \n" << endl;
            

            break;

        case MOSTRAR_MATRICES:

            cout << "Imprimiendo matrices " << endl;
            /* se utilizan condicionales para imprimir las matrices 
            del formato que se está utilizando únicamente, se imprimen
            mediante el método imprimirMatriz de la clase Matriz.*/
            if (datoValidado == "int"){ 

                cout << "Primera matriz " << endl;
                matrizUnoInt.imprimirMatriz();
                cout << endl;
                cout << "Segunda matriz " << endl;
                matrizDosInt.imprimirMatriz();

            } 
            
            else if (datoValidado == "float"){ 
                cout << "Primera matriz " << endl;
                matrizUnoFloat.imprimirMatriz();
                cout << endl;
                cout << "Segunda matriz " << endl;
                matrizDosFloat.imprimirMatriz();
            } 
            
            else if (datoValidado == "std::complex"){ 

                cout << "Primera matriz " << endl;
                matrizUnoComplex.imprimirMatriz();
                
                cout << endl;
                cout << "Segunda matriz " << endl;
                matrizDosComplex.imprimirMatriz();

            } 
            

            break;


        case EJECUTAR_OPERACION:

            cout << "Ejecutando la operación deseada \n" << endl;
            

            break;

            
        case SALIR:

             cout << "Saliendo del programa... \n" << endl;

            break;

        
        
        default:

            break;
        }
    }

    while(opcion != 7);

 

    return(0);

}
