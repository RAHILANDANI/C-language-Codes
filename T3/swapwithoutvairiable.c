//1. W4P to Swap two variables (with sing third variable).
#include <stdio.h>
void main()

{
    int a,b;
    printf("Enter the value of a :\n");
    scanf("%d",&a);
    printf("Enter the value of b :\n");
    scanf("%d",&b);
    

    a=b+a;
    b=a-b;
    a=a-b;


    

    printf("after Swapping the value of a :%d\n",a);
    printf("after Swapping the value of b :%d",b);
}