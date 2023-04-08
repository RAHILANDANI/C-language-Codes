//3< WAP to Find max< from given 4 no< u2ing nested if else

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

    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                printf("a is the Largest");
            }
            else{
                printf("d is largest");
            }
        
        }
        else if(c>d)
        {
            printf("c is the largest");

        }
        else{
            printf("d is largest");
        }
        
        
   

    }
    else if(b>c)
    {
        if(b>d)
        {
            printf("b is the Largest");
        }
        else{
            printf("d is largest");
        }
    }
    else if(c>d)
    {
        printf("c is largest");
    }
    else{
        printf("d is largest");
    }
}
    