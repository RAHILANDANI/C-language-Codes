//6. WAP to Find max< from 4 using ternary operator
#include <stdio.h>

void main()

{
    int a,b,c,d;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    printf("Enter the value of c : ");
    scanf("%d",&c);
    printf("Enter the value of d : ");
    scanf("%d",&d);
   
    a>b&&a>c&&a>d?printf("a is Largest "):b>c&&b>d?printf("b is Largest"):c>d?printf("c is largest"):printf("d is Largest");
    



}