#include <stdio.h>
void main()

{
int n, sum, num;
float avg;

n =1;
sum=0;
//printf("enter number\n");
//scanf("%d",&num);
while(n <= 5)
{
printf("Enter number\n");
scanf("%d",&num);
sum = sum + num;
n=n+1;
}

avg = sum / n;
printf("Sum = %d and average = %f\n",sum,avg);
getch();
}