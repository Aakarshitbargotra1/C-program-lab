#include <stdio.h>
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int num1 = 5;
    int num2 = 10;
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    swap(num1, num2);
    printf("After swapping using pass by value: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}
