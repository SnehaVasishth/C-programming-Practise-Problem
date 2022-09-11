#include<stdio.h>
#include<math.h>

void power(float,int);
int fact(int);
void leap(int);
int gcd(int,int);
void main()

{
int num, y, yr, a, b, greatest_factor;
float x;
clrscr();
printf("enter the numn");
scanf("%d", &num);
printf("%d\n", fact(num));
printf("enter the base and exponent\n");
scanf("%f%d", &x,&y);
power(x,y);
printf("enter the year\n");
scanf("%d", &yr);
leap(yr);
printf("enter the number\n");
scanf("%d%d", &a, &b);
greatest_factor= gcd(a,b);
printf("%d",greatest_factor);
getch();
}

int fact(int a)
{
int i, factorial= 1;

for(i=1; i<=a; i++)
{
factorial= factorial *i;
}
return(factorial);
}

void power(float x, int y)
{
float p=1.00;
int i;

for(i=1; i<=y; i++)
{
p= p*x;
}
printf("%f is the answer\n",p);
return;
}
void leap(int year)
{
if (year%4==0)
printf("%d is a leap year\n",year);

else
printf("%dis not a leap year\n", year);
return;
}
int gcd(int x, int y)
{
int temp;

if(x > y)
{
	temp= x;
	x=y;
	y= temp;
}
while (y % x != 0)

{
temp= y%x;
x= y;
y= temp;
}
return(x);
}

