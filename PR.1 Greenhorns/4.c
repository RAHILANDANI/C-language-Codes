//4. Write C Program to find gross salary.


#include<stdio.h>
void main()
{
int s,a,b,c,sum;
printf("Enter your salary : ");
scanf("%d",&s);
a=s*10/100;
b=s*5/100;
c=s*8/100;
sum=a+b+c+s;

printf("Your final salary is = %d",sum);

}