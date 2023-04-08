//1. WAP to create/simulate telecom call service conversation scenario using nested switch case.

#include<stdio.h>

void main()
{
    int a,b;

    printf("Gujrati - 1\n");
    printf("English - 2\n");
    printf("Enter the no. 1-2");
    scanf("%d",&a);


    switch(a)
    {
        case 1:
        printf("1-tamaro datapack janava mate 1 dakhal karo\n");
        printf("2-tamara plan ni validity janva mate 2 dakhal karo\n");
        printf("3-navi offer janva mate 3 dakhal kro\n");
        printf("4-hal ma plan kayo che e jaan va \n");
        scanf("%d",&b);
        break;

        switch(b)
        {
            case 1:
                printf("1 gb baki che haju ");
                break;
                case 2:
                printf("Tame 82 divas mathi 56 divas baki che validity na");
                break;
                case 3:
                printf("666 ma 2 gb 82 divas");
                break;
                case 4:
                printf("tamro plan 729 ma 82 divas 2.5 gb vado clai raihiyo che");
                break;

        
        }
        case 2:
        printf("1-for remainig the data pack\n");
        printf("2-for know about validity\n");
        printf("3-for getting new offer details\n");
        printf("4-current plan details\n");
        scanf("%d",&b);

        switch(b)
        {
            case 1:
                printf("1 gb is remaining");
                break;
                case 2:
                printf("remaining days of validity is 56");
                break;
                case 3:
                printf("666 unlimited calls,unlimited internet,82 days");
                break;
                case 4:
                printf("your plan is for 729- 82 days");
                break;
        }




    }
}
