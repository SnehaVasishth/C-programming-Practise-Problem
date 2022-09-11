#include <stdio.h>
void main()
{
float prin, rate, year, simple_interest;
printf("enter principal rate and number of years\n");
scanf("%f%f%f",&prin,&rate,&year);
simple_interest=(prin * rate* year)/100;
printf("print simple interest=%f",simple_interest);
getch();
}