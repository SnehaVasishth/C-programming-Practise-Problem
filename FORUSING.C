#include <stdio.h>
#include<conio.h>
void main()
{
int n,num , sum;
sum=0;
clrscr();
scanf("%d",&n);
num=n;
for(;n!=0;)
{
sum= sum + (n%10);
n= n/10;
}
printf("%d is sum of digit of%d\n",sum,num);
getch();
}