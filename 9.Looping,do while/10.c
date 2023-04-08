//WAP to print the multiplication table of N using do while loop./
#include<stdio.h>
void main()
{
    int i=1,a,sum;
    printf("Enter the value of a :");
    scanf("%d",&a);
    do
    {
        sum=a*i;
        printf("%d*%d=%d\n",a,i,sum);
        i++;

    }while(i<=10);
}