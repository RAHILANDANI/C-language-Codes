//7. WAP to Find max< from 5 using ternary operator

#include <stdio.h>

void main()

{
    int a,b,c,d,e;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    printf("Enter the value of c : ");
    scanf("%d",&c);
    printf("Enter the value of d : ");
    scanf("%d",&d);
    printf("Enter the value of e : ");
    scanf("%d",&e);
   
    a>b&&a>c&&a>d&&a>e?printf("a is Largest "):b>c&&b>d&&b>e?printf("b is Largest"):c>d&&c>e?printf("c is largest"):d>e?printf("d is Largest"):printf("e is largest");
    



}