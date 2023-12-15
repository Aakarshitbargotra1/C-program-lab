#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int size;

    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Allocate memory for the array using malloc
    arr = (int *)malloc(size * sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit the program with an error code
    }

    // Input values into the array
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    // Display the entered values
    printf("Entered values: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Deallocate the allocated memory using free
    free(arr);

    // The memory has been freed, but it's a good practice to set the pointer to NULL
    arr = NULL;

    return 0;
}
