//WAP to make calculator using if else/
#include<stdio.h>
void main()
{
    char c;
    int a,b,sum;

    printf("choose a operator :-\n");
    printf("'+' Addition\n");
    printf("'-' Substraction\n");
    printf("'*' Multiplication\n");
    printf("'/' Division\n");
    printf(" % Remainder\n");
    
    printf("Enter the operator : ");
    scanf("%c",&c);
    printf("Enter the value of a =");
    scanf("%d",&a);
    printf("Enter the value of b =");
    scanf("%d",&b);
    
    
    if(c=='+')
    {
        sum = a+b;
        printf("Your Answer is %d",sum);

    }
    else if(c=='-')
    {
        sum= a-b;
        printf("Your Answer is %d",sum);

    }
    else if(c=='*')
    {
        sum= a*b;
        printf("Your Answer is %d",sum);

    }
    else if(c=='/')
    {
        sum= a/b;
        printf("Your Answer is %d",sum);

    }
    else if(c=='%')
    {
        sum= a%b;
        printf("Your Answer is %d",sum);

    }
    else
    {
        printf("Select Valid option ");
    }
    


    
}