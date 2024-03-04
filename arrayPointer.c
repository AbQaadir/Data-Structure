#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *p;

    p = arr;

    


    int length = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < length; i++) {
        printf("The value of arr[%d] is %d\n", i, arr[i]);
        printf("The value of arr[%d] is %d\n", i, *(p+i));
        printf("The address of arr[%d] is %p\n", i, &arr[i]);
        printf("The address of arr[%d] is %p\n", i, p+i);
        printf("\n");
    }
}
