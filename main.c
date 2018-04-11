#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define MIN_OPCION_FACTORIAL 0
#define MAX_OPCION_FACTORIAL 13
#define MIN_OPCION_MENU 1
#define MAX_OPCION_MENU 9

/*
Trabajo práctico Nº 1 - Mariano Madou - Programacion y Laboratorio I - UTN-MINHACIENDA - Turno tarde
*/

int main()
{
    char seguir='s';
    int opcion=0;
    float numeroUno=0;
    float numeroDos=0;
    float resultado;
    int flagUno = 0;
    int flagDos = 0;
    int resultadofactorizar;

    while(seguir=='s')
    {
        printf("\nCALCULADORA\n");
        if (flagUno == 1)
        {
            printf("1- Ingresar 1er operando (A=%.2f)\n", numeroUno);
        }
            else
            {
                printf("1- Ingresar 1er operando (A=X)\n");
            }

        if (flagDos == 1)
        {
            printf("2- Ingresar 2do operando (B=%.2f)\n", numeroDos);
        }
            else
            {
                printf("2- Ingresar 2do operando (B=Y)\n");
            }

        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n\n");

        opcion = elegirOpciones(MIN_OPCION_MENU, MAX_OPCION_MENU);

        switch(opcion)
        {
        case 1:

            printf("\nIngresar 1er operando: ");
            numeroUno = leerNumero(); /*Se ejecuta la funcion leerNumero con el numeroUno*/
            flagUno = 1;
            break;

        case 2:

            printf("\nIngresar 2do operando: ");
            numeroDos = leerNumero(); /*Se ejecuta la funcion leerNumero con el numeroDos*/
            flagDos = 1;
            break;

        case 3:

            resultado = sumar(numeroUno, numeroDos); /*Se ejecuta la funcion sumar*/
            printf("%.f + %.f= %.2f\n", numeroUno, numeroDos, resultado);
            break;

        case 4:

            resultado = restar(numeroUno, numeroDos); /*Se ejecuta la funcion restar*/
            printf("%.f - %.f= %.2f\n", numeroUno, numeroDos, resultado);
            break;

        case 5:

            while (numeroDos == 0 || flagDos == 0)
            {
                printf("*** ATENCION! Debe ingresar un numero como 2do operando\n y que sea distinto de cero ***\n");
                scanf("%f", &numeroDos);
                flagDos = 1;/*si el numero es correcto, pongo el flagDos en 1*/
            }

            resultado = dividir(numeroUno, numeroDos); /*Se ejecuta la funcion dividir*/
            printf("%.f / %.f= %.2f\n", numeroUno, numeroDos, resultado);
            break;

        case 6:

            resultado = multiplicar(numeroUno, numeroDos); /*Se ejecuta la funcion multiplicar*/
            printf("%.f * %.f= %.2f\n", numeroUno, numeroDos, resultado);
            break;

        case 7:

            if (numeroUno <= MIN_OPCION_FACTORIAL || numeroUno >= MAX_OPCION_FACTORIAL)
            {
                printf("\n*** ATENCION! El programa calcula el factorial del numero %d al %d.\n Ingrese un numero entre %d y %d en el primer operando calcular su factorial ***\n", MIN_OPCION_FACTORIAL, MAX_OPCION_FACTORIAL, MIN_OPCION_FACTORIAL, MAX_OPCION_FACTORIAL);
            }

                else
                {
                    resultadofactorizar = factorialRecursivo((int)numeroUno); /*Se ejecuta la funcion factorialRecursivo*/
                    printf("(%d!)= %d\n", (int)numeroUno, resultadofactorizar);
                }
            break;

        case 8:
            printf("Calcular todas las operaciones\n");

            resultado = sumar(numeroUno, numeroDos);
            printf("\nRESULTADOS:\nSuma (A+B): %.2f", resultado); /*Muestra el resultado de la suma*/

            resultado = restar(numeroUno, numeroDos);
            printf("\nResta (A-B): %.2f", resultado); /*Muestra el resultado de la resta*/

            if (numeroDos == 0)
            {
                printf("\n ***ATENCION! No es posible realizar esta operacion. \nIngrese un numero distinto de cero. ***");
            }

                else
                {
                    resultado = dividir(numeroUno, numeroDos);
                    printf("\nDivision (A/B): %.2f", resultado); /*Muestra el resultado de la division*/
                }

            resultado = multiplicar(numeroUno, numeroDos);
            printf("\nMultiplicacion (A*B): %.2f", resultado); /*Muestra el resultado de la multiplicacion*/

            if (numeroUno <= MIN_OPCION_FACTORIAL || numeroUno >= MAX_OPCION_FACTORIAL)
            {
                printf("\n*** ATENCION! El programa calcula el factorial del numero %d al %d.\n Ingrese un numero entre %d y %d en el primer operando calcular su factorial ***\n", MIN_OPCION_FACTORIAL, MAX_OPCION_FACTORIAL, MIN_OPCION_FACTORIAL, MAX_OPCION_FACTORIAL);
            }


                else
                {
                    resultadofactorizar = factorialRecursivo((int)numeroUno);
                    printf("\nFactorizacion (A!): %d", resultadofactorizar); /*Muestra el resultado de la factorizacion*/
                }
            break;

        case 9:
            printf("Salir\n");
            seguir = 'n'; /*Fin del programa*/
            break;
        }

    printf("\n");
    system("pause");
    system("cls");

    }

    return 0;

} /*fin del main*/


