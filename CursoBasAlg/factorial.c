#include <stdio.h>

int factorial(int n)
{
    if(n == 0)
        return 1;
    return n*factorial(n-1);
}

int factorialWhile(int n)
{
    int resultado = 1;
    int numero = n;


    while(numero != 0)
    {
        resultado=resultado*numero;
        numero=numero-1;
    }
    return resultado;

}

int factorialFor(int n)
{
    int factorial=1;
    for(int i=0;i<=n;i++)
    {
        if(i!=0)
            factorial *= i;
    }
    return factorial;
}

int main()
{
    int max;
    printf("Escribe un número: ");
    scanf("%d", &max);
    
    for(int numero=0;numero<max+1;numero++)
    {

    int resultado;

    resultado = factorial(numero);
    printf("El factorial recursivo de %ld! es %i \n",numero, resultado);

    // Con while

    int resultado2;

    resultado2= factorialWhile(numero);
    printf("El factorial while de %d! es %i \n",numero, resultado2);

    int resultado3;

    resultado3= factorialFor(numero);
    printf("El factorial For de %d! es %i \n",numero, resultado3);
    }
    return 0;
}