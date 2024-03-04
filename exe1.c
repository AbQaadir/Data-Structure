#include<stdio.h>
#include<stdlib.h>

void getUserInput(int* arr, int size);

void main(){
    int sizeOfArray;
    int *arr;

    printf("Enter the size of the array: ");
    scanf("%d", &sizeOfArray);

    arr = (int *)malloc(sizeOfArray * sizeof(int)); 

    getUserInput(arr, sizeOfArray);

    for(int i = sizeOfArray-1 ; i >= 0; i--){
        printf("The value at %d is %d\n", i, arr[i]);
    }

    int total = 0;
    for (int i = 0; i < sizeOfArray; i++){
        total += arr[i];
    } 

    printf("The total of the array is %d\n", total);

}

// get user input for the array
void getUserInput(int* arr, int size){
    for(int i = 0; i < size; i++){
        printf("Enter the value at %d: ", i);
        scanf("%d", &arr[i]);
    }
}