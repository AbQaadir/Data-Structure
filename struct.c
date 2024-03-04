#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student {
    int id;
    char name[50];
    float gpa;
};

int main() {

    int number_of_students = 3; // Changed to 3 since you only initialize 3 students.

    struct Student* S = (struct Student*)malloc(number_of_students * sizeof(struct Student));

    S[0].id = 1;
    strcpy(S[0].name, "John"); // Corrected the assignment of name using strcpy.
    S[0].gpa = 3.5;

    S[1].id = 2;
    strcpy(S[1].name, "Jane"); // Corrected the assignment of name using strcpy.
    S[1].gpa = 3.84;

    S[2].id = 3;
    strcpy(S[2].name, "Jim"); // Corrected the assignment of name using strcpy.
    S[2].gpa = 3.2;

    for (int i = 0; i < number_of_students; i++) {
        printf("Student ID: %d\n", S[i].id);
        printf("Student Name: %s\n", S[i].name);
        printf("Student GPA: %f\n", S[i].gpa);
        printf("\n");
    }

    free(S); // Free the dynamically allocated memory.

    return 0; // Added a return statement for main function.
}
