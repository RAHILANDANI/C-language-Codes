//2. WAP to print month names using switch case.

#include<stdio.h>

void main()
{
    char a;

    printf("enter the first letter of day : ");
    scanf("%c",&a);


    switch(a)
    {
        case 'm':
        case 'M':
        printf("Today is Monday");
        break;
        case 't':
        case 'T':
        printf("Today is Tuesday");
        break;
        case 'w':
        case 'W':
        printf("Today is wednesday");
        break;
        case 'a':
        case 'A':
        printf("Today is Thrusday");
        break;
        case 'f':
        case 'F':
        printf("Today is Friday");
        break;
        case 's':
        case 'S':
        printf("Today is Saturday");
        break;
        case 'b':
        case 'B':
        printf("Today is Sunday");
        break;
        
        default :
        printf("Haltino tha");

    }
}