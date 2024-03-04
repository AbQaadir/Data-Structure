#include<stdio.h>
#include<stdlib.h>

int** create2DArray(int rows, int columns);
int** getUserInput(int** arr, int rows, int columns);
void display2DArray(int** arr, int rows, int columns);

void main(){

    int rows;
    int columns;


    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    int** arr = create2DArray(rows, columns);
    arr = getUserInput(arr, rows, columns);
    display2DArray(arr, rows, columns);
}



int** create2DArray(int rows, int columns){
    int **arr = (int **)malloc(rows * sizeof(int *));
    for(int i = 0; i < rows; i++){
        arr[i] = (int *)malloc(columns * sizeof(int));
    }
    return arr;
}

int** getUserInput(int **arr, int rows, int columns){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            printf("Enter the value at %d, %d: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    return arr;
}

void display2DArray(int **arr, int rows, int columns){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            printf("The value at %d, %d is %d\n", i, j, arr[i][j]);
        }
    }
}