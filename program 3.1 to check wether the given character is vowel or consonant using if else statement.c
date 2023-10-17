#include<stdio.h>
void main()
{
    char ch;
    printf("Enter any character");
    scanf("%c",&ch);
    if(ch=='A'|| ch=='a'|| ch=='E'|| ch=='e'|| ch=='I'|| ch=='i'|| ch=='O'|| ch=='o'|| ch=='U'|| ch=='u');
    {
        printf("It is vowel");
    }
    else
    {
        printf("It is consonent");
    }
}