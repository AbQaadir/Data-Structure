#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

typedef int (*MathFunction)(int, int);

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {

    printf("\n");
    Point p1 = {3, 4};
    printf("Point coordinates: (%d, %d)\n", p1.x, p1.y);

    MathFunction operation;

    // Assign the add function to the operation pointer
    operation = add;
    printf("Addition result: %d\n", operation(5, 3));

    // Assign the subtract function to the operation pointer
    operation = subtract;
    printf("Subtraction result: %d\n", operation(5, 3));

    return 0;
}
