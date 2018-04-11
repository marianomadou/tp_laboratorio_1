#include "funciones.h"
#include <stdio.h>

float sumar(float numero1, float numero2)
{
    float resultado;
    resultado = numero1 + numero2;
    return resultado;
}

float restar(float numero1, float numero2)
{
    float resultado;
    resultado = numero1 - numero2;
    return resultado;
}

float dividir(float numero1, float numero2)
{
    float resultado;
    resultado = numero1/numero2;
    return resultado;
}

float multiplicar(float numero1, float numero2)
{
    float resultado;
    resultado = numero1*numero2;
    return resultado;
}


long int factorialRecursivo(int numero)
    {
    int factorial;
    if(numero==0)
        {
            factorial = 1;
        }
        else
            {
                factorial = numero*factorialRecursivo(numero - 1);
            }
    return factorial;
    }

float leerNumero()/*Lee el numero flotante*/
{
    float numero;
    scanf("%f", &numero);
    return numero;
}

int elegirOpciones(int min, int max) /*Esta funcion permite validar un numero del 1 al 9*/
{
    int opcion;
    printf("Elegir opcion del 1 al 9.\nOpcion: ");
    scanf("%d",&opcion);

    while (opcion<min || opcion>max)
    {
        printf("*** ATENCION! Elegir opcion valida (del %d al %d) ***\n", min, max);
        fflush(stdin);
        scanf("%d",&opcion); /*Pide reingresar una opcion del 1 al 9*/
    }
    return opcion;
}
