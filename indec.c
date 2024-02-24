#include<stdio.h>

void insertNumbers(int numbers[], int size);
void displayNumbers(int numbers[], int size);
void deleteNumber(int numbers[], int size, int index);
int searchNumber(int numbers[], int size, int number);
int* sortArray(int numbers[], int size);

int main(){
    // int numbers[50];
    int size = 5;
    int numbers[size]; 

    // create the array
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    insertNumbers(numbers, size);


    // display the members of the array
    displayNumbers(numbers, size);
    printf("\n");

    // // delete a number from the array
    // int position;
    // printf("\nEnter the position to delete: ");
    // scanf("%d", &position);
    // deleteNumber(numbers, size, position-1);

    // // display the members of the array
    // displayNumbers(numbers, size);

    // int number;

    // printf("search for a number: ");
    // scanf("%d", &number);

    // int index = searchNumber(numbers, size, number);
    // if(index != -1){
    //     printf("The number is found at position %d\n", index+1);
    // }else{
    //     printf("The number is not found\n");
    // }

    // sort the array
    int* sortedArray = sortArray(numbers, size);
    displayNumbers(sortedArray, size);
    printf("\n");



}

// insert the numbers into the array
void insertNumbers(int numbers[], int size){
    for(int i = 0; i < size; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }
}

void displayNumbers(int numbers[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", numbers[i]);
    }
}

void deleteNumber(int numbers[], int size, int index){
    for(int i = index; i < size; i++){
        numbers[i] = numbers[i+1];
    }
    size--;
}

int searchNumber(int numbers[], int size, int number){
    for(int i = 0; i < size; i++){
        if(numbers[i] == number){
            return i;
        }
    }
    return -1;
}

// Bubble sort algorithm

int* sortArray(int numbers[], int size){
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){ 
            if(numbers[i] > numbers[j]){ 
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    return numbers;
}
