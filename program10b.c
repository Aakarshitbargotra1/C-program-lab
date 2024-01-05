//factorial of given number using regression

   #include<stdio.h>
   void main()
   {
    int fact(int);
    int num,fact1;
    printf("enter the number");
    scanf("%d",&num);

    fact1=fact(num);
    printf("factorial of %d is %d", num,fact1);

   
   }
   int fact( int n)
     {
    if(n==0)
    return 1;
    else 
    return n*fact(n-1);

   }