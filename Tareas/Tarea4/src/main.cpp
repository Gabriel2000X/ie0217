#include <iostream>
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


int main(){ 

    

    int opcion;

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
            

            
            cout << "Ingrese los datos solicitados\n" << endl;



            break;
        
        case TIPO_DATOS:
            cout << "Ingrese el tipo de datos deseado\n" << endl;

            break;

        case OPERACION_DESEADA: 

            cout << "Imprimiendo datos: \n" << endl;
            

            break;
        
        case DATOS_ALEATORIOS:

            cout << "Asignando datos aleatorios \n" << endl;
            

            break;

        case MOSTRAR_MATRICES:

            cout << "Imprimiendo matrices \n" << endl;
            

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
