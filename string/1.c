//1.WAP to convert given character in Upper Case
#include<stdio.h>
#include<ctype.h>
void main()
{
    char a;

    printf("Enter the character = ");
    scanf("%c",&a);

    printf("%c --> %c",a,toupper(a));
}