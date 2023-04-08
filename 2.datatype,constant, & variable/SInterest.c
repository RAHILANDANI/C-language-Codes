//5. WAP to Simple interest.

#include <stdio.h>
void main()
{
    float p,r,t,a;

    printf("Enter the Amount : ");
    scanf("%f",&p);
    printf("Enter the rate of interest : ");
    scanf("%f",&r);
    printf("Enter the time (month) : ");
    scanf("%f",&t);

    a=p*r*t/100;

    printf("Simple Interest is : %.3f",a);
    




}