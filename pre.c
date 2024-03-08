#include <stdio.h>

int main() {
    int a = 5;
    int b, c;

    // Pre-increment example
    b = ++a;  // Increment a first, then assign it to b
    printf("Pre-increment:\n");
    printf("a = %d\n", a); // Output: 6
    printf("b = %d\n", b); // Output: 6

    // Reset a
    a = 5;

    // Post-increment example
    c = a++; // Assign a to c first, then increment a
    printf("\nPost-increment:\n");
    printf("a = %d\n", a); // Output: 6
    printf("c = %d\n", c); // Output: 5
    printf("c = %d\n", c); // Output: 5




    int z = 4;
    printf("z = %d\n", ++z); // Output: 5
    printf("z = %d\n", z++); // Output: 4
    printf("z = %d\n", z);   // Output: 5
    


    return 0;
}
