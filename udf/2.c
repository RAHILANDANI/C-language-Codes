//2.WAP to find if a given nunmber is divisible by 3 & 5 both or not using UDF.


#include<stdio.h>

int div(int a);

void main()

{
    int a,sum;
    printf("Enter the number = ");
    scanf("%d",&a);
    sum=div(a);
}
int div(int x)
{
    if(x%3==0 || x%5==0)
    {
        printf("It is divisible by 3 or 5");

    }
    else{
        printf("It is not divisible by 3 or 5");
    }

}
