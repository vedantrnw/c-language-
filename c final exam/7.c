#include <stdio.h>

int main() {
    // Open the first file for writing
    FILE *file1 = fopen("file1.txt", "w");
    if (file1 == NULL) {
        printf("Error opening file1.txt for writing.");
        return 1;
    }

    // Write a sentence into the first file
    fprintf(file1, "This is the sentence to be written into the file.");

    // Close the first file
    fclose(file1);

    // Open the first file for reading
    file1 = fopen("file1.txt", "r");
    if (file1 == NULL) {
        printf("Error opening file1.txt for reading.");
        return 1;
    }

    // Open the second file for writing
    FILE *file2 = fopen("file2.txt", "w");
    if (file2 == NULL) {
        printf("Error opening file2.txt for writing.");
        return 1;
    }

    // Read the sentence from the first file
    char sentence[100];
    fgets(sentence, sizeof(sentence), file1);

    // Write the sentence into the second file
    fprintf(file2, "%s", sentence);

    // Close both files
    fclose(file1);
    fclose(file2);

    printf("File operations completed successfully.");

    return 0;
}
