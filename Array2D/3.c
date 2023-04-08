#include<stdio.h>

void main()

{
    int i,j,a,b,c[10][10],e,sum=0;

    printf("Enter the no. of row :");
    scanf("%d",&a);

    printf("Enter the no. of column:");
    scanf("%d",&b); 

    for(i=1;i<=a;i++)
    {
        for(j=1;j<=b;j++)
        {
            printf("Enter the no. a[%d] a[%d]:",i,j);
            scanf("%d",&c[i][j]);
        }
    }

    for(i=1;i<=a;i++)
    {
        for(j=1;j<=b;j++)
        {
        sum=sum+c[i][j];
        }
    }

    e=a*b;

    printf("The length of Array is : %d\n",e);

    printf("the average of array id : %d",sum/e);
    




}