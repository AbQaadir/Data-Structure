#include <stdio.h>

void write_file(char *filename, char *content);

int main() {
    char sentence[100]; 
    char filename[100];

    printf("Enter the file name: ");
    fgets(filename, sizeof(filename), stdin);

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    printf("You entered: %s", sentence);

    write_file("file.txt", sentence);

    return 0;
}

// write a file

void write_file(char *filename, char *content) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    fprintf(file, "%s", content);
    fclose(file);
}
