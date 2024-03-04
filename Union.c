#include <stdio.h>
#include <string.h>

// Define a union
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    // Array of Union
    union Data data[10];
    
    // Assigning values to the first union variable
    data[0].i = 10;
    printf("data[0].i: %d\n", data[0].i);

    data[0].f = 220.5;
    printf("data[0].f: %f\n", data[0].f);

    strcpy(data[0].str, "C Programming");
    printf("data[0].str: %s\n", data[0].str);

    return 0;
    

}