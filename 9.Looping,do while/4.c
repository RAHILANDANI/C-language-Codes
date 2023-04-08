//4. WAP to print N to 1 using do while loop.


#include<stdio.h>

void main()

{
    int a,i=1;

    printf("Enter the Number : ");
    scanf("%d",&a);

    do{
        printf("%d\n",a);
        a--;
    }
    while(a>=i);
    
}