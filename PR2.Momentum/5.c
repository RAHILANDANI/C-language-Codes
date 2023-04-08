/*Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.*/
#include<stdio.h>
void main()
{
    float a,b,c,d,e,x,v,f,r;
    printf("Enter the unit you used : ");
    scanf("%f",&a);
    if(a<=50)
    {
        b=a*50/100;
        c=b*20/100;
        d=c+b;
        printf("your final electricity bill is : %f",d);
    }
    else if(a>=50 && a<=150)
    {
        b=(a-50)*75/100;
        x=50*50/100;
        v=b+x;
        c=v*20/100;
        e=c+b+x;
        printf("Your final electricity is : %f",e);

    }
    else if(a>=150 && a<=250)
    {
        b=(a-150)*1.20;
        x=100*0.75;     
        f=50*0.50;
        v=b+x+f;
        c=v*20/100;
        e=c+b+f+x;
        printf("Your final electricity is : %f",e);
    }
    else if(a>250)
    {
        b=(a-250)*1.50;
        x=100*1.20;
        f=100*0.75;
        r=50*0.50;
        v=b+x+f+r;
        c=v*20/100;
        e=c+b+x+f+r;
        printf("Your final electricity is : %f",e);
    }
}