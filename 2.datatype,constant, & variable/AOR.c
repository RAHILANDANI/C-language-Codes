//3. WAP to Find area of rectangle.

#include <stdio.h>

void main()
{
    float l,b,a;

    printf("Enter the Length of Rectangle : ");
    scanf("%f",&l);
    printf("Enter the Breadth of Rectangle : ");
    scanf("%f",&b);

    a=l*b;

    printf("Area of Rectangle is = %.3f",a);

}