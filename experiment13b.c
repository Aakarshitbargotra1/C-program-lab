#include <stdio.h>

// Define the structure for student information
struct Student {
    char name[50];
    int rollNumber;
    float marks[5]; // Assuming 5 subjects for simplicity
};

// Function to read student data from a file
void readStudentData(FILE *file, struct Student *student) {
    fscanf(file, "%s %d %f %f %f %f %f",
           student->name, &student->rollNumber,
           &student->marks[0], &student->marks[1],
           &student->marks[2], &student->marks[3],
           &student->marks[4]);
}

// Function to write student data to a file
void writeStudentData(FILE *file, struct Student *student) {
    fprintf(file, "%s %d %.2f %.2f %.2f %.2f %.2f\n",
            student->name, student->rollNumber,
            student->marks[0], student->marks[1],
            student->marks[2], student->marks[3],
            student->marks[4]);
}

int main() {
    FILE *file;
    char fileName[50];

    // Get the file name from the user
    printf("Enter the file name: ");
    scanf("%s", fileName);

    // Open the file for writing
    file = fopen(fileName, "w");

    // Check if the file is successfully opened for writing
    if (file == NULL) {
        printf("Error opening the file for writing!\n");
        return 1; // Exit the program with an error code
    }

    // Input information for each student and write it to the file
    struct Student students[3]; // Assuming 3 students for simplicity

    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%s", students[i].name);

        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Enter marks for 5 subjects:\n");
        for (int j = 0; j < 5; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
        }

        // Write student data to the file
        writeStudentData(file, &students[i]);
    }

    // Close the file
    fclose(file);
    printf("Student data written to the file successfully!\n");

    // Open the file for reading
    file = fopen(fileName, "r");

    // Check if the file is successfully opened for reading
    if (file == NULL) {
        printf("Error opening the file for reading!\n");
        return 1; // Exit the program with an error code
    }

    // Read and display student data from the file
    struct Student readStudents[3]; // Array to store read student data

    printf("\nStudent data read from the file:\n");
    for (int i = 0; i < 3; i++) {
        readStudentData(file, &readStudents[i]);
        printf("Details for student %d:\n", i + 1);
        printf("Name: %s\n", readStudents[i].name);
        printf("Roll Number: %d\n", readStudents[i].rollNumber);
        printf("Marks for 5 subjects:\n");
        for (int j = 0; j < 5; j++) {
            printf("Subject %d: %.2f\n", j + 1, readStudents[i].marks[j]);
        }
        printf("\n");
    }

    // Close the file
    fclose(file);

    return 0; // Exit the program successfully
}
