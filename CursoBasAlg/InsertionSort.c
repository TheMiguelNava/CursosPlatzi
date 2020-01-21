#include <stdio.h>
#include <math.h>

void insertionSort(int arr[], int n)
{
    int i, currentVal, j;
    for(i = 1; i < n; i++)
    {
        currentVal = arr[i];
        j = i - 1;

        while(j >=0 && arr[j] > currentVal)
        {
            arr[j+1] = arr[j];
            j = j -1;
        }
        arr[j+1]= currentVal;
    }
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    printf("%d ",arr[i]);
    printf("\n");
}

int main()
{
    int arr[]={-10,6,4,3,11,10,-8};
    int n= sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr,n);
    printArray(arr,n);

    return 0;
}