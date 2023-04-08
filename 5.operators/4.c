//4.WAP to find a the answer given formula (x-y)3.

#include<stdio.h>

void main()
{
    int x,y,a,b;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    printf("Enter the value of y : ");
    scanf("%d",&y);
    

    a=x-y;
    b=a*a*a;

    printf("(x-y)3 = %d",b);



}