#include "funciones.h"

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

