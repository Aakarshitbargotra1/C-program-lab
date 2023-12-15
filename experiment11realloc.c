#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int initialSize = 5;

    // Allocate initial memory for an array
    arr = (int *)malloc(initialSize * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d integers:\n", initialSize);
    for (int i = 0; i < initialSize; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the initially entered integers
    printf("Initially entered integers:\n");
    for (int i = 0; i < initialSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Ask the user for a new size
    int newSize;
    printf("Enter the new size of the array: ");
    scanf("%d", &newSize);

    // Reallocate memory to accommodate the new size
    arr = (int *)realloc(arr, newSize * sizeof(int));

    if (arr == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }

    // If the new size is greater than the initial size, prompt the user to enter more integers
    if (newSize > initialSize) {
        printf("Enter %d more integers:\n", newSize - initialSize);
        for (int i = initialSize; i < newSize; i++) {
            scanf("%d", &arr[i]);
        }
    }

    // Display the final array
    printf("Final array:\n");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}
