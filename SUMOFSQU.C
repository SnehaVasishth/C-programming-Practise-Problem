#include <stdio.h>
#include<conio.h>
void main()
{
int sum=0, num, i;
clrscr();
printf("enter the value of num\n");
scanf("%d",&num);
for(i=1; i<=num;i++)
{sum = sum+ i*i;}
printf("sum of square of %d numbers is %d\n",num,sum);
getch();
}
