#include <stdio.h>



int main() {
    int arr[] = {1, 2, 3, 4, 2, 5, 6, 3, 7, 8, 9, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i < size; i++) {
        for (int j = i+1; j < size; j++) {
            if (arr[i] == arr[j]) {
                continue;
            }
        }
        printf("%d\n", arr[i]);
    }

    // print all unique elements
    for (int i = 0; i < size; i++) {
        int isUnique = 1;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j] && i != j) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            printf("%d\n", arr[i]);
        }
    }
    
    return 0;
}