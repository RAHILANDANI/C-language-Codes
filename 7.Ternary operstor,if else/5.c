//1; WAP to Find max< from given 3 no< u2ing ternary operator

#include <stdio.h>

void main()

{
    int a,b,c;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    printf("Enter the value of c : ");
    scanf("%d",&c);
   
    a>b&&a>c?printf("a is Largest "):b>c?printf("b is Largest"):printf("c is largest");
    



}
