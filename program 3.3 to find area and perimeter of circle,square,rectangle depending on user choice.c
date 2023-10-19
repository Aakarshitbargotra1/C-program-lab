#include<stdio.h>
void main()
{
    int choice;
    float radius,sides,width,length;
    float area,perimeter;
    printf("Select your choice from the following\n");
    printf("\n1. circle");
    printf("\n2. rectangle");
    printf("\n3. square");
    printf("Enter the choice\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("Enter the radius of circle\n");
        scanf("%f",&radius);
        area=3.14*radius*radius;
        perimeter=2*3.14*radius;
    }
    else if(choice==2)
    {
        printf("Enter the length and breadth of rectangle\n");
        scanf("%f",&length);
        scanf("%f",&breadth);
        area=length*breadth;
        perimeter=2*(length+breadth);
    }
    else if(choice==3)
    {
        printf("Enter the sides of square\n");
        scanf("%f",&sides);
        area=sides*sides;
        perimeter=4*sides;
    }
    else
    {
        printf("Invalid choice");
    }
    printf("Area: %.2f",area);
    printf("\n Perimeter: %.2f",perimeter);
}