#include <stdio.h>
#include<conio.h>
void main()
{
int sum=0, num, i=1;
clrscr();
printf("enter the value of num\n");
scanf("%d",&num);
while(i<=num)
{
sum= sum+ i*i;
printf("sum of square of %d numbers is %d\n", i,sum);
i++;
}
getch();
}
