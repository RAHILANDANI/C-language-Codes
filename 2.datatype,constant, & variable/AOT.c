//4. WAP to Find area of triangle.

#include <stdio.h>

void main()

{
    float h,b,a;

    printf("Enter the height of Triangle : ");
    scanf("%f",&h);
    printf("Enter the base of Triangle : ");
    scanf("%f",&b);

    a=h*b/2;

    printf("Area of Triangle is = %f",a);

}