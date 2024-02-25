#include<stdio.h>

void main(){
    int arr[][2] = {1, 2, 3, 4, 5, 6};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("The value of arr[%d][%d] is %d\n", i, j, arr[i][j]);
            printf("The address of arr[%d][%d] is %p\n", i, j, &arr[i][j]);
        }
    }
}