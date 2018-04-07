#define FUNCIONES_H_INCLUDED

/*Descripción del Trabajo Practico N1
***Hacer una calculadora.***
Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular la suma (A+B)
4. Calcular la resta (A-B)
5. Calcular la division (A/B)
6. Calcular la multiplicacion (A*B)
7. Calcular el factorial (A!)
8. Calcular todas las operaciones
9. Salir
    • Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
    que contenga las funciones para realizar las 4 operaciones.
    • En el menú deberán aparecer los valores actuales cargados en los operandos A y B.
    (donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado).
    • Deberán contemplarse los casos de error (división por cero, etc).
    • Documentar todas las funciones.*/


/** \brief Suma dos numeros flotante (numero1 y numero2)
 * \param un flotante numero1
 * \param un flotante numero2
 * \return un flotante como resultado de la suma de los flotantes numero1 y numero2
 *
 */
float sumar(float numero1, float numero2);


/** \brief Resta dos flotantes
 * \param un flotante numero1
 * \param un flotante numero2
 * \return un flotante como resultado de la resta de dos flotantes
 *
 */
float restar(float numero1, float numero2);


/** \brief Dividir dos flotantes
 * \param un flotante numero1
 * \param un flotante numero2 que solamente es valido si no es cero
 * \return un flotante como resultado de la operacion
 *
 */
float dividir(float numero1, float numero2);


/** \brief multiplicar dos flotantes
 * \param un flotante numero1
 * \param un flotante numero2
 * \return un flotante como resultado de la multiplicacion
 *
 */
float multiplicar(float numero1, float numero2);


/** \brief factorizar con funcion recursiva
 * \param un entero numero1
 * \return un long int resultado de factorizar, muestra correctmente hasta el factorial del numero 12 por el long int
 *
 */
long int factorialRecursivo(int numero);

/*
En el caso de necesitar una funcion que calcule el factorial de un numero
pero que no sea una funcion recursiva para optimizar el uso de la memoria,
usamos la funcion que se muestra a continuacion:

for (contador = numeroUno; contador >= 1; contador--)
    {factorial = factorial * contador;}
*/


