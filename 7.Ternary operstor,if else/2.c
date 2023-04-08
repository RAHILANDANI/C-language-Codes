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

    if(a<b)
    {
        if(b<c)
        {
            printf("c is the largest No.");
        }
        else
        {
            printf("b is the Largest no.");
        }
        

    }
    else{
        printf("a is the Largest no.");
        }



}