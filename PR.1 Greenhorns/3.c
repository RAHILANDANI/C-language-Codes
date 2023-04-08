//3. Write C program to convert temperature from degree Celsius to Fahrenheit

#include <stdio.h>

void main()
{
    float a,b,c;
    printf("Enter the amount of Degree : ");
    scanf("%f",&a);

    c = ((a * 9/5) + 32);

    printf("Ferenhite = %.3f",c);


}