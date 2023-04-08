#include<stdio.h>

void main()
{
    char al;

    printf("Enter the character : ");
    scanf("%c",&al);


    if(al >='A' && al <='Z' || al <= 'a' && al <= 'z')
    {
        printf("its is a Alphabet");
    }
    else if(al <= 0 && al >=9)
    {
            printf("it is a integer");
    }
    else
    {
        printf("its a special character");
    }
}