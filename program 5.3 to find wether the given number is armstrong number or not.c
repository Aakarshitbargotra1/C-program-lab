#include <stdio.h>
 
int main()
{
 
int num,x;
int sum = 0;    
 
printf("Enter a number:");    
scanf("%d",&num);
int i = num;
while(i!=0)  
{  
x = i%10;  
sum= sum + x*x*x;  
i = i/10;  
}
 
if(num==sum)  
{  
printf ("%d is an Armstrong Number.", num);  
}  
else  
{  
printf ("%d is not an Armstrong Number.", num);  
}  
return 0;
}