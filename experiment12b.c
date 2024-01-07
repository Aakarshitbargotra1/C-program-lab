#include <stdio.h>

// Define the union for student information
union StudentInfo {
    char studentName[50];
    int rollNumber;
    float marks;
};

// Define the structure to combine the union with a tag to identify the type of data
struct Student {
    int dataType; // 1 for name, 2 for roll number, 3 for marks
    union StudentInfo info;
};

int main() {
    // Declare a structure variable to store information for a student
    struct Student student;

    // Input information for the student
    printf("Enter student name: ");
    scanf("%s", student.info.studentName);
    student.dataType = 1;

    // Display the information
    printf("\nStudent Information:\n");
    printf("Type: %d\n", student.dataType);
    printf("Name: %s\n", student.info.studentName);

    // Input roll number for the student
    printf("\nEnter student roll number: ");
    scanf("%d", &student.info.rollNumber);
    student.dataType = 2;

    // Display the updated information
    printf("\nStudent Information:\n");
    printf("Type: %d\n", student.dataType);
    printf("Roll Number: %d\n", student.info.rollNumber);

    // Input marks for the student
    printf("\nEnter marks for the student: ");
    scanf("%f", &student.info.marks);
    student.dataType = 3;

    // Display the final information
    printf("\nStudent Information:\n");
    printf("Type: %d\n", student.dataType);
    printf("Marks: %.2f\n", student.info.marks);

    return 0;
}
