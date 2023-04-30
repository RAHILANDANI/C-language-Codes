//3.WAP to convert given string in lowercase.

#include<stdio.h>
#include<string.h>
#include<conio.h>

void main()

{
    char a[100];

    printf("Enter the Sentence : ");
    gets(a);

    printf("%s --> %s",a,strlwr(a));

}