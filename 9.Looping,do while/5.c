//5. WAP to print even no. from 1 to N using do while loop

#include<stdio.h>

void main()

{
    int i=1,a;

    printf("Enter the Number : ");
    scanf("%d",&a);
    do{
        if(i%2==0){
        printf("even : %d\n",i);
       
        }
         i++;
    }
  
    while(i<=a);
}
