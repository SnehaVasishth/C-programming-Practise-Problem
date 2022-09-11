#include <stdio.h>
#include<conio.h>
void main()

{
int year;
scanf("%d", &year);
if(year % 4 == 0)
printf("leap year\n");
else
printf("non leap year\n");
getch();
}