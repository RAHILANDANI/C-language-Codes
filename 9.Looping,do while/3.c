//3. WAP to print 1 to N using do while loop.

#include<stdio.h>

void main()

{
    int i=1,a;

    printf("Enter the Number : ");
    scanf("%d",&a);
    do{
        printf("%d\n",i);
        i++;
    }
    while(i<=a);
}