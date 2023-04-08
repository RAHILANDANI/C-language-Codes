//9. WAP to calculate the factorial of N. using do while loop.

#include<stdio.h>
void main()
{
    int i=1,a,sum=1;

    printf("Enter the value : ");
    scanf("%d",&a);

    do{
       
        sum=sum*i;
        i++;
         }
    while(i<=a);
     printf("%d\n",sum);
    }


