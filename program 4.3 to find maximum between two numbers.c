#include <stdio.h> 
 
int main() { 
  int num1, num2, max; 
 
  printf("Enter two numbers: "); 
  scanf("%d %d", &num1, &num2); 
 
  if (num1 > num2) { 
    max = num1; 
  } else { 
    max = num2; 
  } 
 
  printf("The maximum number is %d\n", max); 
 
  return 0; 
} 