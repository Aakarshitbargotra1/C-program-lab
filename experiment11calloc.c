#include <stdio.h>
#include <stdlib.h>
int main() {
    int *arr;
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    arr = (int *)calloc(size, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit with an error code
    }
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Elements of the array are: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
free(arr);
    return 0;
}
