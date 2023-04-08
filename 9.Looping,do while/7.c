//7. WAP to Find leap year from 2000 to 3000 using do while loop.

#include<stdio.h>

void main()

{
    int i=2000;

    do{
        if(i%4==0){
        printf("leap year : %d\n",i);
       
        }
         i++;
    }
  
    while(i<=3000);
}
