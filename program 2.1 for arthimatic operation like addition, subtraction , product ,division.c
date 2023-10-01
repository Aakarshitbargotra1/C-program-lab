#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("sum=%d",c);
    scanf("%d%d",&a,&b);
    c=a-b;
    printf("difference=%d",c);
    scanf("%d%d",&a,&b);
    c=a*b;
    printf("product=%d",c);
    scanf("%d%d",&a,&b);
    c=a/b;
    printf("remainder=%d",c);
    return 0;
}