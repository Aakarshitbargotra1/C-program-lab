#include <stdio.h>

// Define the structure for student information
struct Student {
    char name[50];
    int rollNumber;
    float marks[5]; // Assuming 5 subjects for simplicity
};

// Function to calculate total marks for a student
float calculateTotalMarks(struct Student *student) {
    float total = 0;
    for (int i = 0; i < 5; i++) { // Assuming 5 subjects for simplicity
        total += student->marks[i];
    }
    return total;
}

// Function to display information for a student
void displayStudentInfo(struct Student *student) {
    printf("Name: %s\n", student->name);
    printf("Roll Number: %d\n", student->rollNumber);
    
    printf("Marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: %.2f\n", i + 1, student->marks[i]);
    }

    printf("Total Marks: %.2f\n", calculateTotalMarks(student));
    printf("\n");
}

int main() {
    // Declare an array of structures to store information for multiple students
    struct Student students[3]; // Assuming 3 students for simplicity

    // Input information for each student
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
    }

    // Pass the array of structures to a function for various operations
    for (int i = 0; i < 3; i++) {
        printf("\nDetails for student %d:\n", i + 1);
        displayStudentInfo(&students[i]);
    }

    return 0;
}
