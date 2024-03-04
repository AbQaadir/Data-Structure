#include <stdio.h>
#include <string.h>

void openFile(char *fileName);

int main() {
    char fileName[100];
    printf("Enter the file name: ");
    scanf("%s", fileName);
    openFile(fileName);
    return 0;
}


// open a file in read mode
void openFile(char *fileName){
    FILE *file = fopen(fileName, "r");
    if(file == NULL){
        printf("Error: File not found\n");
        return;
    }
    char ch;
    while((ch = fgetc(file)) != EOF){
        printf("%c", ch);
    }

    fclose(file);
}