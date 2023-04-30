// 1.WAP to find cube of given no using UDF.

#include<stdio.h>

int cube(int a);

void main()
{
    int a,sum=1;

    printf("Enter the Number = ");
    scanf("%d",&a);
    sum=cube(a);

    printf("Cube is = %d",sum);


}
int cube(int x)
{
    return x*x*x;
}