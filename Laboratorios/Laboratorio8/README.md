
# BREAKOUTROOM 2

## Integrantes:
- Oscar Porras Silesky
- Antony Brenes
- Gabriel Gonzales Rivera
- Kevin Jimenez

## Databases

### hospital.db

#### Fáciles

- **Gabriel**


 **Pregunta:** Write a query to find the first_name, last name and birth date of patients who has height greater than 160 and weight greater than 70

**Respuesta:**

```sql
/*Write a query to find the first_name, last name and birth date of
patients who has height greater than 160 and weight greater than 70*/

/*Se especifican las columnas que se quieren mostrar en la nueva tabla */
SELECT first_name, last_name, birth_date

/*Se especifica de que tabla se sacan los datos a utilizar*/
FROM patients

/*Se especifican las condiciones con un WHERE y
 se utiliza un and para marcar la segunda condición.*/
 WHERE height 160 AND weight > 70;
```


- **Antony**

```sql
SELECT company_name, contact_name, fax

FROM customers

WHERE fax IS NOT NULL;
/* Selecciona la lista de costumers las
columnas company_name, contact_name y fax que no estén vacíos
```


#### Medias

- **Gabriel**

**Pregunta:** Show unique birth years from patients and order them by ascending.

**Respuesta:**

```sql
/*Como se piden años de nacimiento únicos entonces
se debe utilizar SELECT DISTINCT, esto para no repetir
años de nacimiento*/
SELECT 
	
    /*Se utiliza YEAR para solo extraer 
    el año de la fecha de nacimiento de los 
    pacientes, que corresponde a la columna birth_date,
    además el dato extraído se renombra como birth_year*/
	DISTINCT YEAR(birth_date) AS birth_year

/* Se especifica que se utiliza la tabla patients*/
FROM patients

/*Se ordenan los valores extraídos en forma ascendente*/
ORDER BY birth_year;
```




- **Antony**
```sql
-- Comandos SQL para obtner de resultado una lista de nombres que NO se repiten
SELECT first_name
FROM patients
-- Obtiene el nombre
-- De la lista de pacientes
-- En el grupo de nombres
GROUP BY first_name
HAVING COUNT (first_name)= 1;
-- Escoge los nombres que se repiten solo una vez
```


- **Kevin**
**Pregunta:** Show patient_id and first_name from patients

**Respuesta:**

```sql
where their first_name start and ends with 's' and is at least 6 characters long.
SELECT patient_id, first_name
FROM patients
WHERE first_name LIKE 'S%' AND first_name LIKE '%s' AND LEN(first_name) >= 6;

/*En este caso, se utiliza like para hacer match cuando el nombre empieza con s y tambien cuando termina con s.
Por ultimo, se usa LEN() para obtener los nombres cuya cantidad de caracteres es al menos 6. */
```

- **Oscar**
  
    **Pregunta:** Show patient_id, first_name, last_name from patients whos diagnosis is 'Dementia'. Primary diagnosis is stored in the admissions table.

    **Respuesta:**

        ```sql
        SELECT patients.patient_id, first_name, last_name
        FROM patients
        JOIN admissions ON admissions.patient_id = patients.patient_id
        WHERE diagnosis = 'Dementia';
        ```
    **Comentario del codigo:**

#### Difíciles
- **Gabriel**

**Pregunta:** Show all of the patients grouped into weight groups.
Show the total amount of patients in each weight group.
Order the list by the weight group decending.

For example, if they weight 100 to 109 they are placed in the 100 weight group, 110-119 = 110 weight group, etc.

**Respuesta:**

```sql
SELECT

  /*Se cuenta el número de pacientes en cada grupo
  utilizando count(*) y se guarda en una columna llamada
  quantity_of_patients_in_group*/
  COUNT(*) AS quantity_of_patients_in_group,
  
  /*Se divide el peso del paciente entre 10 y con floor
  se redondea al entero más cercano hacia abajo, por ejemplo un 82 
  redondea a 8, lo que multiplicado por 10 es 80, lo que iría en el 
  rango de 80 a 89.*/ 
  FLOOR(weight / 10) * 10 AS group_of_weight

/*Se especifica que los datos deben tomarse de patients*/
FROM patients
/*Se agrupan los resultados por grupo de peso en la columna 
group_of_weight*/
GROUP BY group_of_weight

/* Se ordenan los resultados de manera descendente, entonces
los grupos de peso más alto aparecen primero*/
ORDER BY group_of_weight DESC;
```

- **Antony**

```sql
-- Selecciona las columnas deseadas
SELECT
patient_id,
weight,
height,
-- Calcula BMI
CASE
WHEN weight ((height / 100.0) * (height / 100.0)) >= 30 THEN 1
-- Si el BMI es menor a 30 el paciente NO es obeso
ELSE 0
END AS isObese
--Selecciona la lista de paciente
FROM patients;
```


### northwind.db

#### Fáciles
- **Antony**

```sql

SELECT company_name, contact_name, fax
FROM customers
WHERE fax IS NOT NULL;
/* Selecciona la lista de costumers las
columnas company_name, contact_name y fax que no estén vacíos
```

- **Kevin**


**Pregunta:** Show the first_name, last_name. hire date of the
most recently hired employee.


**Respuesta:**

```sql
SELECT first_name, last_name, hire_date
FROM employees
WHERE hire_date = (SELECT MAX(hire_date) FROM employees);
/*
En este caso, se utiliza el comando WHERE combinado con SELECT MAX() para obtener el nombre, el apellido y
la fecha de vinculacion de la persona que se vinculo mas recientemente a la empresa.
*/

```

**Pregunta:** Show the average unit price rounded to 2 decimal places, the total units in stock, total discontinued products from the products table.


- **Oscar**

    **Pregunta:** Show the average unit price rounded to 2 decimal places, the total units in stock, total discontinued products from the products table.

    **Respuesta:**

        ```sql
        SELECT round(avg(Unit_Price), 2) AS average_price,
        SUM(units_in_stock) AS total_stock,
        SUM(discontinued) as total_discontinued
        FROM products;
        ```
    **Comentario del codigo:**

#### Medias
- **Gabriel**

**Pregunta:** Show the ProductName, CompanyName, CategoryName from the products, 
suppliers, and categories table

```sql
/* Mediante SELECT se consultan product_name de la tabla products, company_name de la tabla suppliers
y category_name de la tabla categories*/
SELECT products.product_name, suppliers.company_name, categories.category_name

/*Se especifica que la tabla principal o por donde se empieza a 
obtener los datos es products*/
FROM products 

/* Se une la tabla suppliers con products y solo sale el  valor de
company_name si el supplier_id coincide en suppliers y products*/
JOIN suppliers ON suppliers.supplier_id = products.Supplier_id

/*Se hace algo parecido con el category_name de la nueva tabla, solo
se obtiene el valor y se muestra en la nueva tabla si el category_id
coincide en categories y en products.*/
JOIN categories On categories.category_id = products.Category_id;
```



- **Kevin**

**Pregunta:** Show the category_name and the average product unit price for each category rounded to 2 decimal places.
 
 
**Respuesta:**

```sql
SELECT c.category_name, ROUND (AVG(p.unit_price), 2) AS average_unit_price FROM products p
JOIN categories c ON c.category_id = p.Category_id
GROUP BY c.category_name
/*Para realizar este ejercicio, primero es necesario obtener el category_name y despues se crea una columna
nueva que corresponde al redondeo del precio unitario a dos decimales, con el nombre de average_unit_price. Despues, se realiza un join utilizando los category_id de cada tabla y se agrupan todos por los category_name. */
```
- **Oscar**

    **Pregunta:** Show the city, company_name, contact_name from the customers and suppliers table merged together. Create a column which contains 'customers' or 'suppliers' depending on the table it came from.


    **Respuesta:**

        ```sql
        SELECT City, company_name, contact_name, 'customers' AS relationship
        FROM customers
        UNION
        SELECT city, company_name, contact_name, 'suppliers' AS relationship
        FROM suppliers;
        ```
    **Comentario del codigo:**



#### Difíciles
- **Kevin**

**Pregunta:** Show the employee's first_name and last_name, a "num_orders" column with a count of the orders taken, and a column called "Shipped" that displays"On Time" if the order shipped_date is less or equal to the required_date, "Late" if the order shipped late.
Order by employee last_name, then by first_name, and then descending by number of orders.

 **Respuesta:**

```sql
SELECT
e.first_name,
e.last_name,
COUNT (o.order_id) AS num_orders,
(CASE WHEN o.shipped_date <= o.required_date THEN 'On Time' ELSE 'Late' END) AS shipped 
FROM orders o
    JOIN employees e ON e.employee_id = o.employee_id

GROUP BY
e.first_name,
e.last_name,
shipped
ORDER BY
e.last_name, 
e.first_name,
num_orders DESC


/*Para este ejercicio, se obtuvieron las columnas de first_name y last_name de la tabla employees de forma comun. Para la tercera columna se utilizo un contador de ordenes utilizando el primary key de orders y para la cuarta se utilizo un case en donde se analizaba si la orden estuvo a tiempo o no. Despues, se utilizo el JOIN para unir las tablas, se utilizo GROUP BY para agrupar nombre y apellido con la columna "shipped" y por ultimo, se ordena priorizando el orden por apellido, despues por nombre y por ultimo por el numero de ordenes de forma descendente.*/
```

- **Oscar**

    **Pregunta:** Show how much money the company lost due to giving discounts each year, order the years from most recent to least recent. Round to 2 decimal places

    **Respuesta:**

        ```sql         
        SELECT 
        YEAR(o.order_date) AS 'order_year' , 
        ROUND(SUM(p.unit_price * od.quantity * od.discount),2) AS 'discount_amount' 

        FROM orders o 
        JOIN order_details od ON o.order_id = od.order_id
        JOIN products p ON od.product_id = p.product_id

        GROUP BY YEAR(o.order_date)
        ORDER BY order_year desc;
        ```
    **Comentario del codigo:**