#include<stdio.h>
#include<stdlib.h>


void main(){
    int arraySize;

    int* arr = (int *)malloc(arraySize * sizeof(int));

    printf("Enter the size of the array: ");
    scanf("%d", &arraySize);

    for(int i = 0; i < arraySize; i++){
        printf("Enter the value at %d: ", i);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < arraySize; i++){
        printf("The value at %d is %d\n", i, arr[i]);
    }
}

