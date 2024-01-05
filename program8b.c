#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50], result[100];

    // String input
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';  // Remove the newline character

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';  // Remove the newline character

    // String length
    printf("\nString Length:\n");
    printf("Length of str1: %lu\n", strlen(str1));
    printf("Length of str2: %lu\n", strlen(str2));

    // String concatenation
    printf("\nString Concatenation:\n");
    strcpy(result, str1);
    strcat(result, " ");
    strcat(result, str2);
    printf("Concatenated String: %s\n", result);

    // String comparison
    printf("\nString Comparison:\n");
    if (strcmp(str1, str2) == 0) {
        printf("str1 is equal to str2\n");
    } else {
        printf("str1 is not equal to str2\n");
    }

    // Substring
    printf("\nSubstring:\n");
    char subStr[20];
    printf("Enter a substring to search in str1: ");
    fgets(subStr, sizeof(subStr), stdin);
    subStr[strcspn(subStr, "\n")] = '\0';  // Remove the newline character

    if (strstr(str1, subStr) != NULL) {
        printf("'%s' is present in '%s'\n", subStr, str1);
    } else {
        printf("'%s' is not present in '%s'\n", subStr, str1);
    }

    return 0;
}