#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char fileName[50];
    char content[1000];

    // Get the file name from the user
    printf("Enter the file name: ");
    scanf("%s", fileName);

    // Open the file for writing
    file = fopen(fileName, "w");

    // Check if the file is successfully opened
    if (file == NULL) {
        printf("Error opening the file!\n");
        return 1; // Exit the program with an error code
    }

    // Get content from the user to write to the file
    printf("Enter content to write to the file:\n");
    scanf(" %[^\n]", content);

    // Write content to the file
    fprintf(file, "%s", content);

    // Close the file
    fclose(file);

    printf("Content written to the file successfully!\n");

    // Open the file for reading
    file = fopen(fileName, "r");

    // Check if the file is successfully opened for reading
    if (file == NULL) {
        printf("Error opening the file for reading!\n");
        return 1; // Exit the program with an error code
    }

    // Read and display content from the file
    printf("\nContent read from the file:\n");
    while (fgets(content, sizeof(content), file) != NULL) {
        printf("%s", content);
    }

    // Close the file
    fclose(file);

    return 0; // Exit the program successfully
}
