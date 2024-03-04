#include<stdio.h>

void createArray(int numbers[], int size);
void showArray(int numbers[], int size);

void main(){

    int size = 5;
    int numbers[size];

    // create the array
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    createArray(numbers, size);

    // display the members of the array
    showArray(numbers, size);
    printf("\n");

}

// create a array function
void createArray(int numbers[], int size){
    int *p = numbers;
    for(int i = 0; i < size; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d", p+i);
    }
}

// display the numbers in the array suing pointer
void showArray(int numbers[], int size){
    int *p = numbers;
    for(int i = 0; i < size; i++){
        printf("The value of numbers[%d] is %d\n", i, *(p+i));
    }
}

// bobble sort using pointer
void bubbleSort(int numbers[], int size){
    int *p = numbers;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size-1; j++){
            if(*(p+j) > *(p+j+1)){
                int temp = *(p+j);
                *(p+j) = *(p+j+1);
                *(p+j+1) = temp;
            }
        }
    }
}

// get the maximum number in the array using pointer
int getMax(int numbers[], int size){
    int *p = numbers;
    int max = *p;
    for(int i = 0; i < size; i++){
        if(*(p+i) > max){
            max = *(p+i);
        }
    }
    return max;
}

// get the minimum number in the array using simple method
int getMin(int numbers[], int size){
    int min = numbers[0];
    for(int i = 0; i < size; i++){
        if(numbers[i] < min){
            min = numbers[i];
        }
    }
    return min;
}

// get the maximum number in the array using simple method
int getMax(int numbers[], int size){
    int max = numbers[0];
    for(int i = 0; i < size; i++){
        if(numbers[i] > max){
            max = numbers[i];
        }
    }
    return max;
}
