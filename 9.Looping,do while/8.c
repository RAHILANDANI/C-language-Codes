//8. WAP to print sum 1 to N using do while loop.

#include<stdio.h>

void main()

{
    int a,i=1,sum=0;

    printf("Enter the Number : ");
    scanf("%d",&a);

    do{
       
        sum=sum+i;
        i++;
         }
    while(i<=a);
     printf("%d\n",sum);
    
}
