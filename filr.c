#include <stdio.h>

int main() {
    char sentence[100]; // Assuming a maximum length of 100 characters

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin); // Read input including spaces

    printf("You entered: %s", sentence);

    return 0;
}
