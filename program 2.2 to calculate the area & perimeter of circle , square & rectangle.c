#include<stdio.h>
void main()
{
    float c;
    //circle
    printf("Enter the radius of the circle:");
    scanf("%f",&r);
    float area , peri;
    area=3.14*r*r;
    peri=2*3.14*r;
    printf("Area of circle=%.2f\n",area);
    printf("perimeter of circle=%.2f\n",peri);
    int a;
    printf("Enter the side");
    scanf("%d",&a);
    int area2,peri2;
    area2 = a*a;
    peri2 = 4*a;
    printf("Area of square=%d\n",area2);
    printf("Perimeter of square=%d\n",peri2);
    printf("Enter length and width of rectangle");
    scanf("%f %F",&l ,&w);
    printf("area of rectangle is : %.2f\n",l*w);
    peintf("perimeter of rectangle:%.2f\n",2*(l+w));
    return 0;
}