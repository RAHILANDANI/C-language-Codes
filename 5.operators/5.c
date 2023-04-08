//5.WAP to find a the answer given formula (x+y+z)3.

#include<stdio.h>

void main()
{
    int x,y,z,a,b;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    printf("Enter the value of y : ");
    scanf("%d",&y);
    printf("Enter the value of y : ");
    scanf("%d",&z);
    

    a=x+y+z;
    b=a*a*a;

    printf("(x+y+z)3 = %d",b);



}