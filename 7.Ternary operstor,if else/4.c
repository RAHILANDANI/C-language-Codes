//4. WAP to Find max< from given 5 no using nested if else

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

    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                {
                    if(a>e)
                    {
                        printf("a is the Largest");
                    }
                    else{
                        printf("e is the Largest");
                    }
                }
            }
            else if(d>e)
            {
                printf("d is the Largest");
            }
            else
            {
                printf("e is the Largest");
            }
            
            }
        
        }
        else if(c>d)
        {
            if(c>e)
            {
                printf("c is the Largest");
            }
            else
            {
                printf("e is the Largest");
            }

        }
        else if(d>e)
        {
            printf("d is the Largest");
        }
        else{
            printf("e is the Largest");
        }
        
        
        
   

    }
   
    