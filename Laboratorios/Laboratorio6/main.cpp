#include <iostream> 
#include <vector>
#include <cmath>  
#include <stdexcept>

/*Se crea el template con el tipo T*/
template <typename T>

/*Se define una clase llamada Statistics*/
class Statistics { 

/*Se definen los métodos públicos*/
public:

/*Se define el constructor de statistics que arroja una excepción si el 
vector que se le pasa es un vector vacío y además guarda el vector que recibe
en un elemento llamado data.*/
Statistics(const std::vector<T>& data): data(data){ 

    if(data.empty()){ 

        throw std::invalid_argument("La lista de datos debe contener elementos");

    }

}

/*Se crea un método de tipo double que calcula el promedio de los 
datos contenidos en el vector*/
double mean() const{ 

    /*Se empieza con una suma de elementos tipo T en cero*/
    T sum = 0;

    /*mediante un ciclo for se suman los valores contenidos en data y se
    va agregando la suma al valor de sum*/
    for (const T& value: data){ 
        sum+=value;
    }

    /*Se retorna el primedio que es la suma de los valores entre la cantidad
    de valores convirtiendo la suma a double con static_cast y obteniendo el 
    número de valores con data.size*/
    return static_cast<double>(sum) / data.size();


}

/*Se define un método tipo dobule que calcula la desviación estándar
de los datos contenidos en el vector */
double standardDeviation(){ 

    /*Se calcula el promedio utilizando mean y se define
    sumSquares con un valor de cero*/
    double meanValue = mean(); 
    double sumSquares = 0;

    /*Se utiliza un for para realizar el cuadrado del valor menos el promedio
    para cada valor contenido en el vector y asignarlo a sumSquares de manera
    acumulativa*/
    for(const T& value: data){ 

        sumSquares += (value - meanValue) * (value-meanValue);

    }

    /*Se retorna la raíz cuadrada de la SumSquares entre la cantidad de datos, este
    valor corresponde al valor de la desviación estándar*/
    return std::sqrt(sumSquares / data.size());

}

private:

/*Se define el vector como miembro privado de la clase*/
std::vector<T> data;

};

int main() { 

    /*Se utiliza un bloque try para manejar las excepciones que pueden surgir del uso de la clase*/
    try{ 

        /*Se define un vector tipo int llamado intData*/
        std::vector<int> intData = {1,2,3,4,5};

        /*Se le pasa el vector al constructor */
        Statistics<int> statsInt(intData);
        
        /*Se utilizan los métodos definidos en la clase para el vector de enteros */
        std::cout<< "Media de intData: " << statsInt.mean() << std::endl;
        std::cout<< "Desviación estándar de intData: " << statsInt.standardDeviation() << std::endl;

        /*********/
        
        /*Se sigue el procedimiento anterior para un vector de flotantes*/
        std::vector<double> doubleData = {1.5,2.5,3.5,4.5,5.5};
        Statistics<double> statsDouble(doubleData);

        std::cout<< "Media de doubleData: " << statsDouble.mean() << std::endl;
        std::cout<< "Desviación estándar de doubleData: " << statsDouble.standardDeviation() << std::endl;

        /********/

        /*Se crea un vector entero vacío*/
        std::vector<int> emptyData;
        
        /*Se le pasa al constructor de la clase un vector vacío */
        Statistics<int> statsEmpty(emptyData);



    }

    /*Se utiliza un bloque catch para atrapar o manjear la excepción invalid_argument
    generada por pasar un vector vacío a la clase en su constructor */
    catch(const std::invalid_argument& e) { 
        
        /*Se imprime el mensaje de error declarado en la clase Statistics, siendo recibido con e.what*/
        std::cerr << "Excepción encontrada" << e.what() << std::endl;

    }

    
    
    return 0;

}