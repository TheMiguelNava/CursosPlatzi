/*
Algoritmo Bubble sort:
Algoritmo que compara dos datos adyacentes
y los ordena, para continuar con las siguientes
dos celdas:

1 Se hace la comparación de elementos adyacentes
2 Se repite hasta que haya una iteración sin
intercambios
*/

#include <stdio.h>
#include <stdlib.h>

void cambiarPos(int *n1, int *n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void bubbleSort(int vectorEntrada[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        // Quien fue el genio que se le ocurrió la condición j < n-i-1???
        // No es sarcasmo. Es muy inteligente esa condición.
        for(int j=0; j < n-i-1; j++)
        {
            if(vectorEntrada[j] > vectorEntrada[j+1])
                cambiarPos(&vectorEntrada[j],&vectorEntrada[j+1]);    
        }

    }
}

void printVec(int vectorEntrada[], int n){
    for(int i = 0; i < n-1; i++)
        printf("%d ,",vectorEntrada[i]);        
    printf("\n Fin del ordenamiento \n");    
}

int main(int argc, char const *argv[])
{
    int vectorEntrada[]={100, 1992, 0,5, -1, 60, 70 ,14 ,15, 10};
    int n = sizeof(vectorEntrada)/sizeof(vectorEntrada[0]);
    bubbleSort(vectorEntrada,n);
    printVec(vectorEntrada,n);

    return 0;
}



