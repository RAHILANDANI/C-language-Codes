#include<stdio.h>

void main()

{
    int i,j,a,b,c[10][10],e,f,g[10][10],sum=0;

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
            printf("%d",c[i][j]);
        }
        printf("\n");
    }

    printf("Enter the no. of row :");
    scanf("%d",&e);

    printf("Enter the no. of column:");
    scanf("%d",&f); 

    for(i=1;i<=e;i++)
    {
        for(j=1;j<=f;j++)
        {
            printf("Enter the no. g[%d] g[%d]:",i,j);
            scanf("%d",&g[i][j]);
        }
    }

    for(i=1;i<=a;i++)
    {
        for(j=1;j<=b;j++)
        {
            printf("%d",g[i][j]);
        }
        printf("\n");
    }

    for(i=1;i<=a;i++)
    {
        for(j=1;j<=b;j++)
        {
            sum=c[i][j]+g[i][j];

            printf("The addition of array %d\n",sum);
        }
    }
}