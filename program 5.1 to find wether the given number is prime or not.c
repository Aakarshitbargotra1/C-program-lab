#include <stdio.h> 
 
int main() 
{ 
 int number, counter, isprime = 0; 
 printf("Enter the positive integer to check for prime or composite\n"); 
 scanf("%d",&number); 
 
 for(counter = 2; counter <= number/2; counter++){ 
 
  if( (number % counter) == 0 ){ 
   isprime = 1; 
   break; 
  } 
 
 } 
 
 if(isprime == 0){ 
  printf("%d is a prime number",number); 
 }else{ 
  printf("%d is a composite number",number); 
 } 
 
 return 0; 
} 